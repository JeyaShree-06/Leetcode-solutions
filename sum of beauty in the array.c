#include <stdlib.h>

int sumOfBeauties(int* nums, int numsSize) {
    int totalBeauty = 0;
    int* minRight = (int*)malloc(numsSize * sizeof(int));
    minRight[numsSize - 1] = nums[numsSize - 1];
    for (int i = numsSize - 2; i >= 0; i--) {
        if (nums[i] < minRight[i + 1]) {
            minRight[i] = nums[i];
        } else {
            minRight[i] = minRight[i + 1];
        }
    }
    int maxLeft = nums[0];
    for (int i = 1; i <= numsSize - 2; i++) {
        if (nums[i] > maxLeft && nums[i] < minRight[i + 1]) {
            totalBeauty += 2;
        } 
        else if (nums[i] > nums[i - 1] && nums[i] < nums[i + 1]) {
            totalBeauty += 1;
        }
        if (nums[i] > maxLeft) {
            maxLeft = nums[i];
        }
    }
    free(minRight);

    return totalBeauty;
}
