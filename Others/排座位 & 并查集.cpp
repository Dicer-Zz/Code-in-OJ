#include<stdio.h>

int a[105],b[105][105] = {0}; //���ѹ�ϵ�ò��鼯���жԹ�ϵ�ö�ά����

int find(int x){
	while(x != a[x])
		x = find(a[x]);
	return a[x];
} 
void join(int x,int y){
	int fx = find(x); 
	int fy = find(y);
	if(fx != fy)
		a[fx] = fy; 
} 
int main(){
	int n,k,m;
	int p1,p2,r;
	scanf("%d %d %d",&n,&m,&k);
	for(int i=1;i<=n;i++){
		a[i] = i;
	}
	while(m--){
		scanf("%d %d %d",&p1,&p2,&r);
		if(r == 1){
			join(p1,p2);		//���� 
		}
		else if(r == -1){
			b[p1][p2] = b[p2][p1] = r;		//���� 
		}
	}	
	while(k--){
		scanf("%d %d",&p1,&p2);
		if(find(p1) == find(p2) && b[p1][p2] != -1 && b[p2][p1] != -1)
			//��λ����֮�������ѣ���û�ежԹ�ϵ
			printf("No problem\n");
		else if(find(p1) != find(p2) && b[p1][p2] != -1 && b[p2][p1] != -1)
			//���������ѣ���Ҳ���ж�
			printf("OK\n");
		else if(find(p1) == find(p2) && (b[p1][p2] == -1 || b[p2][p1] == -1))
			//����֮���ежԣ�Ȼ��Ҳ�й�ͬ������
			printf("OK but...\n");
		else if(find(p1) != find(p2) && (b[p1][p2] == -1 || b[p2][p1] == -1))
			//�������֮��ֻ�ежԹ�ϵ
			printf("No way\n");
	}
	return 0;
} 
