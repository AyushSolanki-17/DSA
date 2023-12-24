#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
class CacheNode
{
public:
    int key;
    int value;
    int freq;
    CacheNode(int k, int v)
    {
        this->key = k;
        this->value = v;
        this->freq = 1;
    }
};
class LFU
{
private:
    /* data */
    int capacity;
    int minFreq;
    list<CacheNode> cacheList;
    unordered_map<int,list<CacheNode>::iterator> hmap;
    unordered_map<int,list<CacheNode>> freqList;
    void increaseFreq(CacheNode node*)
    {
        
        int curr = node->freq;
        freqList[curr].erase(node);
        if (frequencyMap[curr].empty()) {
            frequencyMap.erase(curr);
        }
        node->freq=curr+1;
        freqList[curr+1].push_back(node);
    }
public:
    LFU(int capacity);
    ~LFU();
    int get(int key);
    void put(int key, int value);
};

LFU::LFU(int capacity)
{
    this->capacity = capacity;
    this->minFreq = 1;
}

LFU::~LFU()
{
}

int LFU::get(int key)
{
    if(hmap.count(key)>0)
    {
        int value = hmap[key]->value;
        CacheNode* node = *hmap[key];
        increaseFreq(node);
    }
    return -1;
}

class Main
{
public:
    void run()
    {
        // Write you Code Here
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