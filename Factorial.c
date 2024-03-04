#include<stdio.h>

int recursion(int num){
    if(num==0 || num ==1){ 
        // Factorial of 0 and 1 is equal to 1
        return 1;
    }
    else{
        // This calculate the factorial of the given number
        // from number to 1 
        return  num*recursion(num-1);
        // Now call this function in the else statement.

    }
}


int main(){

    // Declare Variable.
    int number;

    //This code is use to take number and display a statement on the screen.
    printf("Enter a number to calculate its Factorial:");
    scanf("%d",&number);

    //Now check number is positive or negative.
    if(number<0){
        printf("Your number is negative and its factorial is not defined. ");
    }
    else{
        // here we call a function that calculate factorial.
        //Lets create above the main function.

        // This will display the factorial along the numbe.
        printf("Recursion of %d is:%d",number,recursion(number));
    }
    
  


    

}
