#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,j,b,dcml,mod,div;
    char s[1000];
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        mod=0;
        div=0;
        scanf("%s",s);
        scanf("%lld",&b);
        j=0;
        if(s[0]=='-'){
          j=1;
        }
        while(s[j])
        {
            dcml = s[j] - 48;
            div=div+dcml;
            mod=div%b;
            div= mod*10;
            j++;
        }
        if(mod==0){
          printf("Case %lld: divisible\n",i);
        }
        else{
          printf("Case %lld: not divisible\n",i);
        }
    }
    return 0;
}
