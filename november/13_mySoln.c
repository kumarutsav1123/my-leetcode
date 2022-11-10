// Beats 5.3% only. Try to get a more optimized solution.

int romanToInt(char * s){

    char rom[7] = {'I','V','X','L','C','D','M'};
    int rom_value[7] = {1,5,10,50,100,500,1000};

    int n;
    for(n=0; s[n] != NULL; n++){
        //to count no of charecters
    }

    int sum=0;
    int flag_first=1; // will flag the first char
    int prev_index; // will store the index of last scanned char
    for(int i=n; i>=0; i--){
        for(int j=0; j<7; j++){
            if(s[i]==rom[j]){
                if(flag_first){
                    sum = sum+rom_value[j];
                    flag_first=0;
                    prev_index=j;
                }
                else{
                    if(prev_index>j){
                        sum = sum -rom_value[j];
                        flag_first=1; //*missed this part at first
                        //*Grouping into 2 was not the correct way to evaluate
                    }
                    else{
                        sum = sum+ rom_value[j];
                    }
                    prev_index=j;
                    printf("Sum2 = %d prev=%d j=%d\n", sum,prev_index,j);
                }
            }

        }
    }
    return sum;

}