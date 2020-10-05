#include <bits/stdc++.h>
using namespace std;
int main()
{
        int i,T,Ox,Oy,Ax,Ay,Bx,By;
        double angle,ans,AB,OB,OA;
        scanf("%d",&T);
        for(i=1;i<=T;i++){
            scanf("%d %d %d %d %d %d",&Ox,&Oy,&Ax,&Ay,&Bx,&By);
            AB = sqrt(pow(Ax-Bx,2)+pow(Ay-By,2));
            OB = sqrt(pow(Ox-Bx,2)+pow(Oy-By,2));
            OA= OB;
            angle = acos((OB*OB + OA*OA-AB*AB)/(2*OB*OA));
            ans = OB*angle;
            printf("Case %d: %f\n",i,ans);

    }
        return 0;
}
