#include<bits/stdc++.h>
#define pi acos(-1.0)
using namespace std;
int main()
{
    int i, t ;

    double R,n,r,angel ;

    scanf ("%d",&t);

    for (i=1;i<=t;i++){

         scanf("%lf %lf",&R,&n);

         angel=(pi)/n ;

         r=R*sin(angel);

         r=r/(1+sin(angel));

         printf ("Case %d: %lf\n",i,r);

      }

   return 0;

}
