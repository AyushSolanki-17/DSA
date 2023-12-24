#include <iostream>
#include <vector>
#include <climits>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        int n;
        cin>>n;
        vector<int> vec(n);
        int curr = INT_MAX,pos=0,ans=INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin>>vec[i];
            if (vec[i]<curr)
            {
                curr = vec[i];
                pos = i;
                ans = INT_MAX;
            }
            if(vec[i]==curr && (i-pos)!=0)
            {
                ans = min(ans,i-pos);
                pos = i;
            }
        }
        cout<<ans;
        
        


        
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