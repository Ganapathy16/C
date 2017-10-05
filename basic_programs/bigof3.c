//C code to return the greatest among three numbers

//input : pass three integers to the function

//output : returns the greatest among the three numbers

//this is the declaration part
int bigof3(int a,int b,int c);

//this is the function that you should copy and paste in your program!
int bigof3(int a,int b, int c){
    if(a>b){
        if(a>c)
            return a;        
        else
            return c;
    }
    else 
        if(b>c)
            return b;
        else
            return c;
} 


