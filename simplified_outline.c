/******************************************************************************
Welcome to 126 Intro to Programming  C
C Programming Language
Programming is only 3 things... 
input->process->output
*******************************************************************************/
//input->process->output  in-proc-out

//input
#include <stdio.h>

int main()
{
    //output
    printf("Hello World\n");
    
    // input
    // declare variables and maybe assign value
    int nums[8] = {1,2,4,8,16,32,64,128};  // nums[8] is an array of 8 elements of integer type. 
    int num1, num2;
    int multiplied;
    
    
    // output->input display to console, get user input, store in vars  
    printf("enter first num: ");
    scanf("%d", &num1);
    printf("enter second num: ");
    scanf("%d", &num2);
    
    //process take user inputs num1 and num2, multiplies them and store value in multiplied
    multiplied = num1 * num2;
    
    //output 
    printf("First number: %d\nmultiplied by\nSecond number: %d\nis: %d \n", num1, num2, multiplied);
    
    printf("the second index element in nums[2] array is:  %d",nums[2]);

    return 0;
}

/******************************************************************************
Welcome to 126 Intro to Programming. 
we will learn:   
Design		C functionality		Example
Declaration	Datatype + variable name	int number;
Output		printf() function		printf(“Hello World”);
Input		scanf() function		scanf(“%d”, &number);
Assign variable 	variable = data	result = num1 + num2;
If else condition 	if(condition) 	if (result > 10)

*******************************************************************************/
