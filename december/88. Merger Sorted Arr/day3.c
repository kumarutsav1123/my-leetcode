void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){

    int arr[m+n];

    int i,j=0, k=0;
    for(i=0; j<m && k<n; i++){
        if(nums1[j]<nums2[k]){
            arr[i]=nums1[j];
            j++;
        }else{
            arr[i]=nums2[k];
            k++;
        }
    }
    for(i=i; j<m; i++){
        arr[i]=nums1[j];
        j++;
    }
    for(i=i; k<n; i++){
        arr[i]=nums2[k];
        k++;
    }
    for(int i=0; i<nums1Size; i++){
        nums1[i]=arr[i];
    }
}
/*
Learnings-
1. Code is not O(m+n) but O(2*(m+n)), for making O(m+n) will be tricky
*/