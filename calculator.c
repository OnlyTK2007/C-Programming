#include<stdio.h>
#include<math.h>
#include<string.h>
int main() {
    double num1 , num2 , result;
    char operator[10];
        printf("enter an expression (+,-,*,/,sqrt,pow):"); 
    scanf("%s",&operator);
    if(strcmp(operator,"+")==0){
            printf("enter two numbers");
        scanf("%lf %lf" ,& num1,& num2); 
            result= num1+num2;
            printf("result : %lf\n" , result);
    }
            else if(strcmp(operator,"-")==0){
            printf("enter two numbers");
        scanf("%lf %lf" ,& num1,& num2);
            result= num1-num2;
            printf("result ; %lf\n" , result);
    }
            else if(strcmp(operator,"*")==0){
            printf("enter two numbers");
        scanf("%lf %lf" ,& num1,& num2);
            result= num1*num2;
            printf("result : %lf\n" , result);
    }        
            else if(strcmp(operator,"/")==0){
            printf("enter two numbers");
        scanf("%lf %lf" ,& num1,& num2);
        if(num2 !=0){
             result= num1/num2;
             printf("result : %lf\n" , result );
        }
        else{
        printf("Error!Division by zero.\n");
    }
}
            else if(strcmp(operator,"sqrt")==0){   
        printf("enter a number to calculate square root");
        scanf("%lf" ,& num1);
        result= sqrt(num1);
        printf("result : %lf\n" , result);
        }
            else if(strcmp(operator,"pow")==0){
        printf("enter two numbers for the base and exponent");
        scanf("%lf %lf" ,& num1,& num2);
        result= pow(num1,num2);
        printf("result : %lf\n" , result);
        }
        else{
        printf("Error! Invalid operator \n");
        }
        return 0;
        



           


    







    }
