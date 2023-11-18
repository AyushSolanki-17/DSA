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
            // Directed Graph
            adjList[u].push_back(v);
        }
    }
    bool isCycle(int node,vector<int> visited,vector<int> adjList[])
    {
        visited[node] = 2;
        for(int i:adjList[node])
        {
            if(visited[i]==0)
            {
                if(isCycle(i,visited,adjList))
                    return true;
            }
            else if(visited[i]==2){
                return true;
            }
        }
        visited[node]=1;
        return false;
    }
    void run()
    {
        // Write you Code Here
        int n,m;
        cin>>n>>m;
        vector<int> adjList[n+1];
        getAdjList(n,m,adjList);
        vector<int> visited(n+1,0);
        cout<<"Graph contains cycle : "<<isCycle(1,visited,adjList)<<endl;
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