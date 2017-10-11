//The function is to print N prime numbers.
//INPUT:A postive integer N.
//OUTPUT:N prime numbers.

int check_prime(int N){    //Funtion
    int i,j,prime;         //Local declaration
    for(i=2;i<=N;i++){
        prime=0;
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                prime=1;break;
            }
        }
        if(prime==0&&n!=1)
           printf("%d ",i);   //Prints the number if it is prime.
        
    }
}