#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i= 1; i<=n; i++){

        if(i%2 == 1)
            printf("I hate ");
        else
            printf("I love ");

        if(i!=n)
            printf("that ");
        else
            printf("it\n");
    }
    return 0;
}
