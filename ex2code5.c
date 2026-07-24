//LAKSHMI PRABHA M M
// 25BAD049
#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int arr[n], deque[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int front = 0, rear = -1;

    for(int i = 0; i < n; i++)
    {
        
        while(front <= rear && deque[front] < i - k + 1)
        {
            front++;
        }

    
        while(front <= rear && arr[deque[rear]] <= arr[i])
        {
            rear--;
        }

        
        deque[++rear] = i;

        
        if(i >= k - 1)
        {
            printf("%d ", arr[deque[front]]);
        }
    }

    return 0;
}