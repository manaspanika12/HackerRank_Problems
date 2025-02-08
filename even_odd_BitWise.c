#include <stdio.h>

int main()
{
    printf("Hello!! I am Jarvis\n");
    int a;
    int b=1;
    printf("Enter A Whole Number\n");
    scanf("%d",&a);
    if((a&b)==0){
        printf("%d is Even",a);
    }
    else{
        printf("%d is Odd",a);
    }

    return 0;
}