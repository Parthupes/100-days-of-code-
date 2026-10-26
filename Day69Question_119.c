// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int nums[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int repeated = -1;
    int freq[100001] = {0};
    for (int i = 0; i < n; i++) {
        int idx = nums[i] + 50000;
        if (freq[idx] == 1) {
            repeated = nums[i];
            break;
        }
        freq[idx] = 1;
    }

    printf("%d\n", repeated);
    return 0;
}