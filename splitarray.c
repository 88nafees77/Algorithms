#include<stdio.h>
void split(int *a,int len,int pos){
	int i,j,x;
	for(i=0;i<pos;i++){
		x=a[0];
		for(j=0;j<len;j++){
			a[j]=a[j+1];
		//	a[len-1]=x;
		}
	a[len-1]=x;
	}
}
int main(){
	int a[]={12,10,5,6};
	int len=sizeof(a)/sizeof(int);
	int pos;
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("enter number of split\n");
	scanf("%d",&pos);
	split(a,len,pos);
	for(int i=0;i<len;i++)
		printf("%d\t",a[i]);
}
