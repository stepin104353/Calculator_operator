#include "calculator_operations.h"
int add(int number1,int number2)
{
    int total;
    total=number1+number2;
    return total;
}
 
int subtract(int number1,int number2)
{ 
   int total;
    total=number1-number2;
    return total;
}
 
int multiply(int number1,int number2)
{
    int total;
    total=number1*number2;
    return total;
}
 
float divide(int number1,int number2)
{
   float total;
    total=number1/number2;
    return total;
}
 
int modulus(int number1,int number2)
{
   int answer=0;
    answer=number1%number2;
    return answer;
}