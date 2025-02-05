#include <stdio.h>

int main() {

    int a,b,c;
    int g;
    scanf("%d ",&a);
    scanf("%d ",&b);
    scanf("%d",&c);
    if(a==b){
        if(c>a){
         g=c;   
        }
        else{
            g=a;
        }
    }
    else if(b==c){
        if(a>b){
            g=a;
        }
        else{
            g=b;
        }
    }
    else if(c==a)
    {
        if(b>a){
            g=b;
        }
        else{
            g=a;
        }
    }
    else if(a>b){
        if(a>c){
            g=a;
        }
        else {
            g=c;
        }
    }
    else{
        if(b>c){
            g=b;
        }
        else{
            g=c;
        }
    
        }
    printf("The largest number is : %d",g);
    
    
    return 0;
}
