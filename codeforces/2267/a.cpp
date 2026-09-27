#include <iostream>
using namespace std;
#define int long long

bool isPalindrome(string s)
{

    int left = 0;
    int right = s.length() - 1;

    while (left < right)
    {
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}

signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        char c;
        cin >> c;

        string s;
        cin >> s;
        if (isPalindrome(s))
            cout << 0 << '\n';

        else
        {

            int left = 0;
            int right = s.length() - 1;

            int count = 0;
            while (left < right)
            {
                if (s[left] != s[right])
                {
                    if (s[left] != c)
                        count++;

                    if (s[right] != c)
                        count++;
                }

                left++;
                right--;
            }

            cout << count << '\n';
        }
    }

    return 0;
}