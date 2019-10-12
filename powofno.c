#include<stdio.h>
int power(int b,int r){
	if(r==1)return b;
	return b*power(b,r-1);
}
int main(){
	int b,r;
	scanf("%d%d",&b,&r);
	int pow=power(b,r);
	printf("%d\t",pow);
}
