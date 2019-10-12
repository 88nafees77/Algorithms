#include<stdio.h>
#include<string.h>
void charcheck(char *a,int len){
	int i;
	int x[26]={0};
	for(i=0;i<len;i++){
		x[a[i]-'a']++;
	}
	int  y[26]={0};
	char b[50];
	printf("enter sec string\n");
	scanf("%[^\n]s",b);
	printf("%s\n",a);
	printf("%s\n",b);
	int len2=strlen(b);
	for(i=0;i<len2;i++){
		y[b[i]-'a']++;
	}
	for(i=0;i<26;i++){
		if(x[i]==y[i]&&x[i]!=0&&y[i]!=0){
		printf("%c\t",i+'a');
		}
	}
}
int main(){
	char a[]="integral university";
	int len=strlen(a);
	charcheck(a,len);
//	char b[]="dgfewruye";
//	int len2=strlen(b);
//	sstring(b,len2);
	return 0;
}
