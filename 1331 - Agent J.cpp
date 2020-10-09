#include<bits/stdc++.h>
using namespace std;
int main()
{
    double r1,r2,r3,a,b,c,s,X,Y,Z,Area,Area1;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
      scanf("%lf %lf %lf",&r1,&r2,&r3);

      a = r2 + r3;
      b = r1 + r3;
      c = r1 + r2;

      s = (a+b+c)/2;

      Area = sqrt(s*(s-a)*(s-b)*(s-c));

      X = acos((b*b+c*c-a*a)/(2*b*c));
      Y = acos((c*c+a*a-b*b)/(2*a*c));
      Z = acos((a*a+b*b-c*c)/(2*a*b));

      Area1 = Area - (0.5)*(r1*r1*X+r2*r2*Y+r3*r3*Z);

      printf("Case %d: %.08lf\n",i,Area1);
   }
return 0;
}
