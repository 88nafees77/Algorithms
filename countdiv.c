#include<stdio.h>
int counting(int *a,int len){
	int i;
	int x=1;
	for(i=0;i<len;i++){
		x=x*a[i];
	}
	return div(x);
}
int div(int x){
	int i;
	int count;
	for(i=1;i<=x;i++){
		if(x%i==0){
		count++;
		}
	}
	return count;
}
int main(){
	int a[]={5,5};
	int len=sizeof(a)/sizeof(int);
	int rslt=counting(a,len);
	printf("%d\n",rslt);
}
