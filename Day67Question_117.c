// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first array: ");
    if (scanf("%d", &m) != 1 || m <= 0) return 0;

    int nums1[m];
    printf("Enter %d elements: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    printf("Enter size of second array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums2[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0, first = 1;
    while (i < m && j < n) {
        if (!first) printf(" ");
        if (nums1[i] <= nums2[j]) {
            printf("%d", nums1[i++]);
        } else {
            printf("%d", nums2[j++]);
        }
        first = 0;
    }

    while (i < m) {
        if (!first) printf(" ");
        printf("%d", nums1[i++]);
        first = 0;
    }

    while (j < n) {
        if (!first) printf(" ");
        printf("%d", nums2[j++]);
        first = 0;
    }
    printf("\n");

    return 0;
}