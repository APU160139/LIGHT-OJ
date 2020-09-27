#include <bits/stdc++.h>
int main(){
    int t,a,b,c,i,first,second,third;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        first=sqrt(a*a+b*b);
        second=sqrt(a*a+c*c);
        third=sqrt(b*b+c*c);
        if(first==c)
        {
            printf("Case %d: yes\n",i);
        }
        else if(second==b)
        {
            printf("Case %d: yes\n",i);
        }
        else if(third==a)
        {
            printf("Case %d: yes\n",i);
        }
        else
            printf("Case %d: no\n",i);

    }

    return 0;
}
