#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        long long n;
        cin>>n;
        cout<<n<<" ";
        while (n!=1)
        {
            if(!(n&1))
            {
                n/=2;
            }
            else
            {
                n*=3;
                n+=1;
            }
            cout<<n<<" ";
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