#include<stdio.h>
#include<string.h>
int properprefix(char *a,char *p,int len){
	int i,j;
	int plen=strlen(p);
	if(plen>len)
		return 0;
	for(i=0;i<plen;i++){
		if(a[i]!=p[i]){
			return 0;
		}
	}
	return 1;

}
int propersuffix(char *a,char *s){
	int slen=strlen(s);
	int p=slen-1;
	for(int i=p,j=len-1;i>0;i--,j--){
		if(a[j]!=s[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	char a[50];
	printf("enter a string\n");
	scanf("%s",a);
	int len=strlen(a);
	char p[20];
	printf("enter pattern prefix strng\n");
	scanf("%s",p);
	int k=properprefix(a,p,len);
	printf("%d\n",k);
	char s[20];
	printf("enter pattern suffix string\n");
	scanf("%s",s);
	int x=propersuffix(a,s);
	printf("\n%d",x);
}
