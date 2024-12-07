#include <stdio.h>

// Function to convert time into minutes
int timeToMinutes(int hh, int mm) {
    return hh * 60 + mm;
}

// Function to convert minutes back into time (24-hour format)
void minutesToTime(int minutes, int *hh, int *mm) {
    *hh = minutes / 60;
    *mm = minutes % 60;
}

int main() {
    int n; // Number of stations
    printf("enter the number of station");
    scanf("%d", &n);

    int x_times[n]; // Departure times of train X in minutes
    printf("enter the departure time at every stations");
    for (int i = 0; i < n; i++) {
        int hh, mm;
        scanf("%d:%d", &hh, &mm);
        x_times[i] = timeToMinutes(hh, mm);
    }

    int y_a_hh, y_a_mm;
    printf("enter the departure time of train y");
    scanf("%d:%d", &y_a_hh, &y_a_mm);
    int y_a_time = timeToMinutes(y_a_hh, y_a_mm); // Departure time of train Y at station A in minutes

    int interval = x_times[0] - y_a_time; // Calculate the difference in time intervals
printf("departure time of train y at every station are:\n")
    for (int i = 0; i < n; i++) {
        int y_time = x_times[i] - interval; // Calculate the adjusted departure time for train Y
        int hh, mm;
        minutesToTime(y_time, &hh, &mm);
        printf("%02d:%02d ", hh, mm); // Print in 24-hour format
    }

    return 0;
}
