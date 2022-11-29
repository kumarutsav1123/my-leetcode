double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int arr[nums1Size+nums2Size];
    int n=nums1Size+nums2Size;
    int i,a=0,b=0;
    for(i=0; (a<nums1Size && b<nums2Size); i++){
        if(nums1[a]<nums2[b]){
            arr[i]=nums1[a];
            a++;
        }
        else{
            arr[i]=nums2[b];
            b++;
        }
    }
    while(a<nums1Size){
        arr[i]=nums1[a];
        a++;
        i++;
    }
    while(b<nums2Size){
        arr[i]=nums2[b];
        b++;
        i++;
    }
    
    if(n%2){
        return (arr[n/2]);
    }
    else{
        float ret = (arr[n/2]+arr[(n-1)/2])/2.0;
        return ret;
    }
}
/*
Learnings
1. Dry running gets very important when you feel like your code is right but is not giving the expected result.

*/