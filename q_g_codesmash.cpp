
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int d, n;
    cin>>d;
    while(d--)
    {
        cin>>n;
        int i = 1;
        double sum1 = n * (n+1)/2.0;
        int sum = sum1;
//
        sum -= 1;
      //  cout<<"sum "<<sum<<endl;
        if(sum % n != 0)
            {
                int temp = sum/ n;
                i = (++temp * n) - sum;
            }
        else{
            i = 2;
        }
        cout<<i<<" ";
      for(int j = 2; j <= n ; j++)
            cout<<j << " ";
        cout<<'\n';

    }



}
