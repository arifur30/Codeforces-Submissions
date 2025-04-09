#include <bits/stdc++.h>
using namespace std;



int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, first_green_position = -1;
        char ch;
        cin >> n >> ch;
        set<long long> distances;

        string s;
        cin >> s;

        for (long long i = 0; i < n; i++)
        {
            if (s[i] == 'g' && first_green_position == -1)
            {
                first_green_position = i;
                break;
            }
        }

        for (long long i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'g')
            {
                first_green_position = i;
            }
            else if (s[i] == ch)
            {
                if (i > first_green_position)
                {
                    distances.insert(first_green_position + (n - i));
                }
                else
                {
                    distances.insert(first_green_position - i);
                }
            }
        }

        if (ch == 'g')
        {
            cout << 0 << "\n";
            continue;
        }

        cout << *distances.rbegin() << "\n";
    }

    return 0;
}
