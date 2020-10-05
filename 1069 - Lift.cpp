#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b,i,res;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d",&a,&b);
        if(a<=b){
          res=b*4+19;
        }
        else{
          res=(2*a-b)*4 +19;
        }
        printf("Case %d: %d\n",i,res);
    }
    return 0;
}
