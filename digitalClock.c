#include <stdio.h>
#include <windows.h>

int main()
{
    int h = 0, m = 0, s = 0;
    int d = 1000; // deçay in ms
    printf("\nSet time in the order hours (max = 24) > minutes (max = 60) > seconds (max = 60):\n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 24 || m > 60 || s > 60)
    {
        printf("Error!\n");
        exit(0);
    }
    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 24)
        {
            h = 1;
        }
        printf("\nClock: ");
        printf("\n%02d:%02d:%02d", h, m, s);
        Sleep(d);
        system("cls");
    }
}