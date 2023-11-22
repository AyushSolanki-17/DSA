#include <iostream>
#include <cstdlib>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        int r,c,x;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                cin>>x;
                if(x!=0)
                {
                    r=i;
                    c=j;
                    break;
                }
            }
        }
        int sum  = abs(2-r) + abs(2-c);
        cout<<sum;
        
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