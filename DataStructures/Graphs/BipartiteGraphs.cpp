#include <iostream>
#include <vector>
using namespace std;
class Main
{
public:
    void getAdjList(int n, int m, vector<int> adjList[])
    {
        for (int i = 0; i < m; i++)
        {
            int u, v;
            cin >> u >> v;
            // Undirected Graph
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
    bool isBipartite(int node,int color, vector<int> visited,vector<int> adjList[])
    {
        visited[node] = color;
        int newColor = color?0:1;
        for(int i:adjList[node])
        {
            if(visited[i]==-1)
            {
                if(isBipartite(i,newColor,visited,adjList)==false)
                {
                    return false;
                }
            }
            else if(color == visited[i]){
                return false;
            }
        }
        return true;
    }
    void run()
    {
        // Write you Code Here
        int m, n;
        cin >> n >> m;
        vector<int> adjList[n + 1];
        getAdjList(n, m, adjList);
        vector<int> visited(n + 1, -1);
        cout << isBipartite(1, 0, visited, adjList);
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