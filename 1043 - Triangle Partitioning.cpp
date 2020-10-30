#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    double ab,ac,bc,ad,r,x;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lf %lf %lf %lf",&ab,&ac,&bc,&r);
        x=sqrt(r/(r+1));
        ad =x*ab;
        printf("Case %d: %.10lf\n",i,ad);
    }
    return 0;
}
