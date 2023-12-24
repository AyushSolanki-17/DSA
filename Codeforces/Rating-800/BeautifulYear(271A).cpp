#include <iostream>
#include <unordered_set>
using namespace std;
class Main
{
public:
    bool valid(int num)
    {
        unordered_set<int> st;
        
        while (num > 0)
        {
            int digit = num % 10;
            if (st.count(digit))
            {
                return false;
            }
            st.insert(digit);
            num = num / 10;
            
        }
        return true;
    }
    void run()
    {
        // Write you Code Here
        int year;
        cin>>year;
        for (int i = year+1; i < 9013; i++)
        {

            if (valid(i))
            {
                cout<<i;
                break;
            }
            
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