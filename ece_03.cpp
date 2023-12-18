#include<bits/stdc++.h>
using namespace std;

int main()
{
    int l, i, cnt = 0, min = 0;
    string s;
    cin>>l;
    cin>>s;
    for(i=0;i<l;i++)
    {

        if(s[i] == 'o')
        {
            cnt++;
        }
        else if(s[i] == 'x')
            min++;

    }

    if(cnt > 0 && min == 0)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;


}