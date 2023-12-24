#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
class CacheNode
{
public:
    int key;
    int value;
    CacheNode(int key, int val)
    {
        this->key = key;
        this->value = val;
    }
};
class LRU
{
private:
    int capacity;
    list<CacheNode> cacheList;
    unordered_map<int, list<CacheNode>::iterator> hmap;

public:
    LRU(int size);
    void put(int key, int val);
    int get(int key);
};

LRU::LRU(int size)
{
    this->capacity = size;
}

void LRU::put(int key, int val)
{
    if (hmap.find(key) != hmap.end())
    {
        auto itr = hmap[key];
        itr->value = val;
        cacheList.splice(cacheList.begin(), cacheList, hmap[key]);
    }
    else
    {
        if (cacheList.size() == this->capacity)
        {
            int lastKey = cacheList.back().key;
            hmap.erase(lastKey);
            cacheList.pop_back();
        }
        CacheNode node(key, val);
        cacheList.push_front(node);
        hmap[key] = cacheList.begin();
    }
}

int LRU::get(int key)
{
    if (hmap.find(key) == hmap.end())
    {
        return -1;
    }
    auto itr = hmap[key];
    cacheList.splice(cacheList.begin(), cacheList, itr);
    return itr->value;
}

class Main
{
public:
    void run()
    {
        // Write you Code Here
        LRU lruCache(2);

        lruCache.put(1, 1);
        lruCache.put(2, 2);
        cout << lruCache.get(1) << endl; // Output: 1
        lruCache.put(3, 3);              // evicts key 2
        cout << lruCache.get(2) << endl; // Output: -1 (not found)
        cout << lruCache.get(3) << endl; // Output: 3
        lruCache.put(4, 4);              // evicts key 1
        cout << lruCache.get(1) << endl; // Output: -1 (not found)
        cout << lruCache.get(3) << endl; // Output: 3
        cout << lruCache.get(4) << endl; // Output: 4
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\DSA\\CPP\\input.txt", "r", stdin);
    freopen("D:\\DSA\\CPP\\output.txt", "w", stdout);
#endif
    Main main;
    main.run();
}