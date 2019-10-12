#include<stdio.h>
void merge(int *a,int* b,int *c,int len1,int len2){
	int m=0,n=0,k=0,p=len1+len2;;
	while((m<len1)&&(n<len2)){
		if(a[m]<b[n]){
			c[k]=a[m];
			m++;
			k++;
		}else{
			c[k]=b[n];
			n++;
			k++;
		}
	}
	if(m==len1){
		while(k<p){
			c[k]=b[n];
			n++;
			k++;
		}
	}
	if(n==len2){
		while(k<p){
			c[k]=a[m];
			m++;
			k++;
		}
	}
}
	
int main(){
	int a[]={2,4,10,15,30,35,40};
	int b[]={0,1,16,19,20,45,50};
	int l1=sizeof(a)/sizeof(int);
	int l2=sizeof(b)/sizeof(int);
	int l3=l1+l2;
	int c[l3];
	merge(a,b,c,l1,l2);
	for(int i=0;i<l3;i++)
		printf("%d\t",c[i]);
	printf("\n");
}
