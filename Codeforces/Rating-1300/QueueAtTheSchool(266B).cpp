#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        int n,t;
        cin>>n>>t;
        string s;
        cin>>s;
        
        while (t>0)
        {
            t--;
            for (int i = 0; i < n-1; i++)
            {
                if(s[i]=='B' && s[i+1]=='G')
                {
                    s[i]='G';
                    s[i+1]='B';
                    i++;
                }
            }
        }
        cout<<s;
        
        
        
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