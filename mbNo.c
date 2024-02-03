/*question----> write a program that must accept a list of mobile numbers (in separate lines) as the input.
The character q or Q represents the end of the input. 
The program must print the number of invalid mobile numbers among the given list of mobile numbers as the output.
A valid mobile number contains exactly 10 digits.*/


#include <stdio.h>
#include <string.h>
#include<ctype.h>
int isNumeric(const char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0; // Non-numeric character found
        }
        str++;
    }
    return 1; // All characters are numeric
}

int main() {
    char mobileNumber[11];
    int invalidCount = 0;

    printf("Enter mobile numbers (type 'q' or 'Q' to end):\n");

    while (1) {
        scanf("%s", mobileNumber);

        if (mobileNumber[0] == 'q' || mobileNumber[0] == 'Q') {   // q denote end of list of mobile number
            break;
        }

        if (strlen(mobileNumber) != 10||mobileNumber[9]=='0'||mobileNumber[0]=='0'||!isNumeric(mobileNumber)) {
            invalidCount++;
        }
    }
    printf("Number of invalid mobile numbers: %d\n", invalidCount);

    return 0;
}
