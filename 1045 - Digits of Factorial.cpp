#include<bits/stdc++.h>
using namespace std;
double s[1000005];
int main()
{
    int t,n,b,i,j;
    long long int ans;
    cin>>t;
    for(i=1;i<=1000000;i++){
       s[i]=s[i-1] + log(i);
    }
    for(j=1;j<=t;j++){
        cin>>n>>b;
        ans=s[n]/log(b) + 1;
        printf("Case %d: %lld\n",j,ans);
    }
    return 0;
}
