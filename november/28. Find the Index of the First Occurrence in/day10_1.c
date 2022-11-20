int strStr(char * haystack, char * needle){
    int len;
    int sizeHay;
    //length of needle and haystack
    for(len=0; needle[len] != NULL; len++){
    }
    for(sizeHay=0; haystack[sizeHay] != NULL; sizeHay++){
        printf("%c", haystack[sizeHay]);
    }
    if(len==sizeHay){
        if(haystack[0]==needle[0]){
            return 0;
        }
        else{
            return -1;
        }
    }
    int count=0;
    int firstCharIndex;
    int flag=0; //up when found the first char of needle and down when whole needle is not there
    int j=0; 
    for(int i=0; i<sizeHay; i++){
        printf("\ni=%d j=%d hay[i]=%c, sizeHay=%d", i,j, haystack[i], sizeHay);
        if(needle[j]==haystack[i]){
            if(!flag){
                flag = 1;
                firstCharIndex = i;
            }
            // test each elem
            count++;
            j++;
        }
        else{
            //printf(" In else \n");
            int forFlag = 0;
            for(int u=0; u<count; u++){
            // printf("\n\ni=%d u=%d hay[i]=%c needle[u]=%c hay[i-u]=%c", i,u, haystack[i],needle[u], haystack[i-u]);

                if(needle[u]==haystack[i]){
                    if(needle[0]==haystack[i-u]){
                        count =1;
                        flag =1;
                        i = (i-u) -1;
                        firstCharIndex = i;
                        break;
                    }
                    else{
                        break;
                    }
                    
                }

            }
            if(!forFlag){
                flag = 0;
                count=0;
                j=0;
            }
        }
        printf(" count = %d len = %d", count,len);
        if(count==len){
            printf("\nReturned\n");
            return firstCharIndex;
        }
    }
    // printf("\ni=%d j=%d hay[i]=%c", 3,j, haystack[3]);


    return -1;
}
/*
Not working for 
babbbbbabb
bbab
*/