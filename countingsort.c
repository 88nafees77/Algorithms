#include<stdio.h>
void countingsort(int*a,int len,int range){
	int b[len];
	int c[range];
	int i;
	for(i=0;i<range;i++){
		c[i]=0;
	}
	for(i=0;i<len;i++){
		c[a[i]]++;	
	}
	for(i=1;i<range;i++){
		c[i]=c[i]+c[i-1];
	}
	for(i=len-1;i>=0;i--){
		b[c[a[i]]-1]=a[i];
		c[a[i]]--;
	}
	for(i=0;i<len;i++){
		a[i]=b[i];
	}
}
int main(){
	int a[]={3,2,3,1,1,0,4,5,2,3,0};
	int length=sizeof(a)/sizeof(int);
	countingsort(a,length,6);
	for(int i=0;i<length;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
