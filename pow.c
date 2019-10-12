#include<stdio.h>
int main(){
	int x=1;
	int i;
	int b,r;
	scanf("%d%d",&b,&r);
	for(i=1;i<=r;i++){
		x=x*b;
	}
	printf("%d",x);
}
