#include <stdio.h>
#include "basic_operations.h"


int main(){
    int n, num1, num2;
    int running = 1;
    
    while (running){
        printf("%s\n", "--- BASIC CALCULATOR ---");
        printf("%s\n", "SELECT AN OPTION:");
        printf("%s\n", "1. ADD");
        printf("%s\n", "2. SUBSTRACT");
        printf("%s\n", "3. MULTIPLY");
        printf("%s\n", "4. DIVIDE");
        printf("%s\n", "5. EXIT");
        scanf("%d", &n);
        if (n == 5){
            printf("%s\n", "Exiting..."); 
            return 0;
        }
        if (n < 1 || n > 5){
            printf("%s\n", "NON VALID OPTION");
            continue;
        }
        printf("%s\n", "Write the first number:");
        scanf("%d", &num1);
        printf("%s\n", "Write the second number:");
        scanf("%d", &num2);

        
 
        switch (n){
            case 1:
                
                printf("Result = %d\n",sum(num1, num2));
                break;
            case 2:
                
                printf("Result = %d\n",sub(num1, num2));
                break;
            case 3:
                
                printf("Result = %d\n",mult(num1, num2));
                break;
            case 4:
                if (num2 == 0){
                    printf("%s\n","Division not possible");
                }
                else{
                    printf("Result = %d\n",div(num1, num2));
                }
                
                break;

        }
        
    }
    return 0;
}