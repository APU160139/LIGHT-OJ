#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,m,n,p,r,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&m,&n);
        p=m*n;
        if(m==1 || n==1){
            r=p;
        }
        else if(m==2 || n==2){
            if(m==2){
               s=n;
            }
            else{
               s=m;
            }
            if(s%4==1){
                r=s+1;
            }
            else if(s%4 == 2){
               r=s+2;
            }
            else if(s%4 == 3){
               r=s+1;
            }
            else if(s%4 == 0){
               r=s;
            }
        }
        else if(p%2 == 0){
           r=p/2;
        }
        else{
           r=(p/2)+1;
        }
        printf("Case %d: %d\n",i,r);
    }
    return 0;
}
