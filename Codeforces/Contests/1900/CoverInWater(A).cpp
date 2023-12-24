#include <iostream>
#include <vector>

#include <algorithm>
#include <math.h>
using namespace std;
class Main
{
public:
    void fill()
    {
        int n;
        cin >> n;

        string levels;
        cin >> levels;
        int count = 0, sub = 0;
        for (char c : levels)
        {
            if (c == '.')
            {
                count++;
                sub++;
                if (sub == 3)
                {
                    cout << 2 << endl;
                    return;
                }
            }
            else
            {
                sub = 0;
            }
        }
        cout << count << endl;
        return;
    }
    void run()
    {
        int test;
        cin >> test;
        while (test--)
        {
            fill();
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