#include<stdio.h>

int main() {
    int m = 4, n = 4;
    
    int arr[4][4] = {{1, 2, 3 ,12},
                     {4, 5, 6,11},
                     {7, 8, 9,10}};

    int r1 = 0, c1 = 0, r2 = m - 1, c2 = n - 1;

    while (r1 <= r2 && c1 <= c2) {
       
        for (int i = c1; i <= c2; i++) {
            printf("%d ", arr[r1][i]);
        }
        r1++;

        for (int i = r1; i <= r2; i++) {
            printf("%d ", arr[i][c2]);
        }
        c2--;

  
        if (r1 <= r2) {
            for (int i = c2; i >= c1; i--) {
                printf("%d ", arr[r2][i]);
            }
            r2--;
        }

     
        if (c1 <= c2) {
            for (int i = r2; i >= r1; i--) {
                printf("%d ", arr[i][c1]);
            }
            c1++;
        }
    }
    
    return 0;
}
