#include<stdio.h>
int getmax(int *a,int len){
	int i,max;
	max=a[0];
	for(i=1;i<len;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
	
}
void counting(int *a,int len,int redix){
	int b[len];
	int c[10]={0};
	int i;
	for(i=0;i<len;i++){
		c[(a[i]/redix)%10]++;
	}
	for(i=1;i<10;i++){
		c[i]=c[i]+c[i-1];
	}
	for(i=len;i>=0;i--){
		b[c[(a[i]/redix)%10]-1]=a[i];
		c[(a[i]/redix)%10]--;
	}
	for(i=0;i<len;i++){
		a[i]=b[i];
	}
}
void redix(int *a,int len){
	int m=getmax(a,len);
	for(int i=1;m/i>0;i=i*10){
		counting(a,len,i);
	}
}
int main(){
	int a[]={231,345,3,5,678};
	int len=sizeof(a)/sizeof(int);
	int x=getmax(a,len);
	redix(a,len);
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
}

