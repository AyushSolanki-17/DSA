#include <iostream>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        int n,count=0;
        cin>>n;
        while(n-->0)
        {
            int p,v,t;
            cin>>p>>v>>t;
            int a = p & v;
            int b = p & t;   
            int c = v & t;
            int d = a||b||c;
            if(d){
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