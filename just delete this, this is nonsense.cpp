#include <stdio.h>

int main() {
    int first_sem = 96;
    int sec_sem = 95;
    printf("First Sem = %d", first_sem);
    printf("\nSecond Sem = %d", sec_sem);
    printf("\n%d + %d = %d", first_sem, sec_sem, first_sem + sec_sem);
    printf("\nAverage = %0.2f", (float)(first_sem + sec_sem) / 2);
    
    return 0;
}
