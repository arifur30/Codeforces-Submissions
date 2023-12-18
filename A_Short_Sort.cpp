#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, i;
    cin>>t;
    while(t--)
    {
        string str, str2 = "abc";
        cin>>str;
       
            if(str == str2)
                cout<<"YES"<<endl;
            else if((str[0] == 'a' || str[0] == 'c') && (str[2] == 'c' || str[2] == 'a') && (str[1] == 'b'))
                cout<<"YES"<<endl;
            else if ((str[0] == 'b'  && str[1] == 'a'))
                cout<<"YES"<<endl;
            else if ((str[2] == 'b'  && str[1] == 'c'))  
                cout<<"YES"<<endl;
            else 
            {
                cout<<"NO"<<endl;
            }
        

    }
    return 0;
}