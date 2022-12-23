// working but very slow (3 nested for loops)
int lengthOfLongestSubstring(char * s){
    int n; // no of char in s
    for(n=0; s[n]!=NULL; n++){}
    printf("%d",n);

    int i,j,count,max=0,flag=1;
    // i- LB of sub string
    // j- runs from LB to UP-1 of sub string
    // count- counts char in sub string
    // max- returned maximum count
    // flag- flags down when char are same (during comparison) to determine whether to increase size of sub string or stop here only and compare count with max
    for(i=0; i<n; i++){
        // printf("\n%c",s[i]);
        for(count=1; s[i+count]!=NULL; count++){
            for(j=i; j<(i+count); j++){
                if(s[i+count]==s[j]){
                    flag=0;
                    // printf("\n%d %c %c",count,s[i+count],s[j] );
                    break;
                }
                else{
                    // printf("\n%d %c %c",count,s[i+count],s[j] );
                }
            }
            if(flag==0){
                flag=1;
                break;
            }else{}
        }
        if(count>max){
            max=count;
            // printf("\n%d max=%d\n", count, max);
        }
    }

    return max;
}
/*
Learnings-
1. Always dry run each and every 'key if comparisions' to fing error. 
For ex- here I forgot to make flag 1 after the if condition (flag==0) was run

2. Logic building needs to be made quicker, this simple question took too much time(>2hr)
*/