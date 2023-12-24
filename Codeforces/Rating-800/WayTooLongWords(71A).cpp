#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        int n;
        cin>>n;
        while(n-->0)
        {
            string s;
            cin>>s;
            int l = s.length();
            if (l>10)
            {
                cout<<s[0]<<l-2<<s[l-1]<<endl;
            }
            else
            {
                cout<<s<<endl;
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