#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    int t, i, j;
    scanf("%d", &t);
    while (t--)
    {
        char s[100];
        int temp = 0,x=0,y=0,l;
        scanf("%d", &l);
        scanf("%s", &s);

        for(i=0;i<l;i++)
        {
            
            if(s[i] == 'U')
                y++;
            else if(s[i] == 'D')
                y--;
            else if(s[i] == 'R')
                x++;
            else if(s[i] == 'L')
                x--;   
            if(x == 1)
            {
                if(y == 1)
                {
                    temp = 1;
                }
            } 
            
        }
        if(temp != 1)
            printf("NO\n");
        else
            printf("YES\n");
        
        
    }
    
    return 0;
}
