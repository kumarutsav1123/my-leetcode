/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    // int length = sizeof(nums)/sizeof(nums[0]); -- This method won't work because MORAL
    int *result = malloc(2 * sizeof(int));
    for(int i=0; i<(numsSize-1); i++){
        // printf("i = %d ", i);
        for(int j=i+1; j<numsSize; j++){
            // printf("%d+%d=%d\n", nums[i],nums[j],nums[i]+nums[j]);
            if(nums[i]+nums[j] == target){
                *returnSize =2;
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    // printf("Not hehe");
    *returnSize = 0;
    return NULL;
}

/*
Learnings
MORAL OF THE 4hour long STORY-
**You cannot find length of array, if only it's pointer is passed\U0001f927**
sizeof(ptr) will always give pointer size i.e 8 and won't be dependent on elements of the array.

1. Leetcode is not like codechef. It requires industry standard outputs.
Most of the output are needed to be 'returned', and not printed.
Pay attention to the parameteres of the given function. You need to update the pointers(in this question we had to update the returnSize)
2. Learn how to return array pointers.
3. Learn how to use dynamic arrays in general. initialization, traversal, passing, returning.


***Always see what parameters are provided to you. ALWAYS.***
*/