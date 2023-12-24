#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Main
{
public:
    vector<int> topoSort(int n,vector<int> adjList[])
    {
        vector<int> in_degree(n,0);
        vector<int> topo;
        queue<int> que;
        
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
        return topo;
    }
    void run()
    {
        // Write you Code Here
        int n,k;
        cin>>n>>k;
        string dct[n];
        for(int i=0;i<n;i++)
        {
            cin>>dct[i];
        }

        vector<int> adjList[k];
        for (int i = 0; i < n-1; i++)
        {
            string s1 = dct[i];
            string s2 = dct[i+1];
            int len = min(s1.length(),s2.length());
            for (int j = 0; j < len; j++)
            {
                if(s1[j]!=s2[j])
                {
                    adjList[s1[j]-'a'].push_back(s2[j]-'a');
                    break;
                }
            }
        }
        
        vector<int> topo = topoSort(k,adjList);
        string s="";
        for (int i = 0; i < topo.size(); i++)
        {
            s+=char(topo[i]+'a');
        }
        cout<<s<<endl;
        
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