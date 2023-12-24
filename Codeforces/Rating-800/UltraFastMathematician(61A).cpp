#include <iostream>
#include <bitset>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        string s1,s2;
        cin>>s1>>s2;
        for (int i = 0; i < s1.length(); i++)
        {
            cout<<((s1[i]-'0')^(s2[i]-'0'));
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