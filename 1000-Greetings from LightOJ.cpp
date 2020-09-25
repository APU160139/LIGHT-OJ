#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,sum,a,b;
    scanf("%d",&t);
    sum=0;
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&b);
        sum=a+b;
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
