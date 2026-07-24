//LAKSHMI PRABHA M M
// 25BAD049

#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of sectors: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d binary values (0 or 1): ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Count total number of 1s
    int countOnes = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == 1)
            countOnes++;
    }

    // If 0 or 1 active sectors, no swaps needed
    if (countOnes <= 1) {
        printf("Min Swaps: 0");
        return 0;
    }

    // Count 1s in the first window
    int currentOnes = 0;
    for (int i = 0; i < countOnes; i++) {
        if (arr[i] == 1)
            currentOnes++;
    }

    int maxOnes = currentOnes;

    // Slide the window
    for (int i = countOnes; i < N; i++) {
        if (arr[i] == 1)
            currentOnes++;
        if (arr[i - countOnes] == 1)
            currentOnes--;

        if (currentOnes > maxOnes)
            maxOnes = currentOnes;
    }

    int minSwaps = countOnes - maxOnes;

    printf("Min Swaps: %d", minSwaps);

    return 0;
}PROB 3