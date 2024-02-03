#include <stdio.h>
#include <string.h>

int main() {
    char mobileNumber[11];
    int invalidCount = 0;

    printf("Enter mobile numbers (type 'q' or 'Q' to end):\n");

    while (1) {
        scanf("%s", mobileNumber);

        if (mobileNumber[0] == 'q' || mobileNumber[0] == 'Q') {
            break;
        }

        if (strlen(mobileNumber) != 10) {
            invalidCount++;
        }
    }

    printf("Number of invalid mobile numbers: %d\n", invalidCount);

    return 0;
}
