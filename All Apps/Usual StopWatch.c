//Make a Stop Watch
#include <stdio.h>
#define CYCLE 60
#include <unistd.h>
#define clrscr() printf("\e[1;1H\e[2J")

int main() {
    int hour, minute, second;

    printf("Enter Hour, Minute, Second: ");
    scanf("%d%d%d", &hour, &minute, &second);
    clrscr(); //clear screen

    int h = 0, m = 0, s = 0; //counters
    while (1) {
        printf("\t\tSTOP WATCH\n");
        printf("----------\t\t  ----------\n");
        printf("\t\t%.2d:%.2d:%.2d\n\n\n", h, m, s);
        printf("----------\t\t  ----------\n");
        if (h == hour && m == minute && s == second) {
            break;
        } else {
            clrscr(); //clear screen
        }
        s++;
        sleep(1); //stop for %d second, any_duration(sec)
        if (s == CYCLE) {
            m++;
            s = 0;
        }
        if (m == CYCLE) {
            h++;
            m = 0;
        }
    }

    printf("\n\n\tStopped!\a");

    return 0;
}
