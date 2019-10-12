#include<stdio.h>
int sum(int* a,int len){
	int i,j,k,sum,sum2;
	for(k=0;k<len;k++){
		for(i=0+k;i<=len/2;i++){
			sum=sum+a[i];
		}
		for(j=len-k;j>len/2;j--){
			sum2=sum2+a[j];
		}

	}
	return j;
}
int main(){
	int a[6]={9,4,3,0,7,2,3};
	int rs=sum(a,6);
	printf("%d",rs);
	return 0;
}
