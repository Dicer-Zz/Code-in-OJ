#include <bits/stdc++.h>  
  
using namespace std;  
      
int n,k;  
int sum;  
      
void dfs(int x,int step,int num)  
{  
    if(step==n+1)  
    {  
        printf("%d\n",sum);  
        return;  
    }  
	    for(int i=x; i<=k; i++)  
    {  
        int cur=num;//cur��¼��һλ��ֵ  
        if(i*cur<=k)//i�ǵ�ǰλ��������߳˻�С�ڵ���k�Ļ���������  
        {  
            sum=sum*10+i;//sum��¼���Ĵ�С����Nλ�������ʱ��sum���Ƿ�����������  
            dfs(0,step+1,i);  
            sum=(sum-i)/10;//�ǵü�ȥ��һ����������  
        }  
    }  
    return;  
	}  
	  
int main()  
{  
    cin>>n>>k;  
    sum=0;  
    dfs(1,1,1);  
    return 0;  
}  


