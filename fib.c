#include<stdio.h>
int fib(int n){
	if(n==1||n==2)return 1;
	return fib(n-2)+fib(n-1);
}
int main(){
	int num;
	scanf("%d",&num);
	int r=fib(num);
	printf("%d\t",r);
}
