#include<stdio.h>

int fibo(int n){
	long long F[n];
	F[0]=0;
	F[1]=1;
	for(int i =2;i<n;i++){
		F[i]=F[i-1]+F[i-2];
	}
	for(int i=0;i<n;i++){
		printf("%lld ", F[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	fibo(n);
	return 0;
	
}