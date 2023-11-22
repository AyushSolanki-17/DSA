#include <iostream>
#include <vector>
#include <queue>
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
    
    void run()
    {
        // Write you Code Here
        int n,m;
        cin>>n>>m;
        vector<int> adjList[n];
        vector<int> in_degree(n,0);
        vector<int> topo;
        queue<int> que;
        getAdjList(m,adjList);
        
        for (int i = 0; i < n; i++)
        {
            for (int it: adjList[i])
            {
                in_degree[it]+=1;
            }
        }
        for (int i=0;i<n;i++)
        {
            if (in_degree[i]==0)
            {
                que.push(i);
            }
            
        }
        
        while (!que.empty())
        {
            int ele = que.front();
            que.pop();
            topo.push_back(ele);
            for (int  i: adjList[ele])
            {
                in_degree[i]--;
                if (in_degree[i]==0)
                {
                    que.push(i);
                }
                
            }
            
        }
        for (int i : topo)
        {
            cout<<i<<" ";
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