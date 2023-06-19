#include <stdio.h>

int main()
{

    // compiler will ignore this single line comment
    /*this is a multi-line comment
     */
    // printf("hello\n");

    // datatypes- int,float,char
    // int a = 10; //2 to 4 bytes
    // float b = 8.0; //4 byte
    // char c = 'D'; //1 byte
    // float- 6 decimal places, double -15 decimal places long double-19 decimal places
    // unsigned int d=8;
    // unsigned short e=8;
    // long integer1=8;
    // short integer2=8;
    // double myfloat1=7.45;
    // long double myfloat2=12343;
    // printf("%d %f %c",a,b, c);
    /*variable is a container to store the value. depending on datatype, the size varies. */

    // sizeOf() function
    /*
    printf("the size taken by int is %d\n",sizeof(int),"\n");
    printf("the size taken by int is %d\n",sizeof(unsigned int));
    printf("the size taken by int is %d\n",sizeof(double));
    printf("the size taken by int is %d\n",sizeof(long double));
    printf("the size taken by int is %d\n",sizeof(char));
    printf("the size taken by int is %d\n",sizeof(short));
    printf("the size taken by int is %d\n",sizeof(float));
    */

    // printf("******Rules of creating variables: \n*****");
    /*
    1. follow the camelCase int harryName=76 declaration and initialization.
    */
    //    int omkarName=90;
    //    const int i=9; //constant
    //    omkarName=98;

    // types of operators
    /*
    Arithmatic operators
    Relational operators
    Logical operators
    Bitwise operators
    Assignment operators
    Misc operators
    */
    //    1. Arithmatic operators
    // int a=6,b=7,c=8;
    /*
    printf("the sum of a and b is %d\n",a+b);
    printf("the difference of a and b is %d\n",a-b);
    printf("the product of a and b is %d\n",a*b);
    printf("the divide of a and b is %d\n",a/b);
    printf("the remainder of a and b is %d\n",a%b);

    printf("The pre-increment value of a is %d\n",++a);
    printf("The post-increment value of a is %d\n",a++);

    printf("The post-decrement value of a is %d\n",--b);
    printf("The post-decrement value of a is %d\n",b--);
    */

    //    relational opertors
    // int omkar=95, devesh=95;
    // printf("%d\n",omkar==devesh);
    // printf("%d\n",omkar!=devesh);
    // printf("%d\n",omkar>devesh);
    // printf("%d\n",omkar<devesh);
    // printf("%d\n",omkar<=devesh);
    // printf("%d\n",omkar>=devesh);

    // logical operators
    // int a=0,j=1;
    // printf("The logical operator returned %d\n",a&&j);
    // printf("The logical operator returned %d\n",a||j);
    // printf("The logical operator returned %d\n",!j);
    // printf("The logical operator returned %d\n",!a);

    // bitwise operator
    // int a=60, b=13;
    // int a=00111100
    //     b=00001101;
    // printf("Bitwise operator returned %d\n",a&b);
    // printf("Bitwise operator returned %d\n",a|b);
    // printf("Bitwise operator returned %d\n",a^b);
    // printf("Bitwise operator returned %d\n",~b);
    // printf("Bitwise operator returned %d\n",~a);
    // printf("Bitwise operator returned %d\n",a<<b);
    // printf("Bitwise operator returned %d\n",a>>b);

    // Assignment operators
    // =,+=,-=,*=,/=,%=
    // int ha=9;
    // ha+=9;
    // printf("%d\n",ha);

    // Misc operators &,*,? &variable address, *value,?conditional statement

    // printf("*****usr inputs*******\n");
    // int omkarInput;
    // printf("enter value of omkarInput: \n");
    // scanf("%d",&omkarInput);
    // printf("You entered : %f as omkarInput\n",(float)omkarInput);

    // int num1,num2;
    // scanf("%d",&num1);
    // scanf("%d",&num2);
    // printf("num1/num2 is %f\n",(float)num1/num2);

    // conditinal statements decision making
    // printf("*****decsion making*******\n");
    // printf("enter your age: \n");
    // int age;
    // scanf("%d",&age);

    // if(age<18){
    //     printf("you can drive\n");
    // }else if(age>18 && age<=24){
    //     printf("you are banned from driving.\n");
    // }else{
    //     printf("you can drive but drive carefully.\n");
    // }

    // swtich
    // int age;
    // scanf("%d",&age);
    // switch (age)
    // {
    // case 18: printf("You cannot drive");
    //     break;
    // case 90: printf("You cannot drive");
    //     break;
    // default: printf("You can drive but drive carefully\n");
    //     break;
    // }

    // int age=50;
    // int i4=age>50?100:200;
    // printf("%d\n",i4);

    // printf("*****looping*******\n");
    // int index = 0;
    // while (index < 10)
    // {
    //     printf("%d\n ", index);
    //     index += 1;
    // }

    // for (int j = 0; j < 10; j++)
    // {
    //     printf("value of j %d\n ",j);
    // }

    /*
    int j=0;
    do
    {
        printf("do while loop is running.\n");
    } while (j>123432);
    */

    printf("*****functions in c*******\n");

//    functions 
    
    

    return 0;
}