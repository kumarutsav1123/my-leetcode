bool isPalindrome(int x){
    int arr1[11];
    int arr2[11];
    int i;
    int y=x, z=x;
    if(x<0){
        return false;
    }
    for(i=0; x; i++){
        arr1[i]=x%10;
        x=x/10;
    }
    for(int j=0; i; j++){
        arr2[j]=arr1[i-1];
        i--;
    }

    //for some reason arr1==arr2 was not working, so I had to check for each element
    bool ret = true;
    for(i=0; (y && ret); i++){
        ret = arr1[i]==arr2[i];
        y=y/10;
    }
    
    return ret;
}

/*
Approach -
Store each digit of x in arr1 then store reverse of arr1 in arr2 then compare arr1[i]==arr2[i]
*/