//LAKSHMI PRABHA M M
// 25BAD049
include <stdio.h>

int main() {
    int N;
    long long P;
    scanf("%d %lld", &N, &P);

    int arr[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int start = 0, maxLen = 0;
    long long currentSum = 0;

    for (int end = 0; end < N; end++) {
        currentSum += arr[end];

        while (currentSum > P && start <= end) {
            currentSum -= arr[start];
            start++;
        }

        if (currentSum <= P) {
            int len = end - start + 1;
            if (len > maxLen)
                maxLen = len;
        }
    }

    printf("Max Length: %d\n", maxLen);

    return 0;
}