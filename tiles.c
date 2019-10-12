#include<stdio.h>
int count(int n){
	int x[n+1];
	for(int i=0;i<(n+1);i++)
		x[i]=0; 
	x[0]=0;
	x[1]=1;
	x[2]=2;
	if(n==0)return x[0];
	if(n==1)return x[1];
	if(n==2)return x[2];
	if(x[n]==0){
		x[n]= count(n-1)+count(n-2);
	}
	return x[n];
}
int main(){                                                           Modified  

#include<stdio.h>
int count(int n){
        int x[n+1];
        for(int i=0;i<(n+1);i++)
                x[i]=0; 
        x[0]=0;
        x[1]=1;
        x[2]=2;
        if(n==0)return x[0];
        if(n==1)return x[1];
        if(n==2)return x[2];
        if(x[n]==0){
                x[n]= count(n-1)+count(n-2);
        }
        return x[n];
}
int main(){
        int n;
        printf("width of floor\n");
        scanf("%d",&n);
        int rs=count(n);
        printf("%d\n",rs);
        return 0;
}






                                                           Modified  

#include<stdio.h>
int count(int n){
        int x[n+1];
        for(int i=0;i<(n+1);i++)
                x[i]=0; 
        x[0]=0;
        x[1]=1;
        x[2]=2;
        if(n==0)return x[0];
        if(n==1)return x[1];
        if(n==2)return x[2];
        if(x[n]==0){
                x[n]= count(n-1)+count(n-2);
        }
        return x[n];
}
int main(){
        int n;
        printf("width of floor\n");
        scanf("%d",&n);
        int rs=count(n);
        printf("%d\n",rs);
        return 0;
}
                                                           Modified  

#include<stdio.h>
int count(int n){
        int x[n+1];
        for(int i=0;i<(n+1);i++)
                x[i]=0; 
        x[0]=0;
        x[1]=1;
        x[2]=2;
        if(n==0)return x[0];
        if(n==1)return x[1];
        if(n==2)return x[2];
        if(x[n]==0){
                x[n]= count(n-1)+count(n-2);
        }
        return x[n];
}
int main(){
        int n;
        printf("width of floor\n");
        scanf("%d",&n);
        int rs=count(n);
        printf("%d\n",rs);
        return 0;
}






                                                           Modified  

#include<stdio.h>
int count(int n){
        int x[n+1];
        for(int i=0;i<(n+1);i++)
                x[i]=0; 
        x[0]=0;
        x[1]=1;
        x[2]=2;
        if(n==0)return x[0];
        if(n==1)return x[1];
        if(n==2)return x[2];
        if(x[n]==0){
                x[n]= count(n-1)+count(n-2);
        }
        return x[n];
}
int main(){
        int n;
        printf("width of floor\n");
        scanf("%d",&n);
        int rs=count(n);
        printf("%d\n",rs);
        return 	int n;
	printf("width of floor\n");
	scanf("%d",&n);
	int rs=count(n);
	printf("%d\n",rs);
	return 0;
}
