/* HDU1042 n! */

#include <stdio.h>

void factorial(int n)
{
    int a[10000 + 1] = {1};
    int digits=1/*10000���Ƶ�λ��*/, carry, i, j;

    for(i=2;i<=n;i++)
    {
        carry = 0;   //��λ

        for(j=0; j<digits; j++)
        {
            a[j] = a[j] * i + carry;
            carry = a[j] / 10000;
            a[j] %= 10000;
        }

        if(carry>0)  // ���λ�Ľ�λ
            a[digits++] = carry;
    }

    // �������λԭ���������λ�ĸ�λ��0
    printf("%d", a[digits-1]);
    for(i=digits-2; i>=0; i--)
        printf("%04d", a[i]);
    printf("\n");
}

int main()
{
    int n;

    while(scanf("%d", &n) != EOF)
        factorial(n);

    return 0;
}
