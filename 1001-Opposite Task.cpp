#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,s,i,q,p;
    p=10;
    q=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        if(n>10){
            s=n-10;
            printf("%d %d\n",s,p);
        }
        else{
          printf("%d %d\n",q,n);
        }
    }
    return 0;
}
