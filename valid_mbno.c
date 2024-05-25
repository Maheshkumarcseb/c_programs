#include <stdio.h>
#include <string.h>

int main() {
    char mbno[20];
    int count = 0;

    printf("Enter mobile numbers (enter 'q' or 'Q' to quit):\n");

    while (1) {
        scanf("%s", mbno);

        // Check if the input is 'q' or 'Q'
        if (strcmp(mbno, "q") == 0 || strcmp(mbno, "Q") == 0) {
            break;
        }

        int len = strlen(mbno);
        // Check if the length is not 10 or if the number starts with '0'
        if (len != 10 || mbno[0] == '0') {
            count++;
        }
    }

    printf("Number of invalid mobile numbers: %d\n", count);
    return 0;
}
