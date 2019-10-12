#include<stdio.h>
void mergesort2(int *a,int *b,int i,int j,int k){
	

}
int main(){
	int a[]={0,1,7,20,21};
	int b[]={2,8,15,22,44,0,0,0,0,0};
	int len1=sizeof(a)/sizeof(int);
	int len2=sizeof(b)/sizeof(int);
	mergesort2(a,b,len1-1,len2-len1-1,len2-1);
//	for(int i=0;i<len2-1;i++)
//		printf("%d\t",b[i]);
}
