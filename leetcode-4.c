#include <stdio.h>
#include <stdbool.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size);

int main(void) {
    int a1[]={1,3};
    int a1size = sizeof(a1) / sizeof(a1[0]);

    int a2[]={2};
    int a2size = sizeof(a2) / sizeof(a2[0]);
    findMedianSortedArrays(a1, a1size, a2, a2size);

    return 0;
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    double a = 0;
    double b = 0;
    for(int i = 0; i < nums1Size; i++) {
        a = a + nums1[i];
    }
    printf("A: %lf\n", a);

    for(int i = 0; i < nums2Size; i++) {
        b = b + nums2[i];
    }
    printf("B: %lf\n", b);
    double jam = a + b;
    printf("jam: %lf\n", jam);
    double jj = jam / 2;
    printf("jj: %lf\n", jj);
    return true;
}