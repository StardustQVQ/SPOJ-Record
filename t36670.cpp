#include<stdio.h>
using namespace std;

/*
Because we have to avoid integer overflow, we cannot directly compute S = (N(N+1))/2
and check whether S is even or odd. However, we can take a even number K between N and
N+1 and check whether K = 2^n for some positive integer n.
*/

int N, T;

int is_odd(int n){
	return (n % 2);
}

int min_permu(int N, int t){
	int flg, k;
	k = (is_odd(N+1)) ? N : N+1;
	k /= 2;
	flg = is_odd(k);
	printf("Case %d: %d\n", t, flg);
}

int main(){
	scanf("%d", &T);
	for(int i = 1; i <= T; i++){
		scanf("%d", &N);
		min_permu(N, i);
	}
	return 0;
}
