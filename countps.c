#include<stdio.h>
#include<string.h>
void fillarray(char *a,int *lpa){
	int len=strlen(a);
	//int lpa[len];
	lpa[0]=0;
	int j=0,i=1;
	while(i<len){
		if(a[j]==a[i]){
			lpa[i]=j+1;
			i++;
			j++;
		}else{
			if(j==0){
				lpa[i]=j;
				i++;
			}else{
				j=lpa[j-1];
			}
		}
	
	}
}
void kmpsearch(char *a,char *p){
	int n=strlen(a);
	int m=strlen(p);
	int lpa[m];
	fillarray(p,lpa);
//	printf("l2\n");
	for(int i=0,j=0;i<n; ){
		if(a[i]==p[j]){
		i++;
		j++;
	}
	if(j==m){
		printf("pattern found at %d\n",i-j);
		return;
	}else if(i<n && p[j]!=a[i]){
		if(j!=0){
			j=lpa[j-1];
	}else{
		i=i+1;
	}

	}
}
	printf("pattern not found\n");

}
int main(){
	char a[]="ABABAHBDHBSDHFSHX";
	char pattern[]="DHBS";
//	printf("l1\n");
	kmpsearch(a,pattern);
	printf("\n");
	return 0;
}
