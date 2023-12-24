#include <iostream>
#include <vector>
#include <set>
using namespace std;

class Main
{
public:
    void run()
    {
        int t;
        std::cin >> t;

        while (t--)
        {
            int n;
            std::cin >> n;

            std::string binaryString;
            std::cin >> binaryString;

            std::vector<int> zeroPositions;
            for (int i = n - 1; i >= 0; i--)
                if (binaryString[i] == '0')
                    zeroPositions.emplace_back(i);
            
            for (int i:zeroPositions)
            {
                cout<<i<<" ";
            }
            cout<<"\n";
            long long ans = 0;
            for (int i = 0; i < n; i++)
                std::cout << (i < zeroPositions.size() ? ans += n - i - zeroPositions[i] - 1 : -1) << (i < n - 1 ? ' ' : '\n');
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

    return 0;
}
