#include "calculator_operations.h"
int main()
{
   int option;
int n1;
int n2;
 
        switch(option)
        {
            case 1: scanf("%d %d",&n1,&n2);
			printf("%d",add(n1,n2));
                      break;
 
            case 2:scanf("%d %d",&n1,&n2);
			printf("%d",subtract(n1,n2));
                      break;
 
            case 3: scanf("%d %d",&n1,&n2);
			printf("%d",multiply(n1,n2));
                      break;
            case 4: scanf("%d %d",&n1,&n2);
			printf("%d",divide(n1,n2));
                      break;
            case 5: scanf("%d %d",&n1,&n2);
			printf("%d",modulus(n1,n2));
                      break;
            
        }
    return 0;
}