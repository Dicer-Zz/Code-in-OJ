/* HDU 1106 ���� */  
#include<bits/stdc++.h>
using namespace std;

char s[1200],*p;
int a[600],cnt;		//�����һ���ո�һ������ 500�� 
int main(void){
	while(cin>>s){
		cnt = 0;
		p = strtok(s,"5");
		while(p!=NULL){		//ȥ��ǰ��5 
			a[cnt++] = atoi(p);
			p = strtok(NULL,"5");
		}
		sort(a,a+cnt);
		//һֱ��Ϊ��������ظ��ģ��������ûҪ��
		cout<<a[0];
		for(int i=1;i<cnt;i++)
			cout<<' '<<a[i];
		cout<<endl; 
	}
	return 0;
}
