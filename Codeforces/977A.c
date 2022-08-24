#include<stdio.h>

int main()
{
    long long int n;
    int k,rem;
    scanf("%lld %d",&n,&k);
    for(int i=1; i<=k; i++)
    {
        rem = n % 10;
        if(rem == 0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
    }
    printf("%d\n",n);
    return 0;
}
