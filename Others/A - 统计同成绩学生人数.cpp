#include<stdio.h>
int a[1050];
int main()
{
	int n,m,sum;
	while(scanf("%d",&n),n){        //����n 
		for(int i = 0;i<n;i++){   //�������� 
			scanf("%d",&a[i]);
		}
		sum = 0;
		scanf("%d",&m);                   //����Ŀ����� 
		for(int i=0;i<n;i++){      //��Ŀ��������� 
			if(a[i] == m)
			sum ++;
		}
		printf("%d\n",sum);
	} 
	return 0;
 } 
