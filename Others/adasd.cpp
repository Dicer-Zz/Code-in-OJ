#include <iostream>
#include <ctime>
using namespace std;

int main(){
	clock_t start, end;
	start = clock();
     //�������ִ��ʱ���ٵĻ�������������Ľ��Ϊ0,��Ϊ���ڻ��ӵ������ٶȺܿ�
	for(int j = 0; j < 1000; j++)
		 for(int i = 0; i < 1000000; i++){}	//1e9
	end = clock();
	cout << (double)(end - start) / CLOCKS_PER_SEC << endl;
	return 0;
}
