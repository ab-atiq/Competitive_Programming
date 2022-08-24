#include <stdio.h>
int main()
{
    int n, p, q, freeSpace, freeRoom = 0;
    //input how many numbers of room
    scanf("%d", &n);

    //inter room information for each room
    for(int i=0; i<n; i++){
        scanf("%d %d", &p, &q);
        freeSpace = q - p;
        if(freeSpace>=2){
            freeRoom += 1;
        }
    }

    printf("%d\n", freeRoom);
    return 0;

}
