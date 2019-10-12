\#include<stdio.h>
void sort(int *a,int len){
	int count1=0,count2=0,count3=0;
	for(int i=0;i<=len-1;i++){
		if(a[i]==0){
			count1++;
		}if(a[i]==1){
			count2++;
		}if(a[i]==2){
			count3++;
		}
	}
	for(int i=0;i<count1;i++)
		a[i]=0;
	for(int i=count1;i<(count1+count2);i++)
		a[i]=1;
	for(int i=(count1+count2);i<len;i++)
		a[i]=2;
}
int main(){
	int a[]={1,0,0,2,2,1,0,1};
	int len=sizeof(a)/sizeof(int);
	sort(a,len);
	for(int i=0;i<len;i++)
		printf("%d\t",a[i]);
	
}
