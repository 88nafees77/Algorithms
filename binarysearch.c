#include<stdio.h>
int binary(int *a,int l,int r,int val){
	int mid=l+r/2;
	if(r>=l){
		if(a[mid]==val)
			return mid;
		if(a[mid]>val)
			return  binary(a,l,mid-1,val);
	
		 return binary(a,mid+1,r,val);
	}
	return -1;
}
int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int len=sizeof(a)/sizeof(int);
//	int r=len-1;
	printf("enter val to be search\n");
	int val;
	scanf("%d",&val);
	int x=binary(a,0,len-1,val);
	printf("%d ",x);
}
