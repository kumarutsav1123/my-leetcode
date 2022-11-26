// Output is correct, leetcode problem. Because leetcode is treating return type as int, but it's value is exceeding the max limit.
// So return INT_MAX/INT_MIN if more/less than INT_MAX/INT_MIN
// Also return max values as soon as count of digits gets more than 10

int myAtoi(char * s){
    int i=0,j=0,w=0,flag=0;
    //0.002 Check for empty string
    if(s[0] == NULL){
        return 0;
    }
    //0.01 Check for whitespace
    for(w=0; s[w]==' '; w++){
    }

    //0.1 Check for -ve and +ve
    if(s[w] == '-' || s[w] == '+'){
        if(s[w] == '-'){
            flag = 1;
        }
        w++;
    }

    //0.2 Check for leading 0
    for(i=w; s[i]=='0'; i++){
    }

    //1. Convert string to int, till anything other than int(48-57) occur
    int count = 0; //simply break if no of digits is more than 10(obviously it is more that INT_MAX)
    long int num=0;
    for(i; (s[i]>=48 && s[i]<=57); i++){
        int temp = s[i] - 48;
        printf("%d ", temp);
        num = (10*num) + temp;
        j++; // for pow
        count++;
        if(count>10){
            break;
        }
    }

    // L3 - return INT_MAX/INT_MIN if value is more/less than INT_MAX/INT_MIN
    if(num>INT_MAX && !flag){
        return INT_MAX;
    }
    //-ve check
    if(flag){
        num = -num;
        if(num<INT_MIN){
            return INT_MIN;
        }
    }

    return num;
}
/*
Learnings
1. Lookout while -int , it should be signed for larger numbers
2. Int has limits, cast to long long :(
3. Point 2 will work for normal cases, but letcode want return type in int only, so if revNum exceeds IMT_MAX value, return the INT_MAX value
4. Check for empty string also :|
*/