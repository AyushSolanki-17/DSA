#include <iostream>
#include <vector>
using namespace std;
class Main
{
public:
    void dfs(int node,int color,vector<int>& visited,vector<int>& odd,vector<int>& even,vector<vector<int>>& adjList)
    {
        visited[node]=1;
        if(color==0)
        {
            even.push_back(node);
        }
        else
        {
            odd.push_back(node);
        }
        int newColor = color?0:1;
        for (int i:adjList[node])
        {
            if (visited[i]==0)
            {
                dfs(i,newColor,visited,odd,even,adjList);
            }
        }
        
    }
    void run()
    {
        // Write you Code Here
        int test;
        cin>>test;
        for(int i=0;i<test;i++)
        {
            int n,m;
            cin>>n>>m;
            vector<vector<int>> adjList(n+1);
            int u,v;
            for (int i = 0; i < m; i++)
            {
                cin>>u>>v;
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }
            vector<int> visited(n+1,0);
            vector<int> odd;
            vector<int> even;
            dfs(1,1,visited,odd,even,adjList);
            int o = odd.size();
            int e =  even.size();
            if(o<=e)
            {
                cout<<o<<endl;
                for (int i:odd)
                {
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
            else
            {
                cout<<e<<endl;
                for (int i:even)
                {
                    cout<<i<<" ";
                }
                cout<<"\n";
            }
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