#include<stdio.h>
int main()
{
	int n,a,sum;
	while(scanf("%d",&n),n){
		sum = 0; 
		for(int i=0;i<n;i++){
			scanf("%d",&a);
			sum += a;
		}
		printf("%d\n",sum);
	}
	return 0;
}
