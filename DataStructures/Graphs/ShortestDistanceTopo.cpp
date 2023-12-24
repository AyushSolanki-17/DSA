#include <iostream>
#include <vector>
#include <stack>
#include <climits>
using namespace std;
class Main
{
public:
    void topologicalSort(int node,stack<int>& stck,vector<int>& visited,vector<vector<pair<int, int>>>& adjList)
    {
        visited[node] = 1;
        for (auto itr : adjList[node])
        {
            int u = itr.first;
            if (!visited[u])
            {
                topologicalSort(u,stck,visited,adjList);
            }
        }
        stck.push(node);
    }
    vector<int> calcDistance(int n,stack<int>& topo,vector<vector<pair<int, int>>>& adjList)
    {
        vector<int> distance(n,INT_MAX);
        distance[topo.top()] = 0;
        cout<<"Topo Sort"<<endl;
        while (!topo.empty())
        {
            int node = topo.top();
            topo.pop();
            cout<<node<<" ";
            for (auto i:adjList[node])
            {
                int v = i.first;
                int wt = i.second;
               
                
                if (distance[node]+wt<distance[v])
                {
                    distance[v] = distance[node]+wt;
                }
                
            }
            
        }
        
        return distance;
    }
    void run()
    {
        // Write you Code Here
        int n,m;
        cin >> n >> m;
        
        vector<vector<pair<int, int>>> adjList(n,vector<pair<int, int>>());
        for (int i = 0; i < m; i++)
        {
            int u,v,w;
            cin>>u;
            cin>>v;
            cin>>w;
            adjList[u].push_back({v,w});
        }
        stack<int> stck;
        vector<int> visited(n,0);
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                topologicalSort(i,stck,visited,adjList);
            }

        }
        vector<int> distance = calcDistance(n,stck,adjList);
        cout<<"\nDistance Vector\n";
        for (int i : distance)
        {
            /* code */
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