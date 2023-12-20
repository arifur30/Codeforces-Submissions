#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    /* code */
    int t;
    cin>>t;

    while (t--)
    {
        int strlen,cnt =0;
        cin>>strlen;
        string s;
        cin>>s;
        int arr[27] = {0};
        for(int i = 0; i < strlen; i++)
        {
            arr[s[i] - 64]++ ;
        }

        for(int i= 1; i < 27; i++)
        {
            if(arr[i] >= i)
                cnt++;
        }
        cout<<cnt<<endl;
            
    }
    
    return 0;
}
