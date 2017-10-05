//C code to print the sum of given  numbers using array

//input : pass the inputs count to the function

//output : prints the array in given order and their sum 

//this is the declaration part
int array_sum(int n);

////this is the function that you should copy and paste in your program!
int array_sum(int n){
	int i,sum=0,array[n];
	for(i=0;i<n;i++){
		printf("enter a number");
		scanf("%d",&array[i]);
		sum+=array[i];	
	}
	for(i=0;i<n;i++){
		printf("%d",array[i]);
		if(i<n-1)printf("+");
	}
	printf(" : %d",sum);	
}
