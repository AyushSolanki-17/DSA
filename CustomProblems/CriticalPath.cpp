#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Main
{
public:

    void topoSort(int n,vector<vector<int>>& adjList)
    {
        priority_queue<int> pq;
        vector<int> in_deg(n,0);
        vector<int> topo;
        for (int i = 0; i < n; i++)
        {
            for (int j:adjList[i])
            {
                in_deg[j]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (in_deg[i]==0)
            {
                pq.push(i);
            }
            
        }
        while (!pq.empty())
        {
            int node = pq.top();
            pq.pop();
            topo.push_back(node);
            for (int adj:adjList[node])
            {
                in_deg[adj]--;
                if(in_deg[adj]==0)pq.push(adj);
            }
            
        }
        for (auto i : topo)
        {
            cout<<i+1<<" ";
        }
        cout<<endl;
        
        
        
    } 
    void run()
    {
        // Write you Code Here
        int t;
        cin>>t;
        while (t>0)
        {
            t-=1;
            int n,m;
            cin>>n>>m;
            
            vector<vector<int>> adjList(n);
            for (int i = 0; i < n; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    adjList[i].push_back(j);
                    
                }
            }
            
            
            for (int i = 0; i < m; i++)
            {
                int u,v;
                cin>>u>>v;
                u--;
                v--;
                auto itr = find(adjList[u].begin(),adjList[u].end(),v);
                adjList[u].erase(itr);
            }
            topoSort(n,adjList);
            
           
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