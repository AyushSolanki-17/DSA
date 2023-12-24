#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        int n,count=0;
        string s;
        cin>>n;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
        }
        cout<<count;
        
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