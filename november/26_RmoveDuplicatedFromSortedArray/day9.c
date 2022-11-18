// The code is exceeding time limit now, need to find quicker algorithm


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
        for(int j=i+1; j<numsSize; j++){
            if(nums[i]==nums[j]){
                numsSize = deleteElement(nums, numsSize, i);
                i--;
                break; // you forgot this break and missed OOP class bc of this
                // whenever logic feels right but test cases are not completed, DEBUG
            }
            else{
                break;
            }
        }
    }

    return numsSize;
}
/*
Learnings-
1. Whenever logic feels right but test cases are not completed, DEBUG
2. Dry run, even the basic codes beause you are not fluent till date with ADTs
*/