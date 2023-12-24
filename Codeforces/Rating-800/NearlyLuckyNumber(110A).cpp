#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        long long n;
        cin >> n;
        int count=0;
        while (n>0)
        {
            int d = n % 10;
            if(d==4 || d ==7){
                count++;
            }
            n/=10;
        }
        if(count==4 || count ==7)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
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