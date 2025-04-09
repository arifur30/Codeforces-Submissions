#include<bits/stdc++.h>
using namespace std;



int main()
{

    long long t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        bool flag = false;
        for(long long i = 0; i < s.size() - 1; i++)
        {
            if(s[i] == s[i+1])
            {
                cout << s[i] << s[i+1] << endl;
                flag = true;
                break;
            }
            else
            {
                if(i+2 < s.size() && s[i+2] != s[i] && s[i+2] != s[i+1])
                {
                    cout << s[i] << s[i+1] << s[i+2] << endl;
                    flag = true;
                    break;
                }
            }
        }

        if(!flag)
        {
            cout << -1 << endl;
        }
        
    }
    
    return 0;
}




// .... . -.-- / ... .. .-.. . -. - / ..-. .- -. / --- ..-. / -- .. -. .
