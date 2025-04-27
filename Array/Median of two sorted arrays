double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int median_index = (nums1Size + nums2Size) / 2;
    float* arr = malloc(sizeof(float) * (nums1Size + nums2Size));
    int ptr1 = 0, ptr2 = 0;
    int i = 0;
    while (i < (nums1Size + nums2Size) && ptr1 < nums1Size &&
           ptr2 < nums2Size) {
        if (nums1[ptr1] < nums2[ptr2]) {
            arr[i++] = nums1[ptr1++];
        } else {
            arr[i++] = nums2[ptr2++];
        }
    }

    while (ptr1 < nums1Size) {
        arr[i++] = nums1[ptr1++];
    }

    while (ptr2 < nums2Size) {
        arr[i++] = nums2[ptr2++];
    }

    float ans;
    if ((nums1Size + nums2Size) % 2 != 0)
        ans = arr[median_index];
    else
        ans = (arr[median_index - 1] + arr[median_index]) / 2;

    free(arr);
    return ans;
}
