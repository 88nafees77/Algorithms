#include<stdio.h>
void merging(int *a,int low,int mid,int high);
int main(){
	int a[]={0,1,7,20,21,2,8,15,19,22,44};
	int len=sizeof(a)/sizeof(int);
	int pos;
	for(int i=0;i<len-1;i++){
		if(a[i]>a[i+1]){
			pos=i;
			printf("%d \t",pos);
		}else{
		pos=i;
		}
	}
	merging(a,0,pos,len-1);
	for(int i=0;i<len-1;i++)
		printf("%d\t",a[i]);
}
void merging(int *a,int low,int mid,int high){
	int i,j,k;
	for(i=0;i<high-1;i++){
		if(a[low]>a[mid+1]){
			a[i]=a[low];
		}else if(a[low]<a[mid+1]){
			a[i]=a[mid+1];
		}
	}
}
