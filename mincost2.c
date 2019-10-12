#include<stdio.h>
int mincost(int cost[4][4],int s,int d){
	int mincost[d-s+1];
	mincost[0]=0;
	mincost[1]=cost[s][s+1];
	for(int i=2;i<=d;i++){
		mincost[i]=cost[s][i];
		for(int j=1;j<i;j++){
			if(mincost[i]>mincost[j]+cost[j][i]){
				mincost[i]=mincost[j]+cost[j][i];
			}
		}

	}
	return mincost[d];
}
int main(){
	int a[4][4]={{0,20,50,90},{-1,0,30,80},{-1,-1,0,25},{-1,-1,-1,0}};
	printf("Enter source and destination\n");
	int s,d;
	scanf("%d%d",&s,&d);
	int c=mincost(a,s,d);
	printf("value is:%d",c);
	return 0;

}
