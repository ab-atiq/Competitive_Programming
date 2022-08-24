#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,big_n,g_a,g_b,g_c,g_d;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    if(x1>=x2 && x1>=x3 && x1>=x4)
    {
        big_n=x1;
    }
    else if(x2>=x1 && x2>=x3 && x2>=x4)
    {
        big_n=x2;
    }
    else if(x3>=x1 && x3>=x2 && x3>=x4)
    {
        big_n=x3;
    }
    else
    {
        big_n = x4;
    }
    g_a = big_n - x1;
    g_b = big_n - x2;
    g_c = big_n - x3;
    g_d = big_n - x4;

    if(g_a==0)
    {
        printf("%d %d %d\n",g_b,g_c,g_d);
    }
    else if(g_b==0)
    {
        printf("%d %d %d\n",g_a,g_c,g_d);
    }
    else if(g_c==0)
    {
        printf("%d %d %d\n",g_b,g_a,g_d);
    }
    else
    {
        printf("%d %d %d\n",g_a,g_b,g_c);
    }

    return 0;
}
