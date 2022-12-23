// not working
int lengthOfLongestSubstring(char * s){
    char myStr[strlen(s)];
    // String arr[strlen[s]];
    int myLen = 1;
    for(int i=0; i<strlen(s); i++){

        for(int j=0; j<i; j++){
            if(s[i] != myStr[j]){
                myStr[i] = s[i];
            }
            else{
                myLen = i;
            }
        }

    }
    for(int i=0; i<myLen; i++){
        printf("%c ", myStr[i]);
    }

    return 0;
}