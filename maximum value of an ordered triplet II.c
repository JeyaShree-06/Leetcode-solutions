long long maximumTripletValue(int* nums, int numsSize) {
    long long maxTriplet = 0;
    long long maxDiff = 0;
    long long maxNum = 0;

    for (int i = 0; i < numsSize; i++) {
        if (maxDiff * nums[i] > maxTriplet) {
            maxTriplet = maxDiff * nums[i];
        }
        if (maxNum - nums[i] > maxDiff) {
            maxDiff = maxNum - nums[i];
        }
        if (nums[i] > maxNum) {
            maxNum = nums[i];
        }
    }

    return maxTriplet;
}
