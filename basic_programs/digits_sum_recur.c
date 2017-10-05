//C code to return the sum of digits usig recursion

//input : pass the given number to the function

//output : returns the sum of digits

//this is the declaration part
int digits_sum_recur(int n);

//this is the function that you should copy and paste in your program!
int digits_sum_recur(int n){
	if (n==0)return 0;
	else return n%10+digits_sum_recur(n/10);
}

