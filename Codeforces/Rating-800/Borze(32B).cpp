#include <iostream>
#include <cstdio>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        string borze;
        string num="";
        cin>>borze;
        for (int i = 0; i < borze.length(); i++)
        {
            if(borze[i]=='.')
            {
                num+='0';
            }
            else if(borze[i]=='-' && borze[i+1]=='.')
            {
                num+='1';
                i++;
            }
            else if(borze[i]=='-' && borze[i+1]=='-')
            {
                num+='2';
                i++;
            }
        }
        cout<<num;
    }
};
int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:\\DSA\\CPP\\input.txt", "r", stdin);
    freopen("D:\\DSA\\CPP\\output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    Main main;
    main.run();
}