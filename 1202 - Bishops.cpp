#include <bits/stdc++.h>
using namespace std;
int main()
{

        int T,i,r1,c1,r2,c2,x,y;
        scanf("%d",&T);
        for(i=1;i<=T;i++)
        {
            scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
            printf("Case %d: ",i);
            x=abs(r1-r2);
            y=abs(c1-c2);
            if(x==y)
                printf("1\n");
            else
            {
                if(x%2==y%2)
                    printf("2\n");
                else
                    printf("impossible\n");
            }
        }
        return 0;
    }
