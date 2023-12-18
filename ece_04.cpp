#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s , t;
    
    getline(cin, s);
    getline(cin, t);
    int fstr[27] = {0}, sstr[27] = {0};
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == '@')
            fstr[26]++;
        else
        fstr[s[i] - 'a']++;
        if(t[i] == '@')
            sstr[26]++;
        else
            sstr[t[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++)
    {
        if(fstr[i]!= sstr[i])
        {
            if(i + 'a' == 'a' || i + 'a' == 't' || i + 'a' == 'c' || i + 'a' == 'o' || i + 'a' == 'd' || i + 'a' == 'e' || i + 'a' == 'r')
                {
                    if()
                }
        }
    }
    return 0;


}