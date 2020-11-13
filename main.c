#include <stdio.h>

int arr[100];
int index = 0, count = 0;

void partition(int n, int r, int min) {
    if (r==1) {
        arr[index] = n;
        ++ count;
        for (int i = 0; i <= index; ++i) 
            printf("%d ", arr[i]);
        printf("\n");
    } else {
        for (int i = min; r*i <= n; ++i) {
            arr[index] = i;
            ++ index;
            partition(n-i, r-1, i);
        }
    }
    -- index;
}

int main() {
    int n, r;
    scanf("%d %d", &n, &r);
    partition(n, r, 1);
    printf("%d total partitions\n", count);
    return 0;
}
