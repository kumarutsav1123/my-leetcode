int removeElement(int* nums, int numsSize, int val){
    int delElem(int arr[], int index, int n){
        for(int i=index; i<(n-1); i++){
            arr[i]=arr[i+1];
        }
        n--;
        return n;
    }

    for(int i=0; i<numsSize; i++){
        if(nums[i] == val){
            numsSize = delElem(nums, i, numsSize);
            i--;
        }
    }
    
    return numsSize;
}
/*
This one was fairly simple, just ran the delete in array algo.
1. Keep in mind the extra decrements that you need to do during array deletion and in for loop in main.
*/