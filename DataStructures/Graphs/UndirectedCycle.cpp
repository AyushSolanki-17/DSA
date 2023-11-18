#include <iostream>
#include <vector>
using namespace std;
class Main
{
public:
    void getAdjList(int n,int m,vector<int> adjList[])
    {
        for (int i = 0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;
            // Undirected Graph
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    bool isCycle(int node, int parent, vector<int> visited,vector<int> adjList[])
    {
        visited[node] = 1;
        for (auto x : adjList[node])
        {
            if(!visited[x])
            {
                if(isCycle(x,node,visited,adjList))
                    return true;
            }
            else if(parent != x)
                return true;
        }
        return false;
    }
    void run()
    {
        // Write you Code Here
        int m,n;
        cin>>n>>m;
        vector<int> adjList[n+1];
        getAdjList(n,m,adjList);
        vector<int> visited(n+1,0);
        cout<<isCycle(1,0,visited,adjList);
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