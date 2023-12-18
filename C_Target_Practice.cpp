#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[11][11];
        int cnt = 0;
        for(int i=0;i<10;i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin>>str[i][j];
                if(str[i][j]=='X')
                {
                    if(i == 0 || i == 9)
                    {
                        cnt++;
                    }
                    else
                    {
                        if(j == 0 || j == 9)
                            cnt++;
                        else if(j == 1 || j == 8 || ( (i == 1 || i == 8) && j >=1 && j <=8))
                            cnt += 2;
                        else if(j == 2 || j == 7 || ((i == 2 || i == 7 )&& j >=2 && j <=7))                                                                                                                                 
                            cnt += 3;
                        else if(j == 3 || j == 6 || ((i == 3 || i == 6) && j >= 3 && j <= 6))                                                                                                           
                        {
                            cnt += 4;
            
                        }
                        else if((i == 4 && (j == 4 || j == 5)) || ((j == 5 || j == 4) && i == 5))
                            cnt += 5;
                        
                    }                   
                }
            }
            


        }
    cout << cnt << '\n';
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}