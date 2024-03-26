#include<stdio.h>
#include<math.h>
int main(){
    float h;
    printf ("Enter the value of H plus consistency :");
    scanf("%f",&h);
    float ph=-log10(h);
    if (ph<7){
        printf("The solution is Acidic");
    }
    else if(ph==7){
         printf("The solution is Neutral");
    }
    else{
       printf("The solution is Alkine");
    }













    return 0;

    }
