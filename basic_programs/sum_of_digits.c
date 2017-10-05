//C code to return sum of digits of a given number

//input : pass the given number to the function

//output : returns the sum of digits

//this is the declaration part
int sum_of_digits(int n);

//this is the function that you should copy and paste in your program! 
int sum_of_digits(int n){
	int remainder,sum=0;
	while(n>0){
		remainder=n%10;
		sum+=remainder;
		n=n/10;
	}
	return sum;
}
