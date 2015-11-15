#include<stdio.h>

int main(){
	int n,i,j;
	int res[31][31];
	while (scanf("%d", &n) == 1){
		for (i = 0; i < n; i++){
			res[i][0] = 1;
			res[i][i] = 1;
		}
		for (i = 2; i < n; i++){
			for (j = 1; j < i; j++){
				res[i][j] = res[i - 1][j - 1] + res[i - 1][j];
			}
		}
		for (i = 0; i < n; i++){
			printf("%d", res[i][0]);
			for (j = 1; j < i+1; j++){
				printf(" %d", res[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
