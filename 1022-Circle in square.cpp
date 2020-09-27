#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double r,c,s,res;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf",&r);
        c=(2*acos(0.0))*r*r;
        s=(2*r)*(2*r);
        res=s-c;
        printf("Case %d: %.2lf\n",i,res);
    }
    return 0;
}
