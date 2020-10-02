#include<bits/stdc++.h>
using namespace std;
int binary(int n);
int main()
{
    int a,b,c,d,e,f,g,h,i,k,m,n,p,T;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
         scanf("%d.%d.%d.%d",&a,&b,&c,&d);
         e = binary(a);
         f = binary(b);
         g = binary(c);
         h = binary(d);
        scanf("%d. %d. %d. %d",&k,&m,&n,&p);
        if(e==k && f==m && g==n && h==p){
            printf("Case %d: Yes\n",i);
        }
        else{
          printf("Case %d: No\n",i);
        }
    }
   return 0;
}

int binary(int n)
{
    int rem,i=1,bin=0;
    while (n!=0)
    {
        rem=n%2;
        n = n/2;
        bin=bin+rem*i;
        i*=10;
    }
    return bin;
}
