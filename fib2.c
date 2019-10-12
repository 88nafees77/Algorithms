#include<stdio.h>
int a[10]={0};
int fib(int n){
	if(n==1||n==2)return a[1];
	if(a[n]>0)return a[n];
	if(a[n]==0){
		a[n]=fib(n-2)+fib(n-1);return a[n];
		return a[n];
	}
}
int main(){
	a[0]=0;
	a[1]=1;
	a[2]=1;
	int num;
	scanf("%d",&num);
	int x=fib(num);
	printf("%d",x);
}

