#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        long long n,sum=0,s;
        cin>>n;
        for (int i = 1; i < n; i++)
        {
            cin>>s;
            sum+=s;
        }
        cout<<(n*(n+1))/2-sum;
        
        
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