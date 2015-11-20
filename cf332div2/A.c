#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main(){
	long long d1, d2, d3;
	scanf("%I64d %I64d %I64d", &d1, &d2, &d3);
	if (d1 < d3 && d2 < d3){
		if (2 * (d1 + d2) <= (d1 + d2 +d3))
			printf("%I64d", 2 * (d1 + d2));
		else
			printf("%I64d", (d1 + d2 + d3));
	}else{
		if (d1 > d3 && d2 <= d3){
			if (2 * (d3 + d2) <= (d1 + d2 + d3))
				printf("%I64d", 2 * (d3 + d2));
			else
				printf("%I64d", (d1 + d2 + d3));
		}
		else{
			if (d2 > d3 && d1 <= d3){
				if (2 * (d3 + d1) <= (d1 + d2 + d3))
					printf("%I64d", 2 * (d3 + d1));
				else
					printf("%I64d", (d1 + d2 + d3));
			}
			else{
				printf("%I64d", (d1 + d2 + d3));
			}
		}
	}
}