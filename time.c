
#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);

    printf("Today is %d-%d-%d.", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("The time is %d:%d:%d.", tm.tm_hour, tm.tm_min, tm.tm_sec);
 

    return 0;
}
