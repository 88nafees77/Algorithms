#include<stdio.h>
int sum(int n){
	if(n==1)return 1;
	return n+sum(n-1);
}
int main(){
	int x;
	scanf("%d",&x);
	int ans=sum(x);
	printf("%d\t",ans);
}
