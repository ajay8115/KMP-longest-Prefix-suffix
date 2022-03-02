// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

// KMP BY : - Abdul Bari
class Solution
{
public:
    int lps(string s)
    {
        int n = s.size();

        int i = 0;
        int j = 1;
        int lps[n];
        lps[0] = 0;

        while (j < n)
        {
            if (s[i] == s[j])
            {
                lps[j] = i + 1;
                i++;
                j++;
            }
            else
            {
                if (i == 0)
                {
                    lps[j] = 0;
                    j++;
                }
                else
                {
                    i = lps[i - 1];
                }
            }
        }

        return lps[n - 1];
    }
};