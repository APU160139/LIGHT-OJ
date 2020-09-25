#include <bits/stdc++.h>
using namespace std;
int main()
    {
    long long int a, b, c, d, e, f;
    long long int fn[10000], m;
    int n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- )
    {
        scanf("%lld %lld %lld %lld %lld %lld %d", &fn[0], &fn[1], &fn[2], &fn[3], &fn[4], &fn[5], &n);
        for(m=6; m<=n; m++)
            fn[m]=(fn[m-1]+fn[m-2]+fn[m-3]+fn[m-4]+fn[m-5]+fn[m-6])%10000007;

        printf("Case %d: %lld\n", ++caseno, fn[n]  % 10000007);
    }
    return 0;
}
