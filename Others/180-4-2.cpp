#include<bits/stdc++.h>
using namespace std;

bool mseek(char* ps[],char* s,int n){
	for(int i=0;i<n;i++){
		if(strcmp(s,ps[i])==0)
			return 1;
	}
	return 0;
}
int main(void){
	int n;
	char *ps[10],s[10];
	printf("�����ַ�������n��");
	scanf("%d",&n);
	printf("����n���ַ�����\n");
	for(int i=0;i<n;i++){
		getchar();
		ps[i] = (char *)malloc(10*sizeof(char));
		gets(ps[i]);
	}
	for(int i=0;i<n;i++){
		printf("%s ",ps[i]);
	}
	printf("�����ѯ�����飺\n");
	scanf("%s",s);
	if(mseek(ps,s,n))	printf("����\n");
	else	printf("������\n");
	return 0;
}
