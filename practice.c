# include <stdio.h>
// write a program to calculate area of square(side is given)
int main() {
    int a,b ;
    printf("enter a")  ;
    scanf("%d" , &a) ;
    printf("enter b") ;
    scanf("%d" , &b) ;
    printf("sum is : %d" , a*b) ;

     // if the value of side is not integer
    float c,d ;
    printf("enter c") ;
    scanf("%f" , &c) ;
    printf("enter d") ;
    scanf("%f" , &d) ;
    printf("sum is : %f" , c*d) ;
    return 0 ;

     // modulus of two numbers
     int x,y,modul ;
     printf("enter x") ;
     scanf("%d" , &x) ;
     printf("enter y") ;
     scanf("%d" , &y) ;
     printf("modul is : %d" , x%y) ;
     return 0 ;

     // cube of number
     int m,n,cube ;
     printf("enter m") ;
     scanf("%d" , &m) ;
     n=m*m*m ;
     printf("cube of number : %d" , m*m*m) ;
     return 0 ;

     // area of triangle
     int base,height ;
     printf("enter base of triangle") ;
     scanf("%d" , &base) ;
     printf("enter height of triangle") ;
     scanf("%d" , &height) ;
     printf("area of triangle : %d" , (base*height)/2) ;
     return 0 ;

     // calculate simple interest
     float principal_amount, rate, time, simple_interest ;
     printf("enter principal amount") ;
     scanf("%f" , &principal_amount) ;
     printf("enter rate of interest") ;
     scanf("%f" , &rate) ;
     printf("enter time in year") ;
     scanf("%f" , &time) ;
     printf("simple interest : %.2f\n" , simple_interest=(principal_amount*rate*time)/100.0) ;
     return 0 ;

     //convert weight kg into gram
     float kg, gram ;
     printf("enter value in kg") ;
     scanf("%f", & kg) ;
     gram=kg*1000 ;
     printf("value in gram") ;
     printf("%.2f\n\n", gram) ;
     return 0 ;

     // convert indian rs into dollar
     float rupees, dollar ;
     printf("enter the amount in rupees") ;
     scanf("%f" , &rupees) ;
     dollar = rupees/ 82.74 ;
     printf(" rupees is equal to %.2f dollar", rupees , dollar) ;
     return 0 ;

     //convert temperature from degree C to F
     float C, F ;
     printf("enter temp in C\n") ;
     scanf("%f" , &C) ;
     printf("temp in F : %f\n , (C*9/5) + 32") ;
     return 0 ;
     
     




     

}
  




