/*HDU 4764 Stone ��ʲ���� */ 

#include<iostream>


int main(void){
	int n,k;
	while(std::cin>>n>>k){
		if(!n or !k)	break;
		if((n-1)%(k+1)==0)	std::cout<<"Jiang"<<'\n';
		else	std::cout<<"Tang"<<'\n';
	} 
	return 0;
} 
