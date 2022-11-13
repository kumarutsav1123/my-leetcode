//not working
int lengthOfLongestSubstring(char * s){

    //arr[] and initializing all elements to .
    char arr[strlen(s)];
    for(int i=0; i<strlen(s); i++){
        arr[i]='.';
    }

    //first elem
    // arr[0]=s[0];
    //loop to count till unique char are inserted into arr, from s
    int i;
    int j;
    int flag = 1;
    int prev =0; //will store previous i
    int count=0; //had to use count because the i was not doubling down for count(cases were we had to check for further bigger substrings)
    for(i =prev; i<strlen(s)-1; i++){
        printf("i = %d\n", i );
        arr[0]=s[prev]; //had to hardcode because nested for was not working for i=0.
        for(j=prev; j<i; j++){
            printf("j= %d arr[j] = %c s[i] = %c\t", j, arr[j], s[i]);
            if(arr[j]!=s[i]){
                arr[i]=s[i];
            }
            else{
                flag = 0;
                arr[i]='.';
                prev = count;
            }
        }

        if(!flag){
            if(count>prev){
                prev = count;
                count=0;
                // j=prev;
            }
            else{
                
            }
        }
        count++;
    }
    

    return count;
}