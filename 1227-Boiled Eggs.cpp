#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q,t,i,j,c,s,v[100];
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d %d",&n,&p,&q);
        c=0;
        s=0;
        for(j=0;j<n;j++){
            scanf("%d",&v[j]);
            s=s+v[j];
            if(c<p && s<=q){
              c++;
            }
        }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
