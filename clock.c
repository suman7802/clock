#include <stdio.h>
#include <unistd.h>  // for sleep(time_in_sec)
#include <windows.h> // for system(cls)
int main()
{
    int h, m, s;
    printf("Enter time(24:00:00): ");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 24 || m >= 60 || s >= 60 || h < 0 || m < 0 || s < 0)
    {
        printf("Error!");
        exit(0);
    }
    while (1)
    {
        s++;
        if (s >= 60)
        {
            m++;
            s = 0;
        }
        if (m >= 60)
        {
            h++;
            m = 0;
        }
        if (h > 24)
        {
            h = 1;
        }
        printf("Time : %02d:%02d:%02d\n", h, m, s);
        sleep(1);
        system("cls");
    }
}