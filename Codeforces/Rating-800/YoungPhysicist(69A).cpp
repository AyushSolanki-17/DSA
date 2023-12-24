#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        int x,y,z;
        int sx=0,sy=0,sz=0,n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x>>y>>z;
            sx += x;
            sy += y;
            sz += z;
        }
        if (sx==0&&sy==0&&sz==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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