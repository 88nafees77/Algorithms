#include<stdio.h>
void fib(int n,int *a){
	a[0]=1,a[1]=1;
	for(int i=2;i<n;i++){
		a[i]=a[i-2]+a[i-1];
	}
}
int main(){
	int num;
	scanf("%d",&num);
	int a[num];
	fib(num,a);
//	printf("%d",x);
	for(int i=0;i<num;i++){
		printf("%d\t",a[i]);

	}
	printf("\n");
	return 0;
}
