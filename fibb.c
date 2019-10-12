#include<stdio.h>
int fact(int n){
	int a=1;
	if(n==1)return a;
	int c=1;
	for(int i=2;i<=n;i++){
		c=c*i;
	}
	return c;
}
int main(){
	int num;
	scanf("%d",&num);
	int x=fact(num);
	printf("%d\t",x);
}
