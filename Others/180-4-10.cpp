#include<bits/stdc++.h>

char xx[10][80];int maxline;
void StrOr(char xx[][80],int maxline){
	char temp[80];
	int flag,ant;
	for(int i=0;i<maxline;i++){
		int lenth = strlen(xx[i]);		
		flag = lenth;ant = 0;
		memset(temp,0,sizeof(temp));
		for(int j=lenth-1;j>=0;j--){
			if(xx[i][j]=='o'){
				flag = j;
				break;
			}
		}
		for(int k = flag+1;k<lenth;k++){
			temp[ant++] = xx[i][k];
		}
		for(int k = 0;k<flag;k++){
			if(xx[i][k]!='o')	temp[ant++] = xx[i][k];
		}
		strcpy(xx[i],temp);
	}
}

int main(void){
	printf("����������maxline��");
	scanf("%d",&maxline);
	getchar();
	printf("����maxline���ַ���\n");
	for(int i=0;i<maxline;i++){
		gets(xx[i]); 
	}
	StrOr(xx,maxline);
	for(int i=0;i<maxline;i++){
		puts(xx[i]);
	}
	return 0;
}
