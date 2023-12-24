#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Main
{
public:
    void run()
    {
        // Write you Code Here
        string s;
        cin>>s;
        vector<int> low;
        vector<int> up;
        int i=0;
        for (char ch : s)
        {
            if (ch>='A' && ch<='Z')
            {
                up.push_back(i);
            }
            else if (ch>='a' && ch<='z')
            {
                low.push_back(i);
            }
            i++;
        }
        if(up.size()>low.size())
        {
            for(int j:low)
            {
                s[j] = toupper(s[j]);
            }
        }
        else
        {
            for(int j:up)
            {
                s[j] = tolower(s[j]);
            }
        }
        cout<<s;
        

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