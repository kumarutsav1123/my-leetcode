bool isValid(char * s){
    
    int var1=0;
    int var2=0;
    int var3=0;
    char prev[4000]; //because of constraint 1 <= s.length <= 104
    int pCount=3; //Had to make 3, because of index out of bound for s[i]==)]}

    for(int i=0; s[i] != NULL; i++){
        if(s[i] == '('){
            var1++;
            prev[pCount++] =s[i];
        }
        else if(s[i] == ')'){
            var1--;
            pCount--;
            if(prev[pCount]!='('){
                printf("  %c", prev);
                return false;
            }
        }
        else if(s[i] == '['){
            var2++;
            prev[pCount++]=s[i];
        }
        else if(s[i] == ']'){
            var2--;
            pCount--;
            if(prev[pCount]!='['){
                return false;
            }
        }
        else if(s[i] == '{'){
            var3++;
            prev[pCount++]=s[i];
        }
        else if(s[i] == '}'){
            var3--;
            pCount--;
            if(prev[pCount]!='{'){
                return false;
            }
        }
        if(var1<0 || var2<0 || var3<0){
            printf("NOt hehe");
            return false;
        }
        printf("\nVar1=%d var2=%d var3=%d prev=%c", var1,var2,var3,prev);
    }

    bool ret = !(var1||var2||var3) ;
    return ret;
}

/*
Learnings
1. Coming up with all the exception case is taking time, do something about it.
2. Because of the given constraint had to take arr size very big, memory could have been reduced by taking linked list
*/