/* HDU 1847 Good Luck in CET-4 Everybody!*/  
/*��ʲ���ģ�							 
		ֻ��һ��n����Ʒ,�����������������Ʒ��ȡ��,
		�涨ÿ������ȡһ��,���ȡm��.���ȡ���ߵ�ʤ.
		n = (m+1)r+s , (rΪ������Ȼ��,s��m), ��n%(m+1) != 0, 
		����ȡ�߿϶���ʤ��
*/ 
#include<iostream>


int main(void){
	int n;
	while(std::cin>>n){
		if(n%3==0) 	std::cout<<"Cici"<<'\n';
		else	std::cout<<"Kiki"<<'\n';
	}
	return 0;
} 
