double findMaxAverage(int* nums, int numsSize, int k) {
    double maxSum = 0;
    int sum = 0;

    for(int i = 0; i < k; i++)
    {
        sum += nums[i];
    }
    maxSum = sum;

    for(int i = k; i < numsSize; i++)
    {
        sum -= nums[i-k];
        sum += nums[i];

        if (sum > maxSum){
            maxSum = sum;
        }

    }

    return maxSum/k;



}