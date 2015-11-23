#include<cstdio>
#include<algorithm>


const int maxn = 1e4 + 10;
int a[maxn];

int main(){
	int n, q;
	int kase = 1;
	while (scanf("%d %d", &n, &q) == 2 && n){
		for (int i = 0; i < n; i++)	scanf("%d", &a[i]);
		std::sort(a, a + n);c
		printf("CASE# %d:\n", kase++);
		while (q--){
			int x;
			scanf("%d", &x);
			int p = std::lower_bound(a, a + n, x) - a;
			if (a[p] == x)
				printf("%d found at %d\n", x, p + 1);
			else
				printf("%d not found\n", x);
		}
	}
}