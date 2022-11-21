int lengthOfLastWord(char * s){
    int i, len;
    int count=0;
    char lastChar = ' ';
    int lastCount =0;
    for(len=0; s[len] != NULL; len++){
    }
    for(i=0; i<len; i++){
        if(s[i] != ' '){
            count++;
        }
        else { //had to put i>0, because for i=1, i-1 was getting out of bound
            if(i>0 && s[i-1] != ' '){
                //because there might be consecutive spaces
                lastCount=count; 
            }
            count=0;
        }
        lastChar = s[i];
    }

    if(lastChar != ' '){
        return count;
    }
    else{
        return lastCount;
    }
}
/*
Learnings
1. Question was easy but you must check for boundary conditions
2. Always pay attention to array out of bound conditions, especially with boundary conditions
*/