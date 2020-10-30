#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int M,N,W,T,i,j,b,ck,s;
    scanf("%ld",&T);
    for(i=1;i<=T;i++){
        scanf("%ld",&W);
        s=W/2;
        ck=0;
        b=0;
        for(j=2;j<=s;j=j*2){
            if(W%j == 0){
                b=W/j;
            }
            if(b%2 == 1)
            {
                ck=1;
                break;
            }
        }
        if(ck==1){
            printf("Case %ld: %ld %ld\n",i,b,j);
        }
        else{
            printf("Case %ld: Impossible\n",i);
        }
    }
    return 0;
}

