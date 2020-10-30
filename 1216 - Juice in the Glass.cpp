#include <bits/stdc++.h>
#define PI acos(-1)
using namespace std;
int main() {
    double r1,r2,h,p,r,k,pi,res;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        k=h/(r1/r2-1);
        r=((k+p)/k)*r2;
        res=(PI*(r*r*(p+k)-r2*r2*k))/3;
        printf("Case %d: %.9lf\n",i,res);
    }
    return 0;
}
