//C code to return the sum of give n numbers

//input : pass the inputs count to function

//returns the sum of given n integers

//this is the declaration part 
int sum_of_n_numbers(int n);

//this is the function that you should copy and paste in your program!
int sum_of_n_numbers(int n){
	int i,num,sum=0;
	for(i=0;i<n;i++){
		printf("enter a number");
		scanf("%d",&num);
		sum+=num;
	}
	return sum;
}
