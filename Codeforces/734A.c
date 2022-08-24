#include <stdio.h>
int main (){

    int n, i, bjornWin = 0, kingWin = 0;
    char s;

    //how many game played
    scanf("%d", &n);

    //who win and how many match
    for(i=0; i<=n; i++){
        scanf("%c", &s);
        if(s == 'A')
            bjornWin += 1;
        else if(s == 'D')
            kingWin += 1;
    }

    //check who win most and print result
    if(bjornWin > kingWin)
        printf("Anton\n");

    else if(bjornWin < kingWin)
        printf("Danik\n");

    else
        printf("Friendship\n");

    return 0;
}
