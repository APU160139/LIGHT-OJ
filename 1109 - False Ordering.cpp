#include<bits/stdc++.h>
using namespace std;
int s[1001];

void sqr(int s[])
{
    int i;
    for(i=1; i<=32; i++){
      s[i*i]=-1;
    }

}

void div(int s[])
{
    int j,k,c,len;
    for(k=1;k<=1000;k++){
        len = sqrt(k);
        for(j=1, c=0; j<=len; j++){
            if(k%j==0)
                c++;
        }
        s[k]=s[k]+(c*2);
    }
}

int main()
{
    int t,i,j,k,l,c[1001], n;
    scanf("%d", &t);
    l=2;
    c[1] = 1;
    sqr(s);
    div(s);
    for(j=2; j<=32; j++){
        for(k=1000; k>=2; k--){
            if(s[k]==j){
                c[l]=k;
                l++;
            }
        }
    }
    for(i=1; i<=t; i++){
        scanf("%d",&n);
        printf("Case %d: %d\n", i,c[n]);
    }
    return 0;
}
