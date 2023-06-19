#include<stdio.h>

void newPrint(char *char1){
    printf("The value is %s\n",char1);
}

int sum(int a,int b){
    return a+b;
}
float average(float a,float b){
    return (float)(a+b)/2;
}

int main(int argc, char const *argv[])
{
    // newPrint("hello world");
    // printf("%d\n",sum(10,11));
    // printf("%f\n",average(100,11));

    // int glo=78;
    // printf("%d\n",glo);

    // arrays 
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // printf("%d\n",arr[5]);

    for (int i = 0; i < 10; i++)
    {
        printf("enter the value of index at %d \n",i);
        scanf("%d\n",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of index is %d is  %d \n",i,arr[i]);
    }
    

    return 0;
}
