#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,c;
	scanf("%d", &t);
	for (i= 1; i<= t; i++) {
		scanf("%d", &n);
		c = 0;
		while(n) {
			c =c + n % 2;
			n = n / 2;
		}

		if(c % 2) {
			printf("Case %d: odd\n",i);
		}

		else {
			printf("Case %d: even\n",i);

		}

	}
  return 0;
}
