// This should work. but for some reason it's showing time limit exceeded

int removeDuplicates(int* nums, int numsSize){

    int deleteElement(int arr[], int n, int index){
        printf("In here");
        for(int i=index; i<(n-1); i++){
            arr[i] = arr[i+1];
        }
        n--;
        return n;
    }

    for(int i=0; i<numsSize-1; i++){
        int j=i+1;
        if(nums[i]==nums[j]){
            numsSize = deleteElement(nums,numsSize, i);
            i--;
        }
    }

    return numsSize;
}
/*
Learnings-
1. Sorted array deletion was way simpler,
2. Don't complicate things. Look at question and think before jumping into code. Not all deletion require nested for loops.

1. Whenever logic feels right but test cases are not completed, DEBUG
2. Dry run, even the basic codes beause you are not fluent till date with ADTs
*/