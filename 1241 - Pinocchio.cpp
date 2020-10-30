#include<bits/stdc++.h>
#define allah_hafej return 0
#define copy_na_maira_nije_kor int main()
#define de scanf
#define dekh printf
using namespace std;
copy_na_maira_nije_kor{
    int t,n,i,j,k,m,sum,b,c,s[100];
    de("%d",&t);
    for(i=1;i<=t;i++){
        de("%d",&n);
        for(j=1;j<=n;j++) {
            de("%d",&s[j]);
        }
        sum=0;
        m=2;
        for(k=1;k<=n;k++) {
            if(s[k]>m){
                b=s[k]-m;
                c=ceil(b/5.0);
                sum=sum+c;
                m=s[k];
                }
        }
        dekh("Case %d: %d\n",i,sum);
    }
  allah_hafej;
}
