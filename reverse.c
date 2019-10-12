#include<stdio.h>
#include<string.h>
void reverse(char *a){
	int len=strlen(a);
	int j=0;
	for(int i=0;i<=len;i++){
		if(a[i]==' '|| a[i]=='\0'){
			int k=(i-1-j)/2;
			int p=0;
			for(;p<=k;j++,p++){
				char temp=a[i-1-p];
				a[i-1-p]=a[j];
				a[j]=temp;
			}
			j=i+1;
		}
		
	}

}
void rev(char *a){
	reverse(a);
	int len=strlen(a);
	int s=0,l=len-1;
	while(s<l){
		char temp=a[s];
		a[s]=a[l];
		a[l]=temp;
		s++;
		l--;
	}	

}
int main(){
	char a[]="lucknow junction east";
	int len=strlen(a);
//	reverse(a);
	
//	for(int i=0;i<len;i++)
//		printf("%c",a[i]);
//		printf("\n");
	rev(a);
	for(int i=0;i<len;i++)
		printf("%c",a[i]);
}
