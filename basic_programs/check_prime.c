//The funtion to compute wlshether the given number is prime or not.
//INPUT:The positive number n.
//OUPUT:The number is prime or not.
int check_prime(int n){    //Funtion
    int i,m=n/2,flag=0;    //Local declaration
    for(i=2;i<=m;i++){
        if(n%i==0){        //Checking the condition
            printf("The number is not prime");
            flag=1;break;
        }
     }
     if(flag=0)
         printf("The number is prime");
    }
    

