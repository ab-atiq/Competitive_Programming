#include <stdio.h>
#include <stdbool.h>
int main()
{
    int year;
    scanf("%d", &year);
    for (int y = year + 1;; y++)
    {
        int currentYear = y;
        int frequency[11] = {0}; // digit can be 0-9
        bool repeat = false;
        while (currentYear > 0)
        {
            int digit = currentYear % 10;
            currentYear /= 10;
            frequency[digit]++;
            if (frequency[digit] >= 2)
            {
                repeat = true;
            }
        }
        if (!repeat)
        {
            printf("%d\n", y);
            break;
        }
    }
    return 0;
}
