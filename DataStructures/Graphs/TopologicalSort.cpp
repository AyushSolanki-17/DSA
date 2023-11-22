#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Main
{
public:
    void getAdjList(int m,vector<int> adjList[])
    {
        for (int i = 0; i < m; i++)
        {
            int u,v;
            cin >> u >> v;
            adjList[u].push_back(v);
        }
        
    }
    void dfs(int node,stack<int>& stck,vector<int>& visited,vector<int> adjList[])
    {
        visited[node] = 1;
        
        for (int i: adjList[node])
        {
            if (!visited[i])
                dfs(i,stck,visited,adjList);
        }
        
        stck.push(node);

    }
    void run()
    {
        // Write you Code Here
        int n,m;
        cin>>n>>m;
        vector<int> adjList[n];
        vector<int> visited(n,0);
        stack<int> stck;
        getAdjList(m,adjList);
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs(i,stck,visited,adjList);
            } 
        }
        while (!stck.empty())
        {
            cout<<stck.top()<<" ";
            stck.pop();
        }
        
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