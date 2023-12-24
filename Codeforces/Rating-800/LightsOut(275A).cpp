#include <iostream>
#include <vector>
using namespace std;
class Main
{
public:
    void toggle(int row,int col,vector<vector<int>>& op)
    {
        int drow[4] = {-1,1,0,0};
        int dcol[4] = {0,0,-1,1};
        op[row][col] = op[row][col]?0:1;
        for(int i=0;i<4;i++)
        {
            int nrow = row+drow[i];
            int ncol = col+dcol[i];
            if(nrow>=0 && nrow<3 && ncol>=0 && ncol<3)
            {
                op[nrow][ncol] = op[nrow][ncol]?0:1;
            }
        }
    }
    void run()
    {
        // Write you Code Here
        int x;
        vector<vector<int>> op(3,vector<int>(3,1));
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>x;
                if(x%2!=0)
                {
                    toggle(i,j,op);
                }
                
            }
        }
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<op[i][j];
            }
            cout<<endl;
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