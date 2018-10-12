/* poj 3009 Curling 2.0 DFS */

#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

//����
int map[25][25];
int n,m;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int ant,flag;
const int inf=0x3f3f3f3f;
bool judge(int x,int y){
	if(x>=1&&x<=n&&y>=1&&y<=m)
		return true;
	return false;
}

int dfs(int x,int y){
	int ans = 0;
	for(int i=0;i<4;i++){
		int nextx = x + dx[i];
		int nexty = y + dy[i];
		if(ant > 10)	return inf; 		//��֦ 
		if(map[nextx][nexty]==1)	continue;		//�޷��ƶ� 
		while(map[nextx][nexty] != 3&&map[nextx][nexty] != 1&&judge(nextx,nexty)){
			nextx += dx[i];nexty += dy[i];	
		}
		if(!judge(nextx,nexty)){		//���� 
			continue;
		}
		if(map[nextx][nexty] == 1){ 	//���� 
			map[nextx][nexty]  = 0;
			ans++;
			ant += dfs(nextx - dx[i],nexty - dy[i]);
		}
		if(map[nextx][nexty] == 3){		//�ҵ��յ� 
			ans++;
			flag = 1;
			return ans; 
		}
	}
}

int main(void){
	while(cin>>m>>n){
		if(n+m==0)	break;
		int si,sj;
		ant = 0,flag = 0;		//�������Ƿ����ҵ��յ㡣 
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>map[i][j];
				if(map[i][j]==2){
					si = i;
					sj = j;
				}
			}
		}
		dfs(si,sj);
		printf("DFS֮��\n");
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				printf("%d ",map[i][j]);
			}
			printf("\n");
		}
		printf("ant:%d flag:%d\n",ant,flag);
		if(ant<=10 && flag)	printf("%d\n",ant);
		else	printf("-1\n"); 
	}
	return 0;
}
