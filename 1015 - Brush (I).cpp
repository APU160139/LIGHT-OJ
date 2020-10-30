#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,p,i,j,sum;
    scanf("%d",&t);
        for(i=1;i<=t;i++){
            sum=0;
            scanf("%d",&n);
            for(j=1;j<=n;j++){
                scanf("%d",&p);
                if(p>0){
                    sum=sum+p;
                }
            }
        printf("Case %d: %d\n",i,sum);
        }
    return 0;
}
