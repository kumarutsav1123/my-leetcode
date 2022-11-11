// Sadly now it's even more slower

int romanToInt(char * s){
    int sum=0;
    char rom[7] = {'I','V','X','L','C','D','M'};
    int rom_value[7] = {1,5,10,50,100,500,1000};

    int n;
    for(n=0; s[n] != NULL; n++){
        //to count no of charecters
    }

/*
New Approach.
Scan from left to right
Keep adding rom_value (this time with if else and not for loop)
if index_now>index_prev 
    then subtract twice-rom_value[index_prev] 
    (twice because 
    1. It was meant to subtract
    2. Because it was added unnecessarily in last step
    )

*/
    int index_prev=0;
    if(s[0]!=rom[0]){
        sum = 2; //because 2 is getting subtracted because of index_prtev initialized at 0(-1*2)
        // not for 'I' , obviously
    }
    int index_now;
    for(int i=0; i<n; i++){
        if(s[i]==rom[0]){
            index_now=0;
            if(index_now>index_prev){
                sum=sum- 2*rom_value[index_prev];
            }
            sum = sum + rom_value[index_now];
            index_prev = index_now;
            printf("%d ", sum);
        }
        else if(s[i]==rom[1]){
            index_now=1;
            if(index_now>index_prev){
                sum=sum- 2*rom_value[index_prev];
            }
            sum = sum + rom_value[index_now];
            index_prev = index_now;
            printf("%d ", sum);

        }
        else if(s[i]==rom[2]){
            index_now=2;
            if(index_now>index_prev){
                sum=sum- 2*rom_value[index_prev];
            }
            sum = sum + rom_value[index_now];
            index_prev = index_now;
            printf("%d ", sum);

        }
        else if(s[i]==rom[3]){
            index_now=3;
            if(index_now>index_prev){
                sum=sum- 2*rom_value[index_prev];
            }
            sum = sum + rom_value[index_now];
            index_prev = index_now;
            printf("%d ", sum);

        }
        else if(s[i]==rom[4]){
            index_now=4;
            if(index_now>index_prev){
                sum=sum- 2*rom_value[index_prev];
            }
            sum = sum + rom_value[index_now];
            index_prev = index_now;
            printf("%d ", sum);

        }
        else if(s[i]==rom[5]){
            index_now=5;
            if(index_now>index_prev){
                sum=sum- 2*rom_value[index_prev];
            }
            sum = sum + rom_value[index_now];
            index_prev = index_now;
            printf("%d ", sum);

        }
        else if(s[i]==rom[6]){
            index_now=6;
            if(index_now>index_prev){
                sum=sum- 2*rom_value[index_prev];
            }
            sum = sum + rom_value[index_now];
            index_prev = index_now;
            printf("%d ", sum);

        }

    }

    return sum;

}