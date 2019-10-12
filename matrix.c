#include<stdio.h>
int a[3][3]={{2,5,1},{0,5,9},{3,0,5}};
int max(int a[3][3]){
	int i,j,max=0;
	max=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>=max){
				max=a[i][j];
			}
		}	
	}
	return max;
}
int main(){
	int val=max(a);
	printf("%d\n",val);
}

