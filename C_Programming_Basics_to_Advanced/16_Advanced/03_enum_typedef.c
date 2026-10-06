#include <stdio.h>

typedef enum {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Day;

int main() {
    Day today = FRIDAY;

    // enum gives meaningful names to integer constants.
    printf("Day number = %d\n", today);
    return 0;
}
