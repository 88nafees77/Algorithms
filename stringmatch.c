#include<stdio.h>
#include<string.h>
int patterncheck(char *a,char *p,int la,int lp){
	int i,j;
	for(i=0;i<la;i++){
		if(a[i]==p[0]){
			for(j=1;j<lp;j++){
				if(a[i+j]!=p[j])
				break;
			}
		if(j==lp); return 1;

		}
	}	
	return 0;
}
int main(){
	char a[40];
	char p[10];
	printf("enter main string\n");
	scanf("%[^\n]s",a);
	printf("enter pattern\n");
	scanf("%s",p);
	int len=strlen(a);
	int len2=strlen(p);
	int f=patterncheck(a,p,len,len2);
	printf("%d",f);
	return 0;
}
