#include <stdio.h>
#include <time.h>

int main() {
    time_t timer;
    struct tm* t;
    timer = time(NULL); 
    t = localtime(&timer);

    printf("���� ��: %d\n", t->tm_year + 1900);
    printf("���� ��: %d\n", t->tm_mon + 1);
    printf("���� ��: %d\n", t->tm_mday);
    printf("���� ��: %d\n", t->tm_hour);
    printf("���� ��: %d\n", t->tm_min);
    printf("���� ��: %d\n", t->tm_sec);

    return 0;
}