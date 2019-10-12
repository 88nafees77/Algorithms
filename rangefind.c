#include<stdio.h>
void range(int *a,int len,int min,int max){
	int i;
	int x=(max-min+1);
	int hash[x];
	for(i=0;i<x;i++){
		hash[i]=0;
	}
	for(i=0;i<len;i++){
		if(a[i]>=min && a[i]<=max){
			hash[a[i]-min]++;
		}
	}
	for(i=0;i<x;i++){
		if(hash[i]>0){
			printf("%d\t\n",i+min);
		}
	}
}
int main(){
	int a[]={4,6,2,0,8,5,10};
	int len=sizeof(a)/sizeof(int);
	int min,max;
	printf("enter min and max values\n");
	scanf("%d%d",&min,&max);
	range(a,len,min,max);
}
