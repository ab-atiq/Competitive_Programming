#include<stdio.h>

int main()
{
    int linK_w,bob_w,year=0;
    scanf("%d %d",&linK_w,&bob_w);

    while(linK_w <= bob_w){
        linK_w *= 3;
        bob_w *= 2;
        year++;
    }
    printf("%d\n",year);
    return 0;
}
