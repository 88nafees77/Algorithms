#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
/*int  partition(int *a,int l,int h){
	int p=l;
	//l++;
	while(l<h){
		while(l<h && a[p]<=a[h])h--;
		while(l<h && a[p]>a[l]) l++;
		swap(&a[l],&a[h]);
	}
	swap(&a[p],&a[h]);
	return (h);
}*/
int partition(int *a,int l,int h){
        int p=a[h];
        int i=(l-1);
        for(int j=l;j<=h-1;j++){
                if(a[j]<p){
                i++;
                swap(&a[i],&a[j]);
                }
        }
        swap(&a[i+1],&a[h]);
	return (i+1);
}
void quicksort(int *a,int l,int h){
	if(l<h){
		int pi=partition(a,l,h);
		quicksort(a,l,pi-1);
		quicksort(a,pi+1,h);
	}
}
int main(){
	int a[]={20,5,15,7,2,32,22,81,4,75,11,5};
	int h=sizeof(a)/sizeof(int);
	int i;
	for(i=0;i<h;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");
//	partition(a,0,h-1);
	quicksort(a,0,h-1);
	for(i=0;i<h;i++){
		printf("%d  ",a[i]);
	}
	printf("\n");
	return 0;
}
