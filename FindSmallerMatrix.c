#include <stdio.h>
#include <stdbool.h>
#define MAX 100

// Function to check if small matrix matches starting at (row, col)
bool isMatch(int big[MAX][MAX], int small[MAX][MAX], int m, int n, int row, int col) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (big[row + i][col + j] != small[i][j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int m, n;
    int big[MAX][MAX], small[MAX][MAX];

    printf("Enter size of big matrix (m x m): ");
    scanf("%d", &m);

    printf("Enter elements of big matrix:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &big[i][j]);

    printf("Enter size of small matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of small matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &small[i][j]);

    if (n > m) {
        printf("Error: Small matrix size should be less than or equal to big matrix.\n");
        return 1;
    }

    // Traverse the big matrix
    bool found = false;
    for (int i = 0; i <= m - n; i++) {
        for (int j = 0; j <= m - n; j++) {
            if (isMatch(big, small, m, n, i, j)) {
                found = true;
                printf("Smaller matrix found at position (%d, %d)\n", i, j);
            }
        }
    }

    if (!found)
        printf("Smaller matrix not found in the big matrix.\n");

    return 0;
}
