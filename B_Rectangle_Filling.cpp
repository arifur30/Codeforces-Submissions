#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
cin>>t;
while(t--)
{
    int n,k;
    cin>>n>>k;
    char arr[n][k];
    int a=0,b=0,ans=0,c=0,d=0;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<k;j++)
            {
                cin>>arr[i][j];
            } 
    }
     int count=0;
    if(n==1 && k==1) cout<<"YES"<<endl;
    else if(n!=1 && k==1)
    {
        for(int i=0;i<n-1;i++)
       {
        if(arr[i][1]==arr[i+1][1]){
            count++;
        }
       }
       if(count==(n-1))cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    else if(n==1 && k!=1)
    {
        for(int i=0;i<k-1;i++)
       {
        if(arr[1][i]==arr[1][i+1]){
            count++;
        }
       }
       if(count==(n-1))cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    else if ( n!=1 && k!=1)
    {
      for(int i=0;i<n;i++)
            {
            for(int j=0;j<k;j++)
                {  
              if(arr[1][1]==arr[i][j]){
                    count++;
                }
            }
            }

            if(count==(n*k))cout<<"YES"<<endl;
            else
    {
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<k;j++)
        {
            if(arr[i][j]=='B')
            {
                b++;
            }
            else
            {
                a++;
            }
        } 
        if(a>0 &&b>0)
        {
            ans++;
            break;
        }
        else
        {
            a=0;
            b=0;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
       for(int j=(k-1);j>=0;j--)
        {
            if(arr[i][j]=='B')
            {
                c++;
            }
            else
            {
                d++;
            }
        } 
        if(c>0 &&d>0)
        {
            ans++;
            break;
        }
        else
        {
            c=0;
            d=0;
        }
    }

    if(ans>1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl; 
    }
            
    }

    
}
    return 0;
}