#include<stdio.h>
#include<math.h>
int main (){

float a1,a2,b1,b2,c1,c2;
printf("enter cordianes of a:");
scanf("%f %f",&a1,&a2);
printf("enter cordianes of b:");
scanf("%f %f",&b1,&b2);
printf("enter cordianes of c:");
scanf("%f %f",&c1,&c2);
float ab=sqrt(pow((b1-a1),2)+pow(b2-a2,2));
float bc=sqrt(pow((c1-b1),2)+pow(c2-b1,2));
float ac=sqrt(pow((c1-a1),2)+pow(c2-a1,2));
if(ab==bc && bc==ac) {
    printf("It is a  Equilateral triangle");
}
else if(ab==bc && bc!=ac) {
    printf("it is a  Isosceles trinangle");
}
else{
    printf("It is a or Scalene triangle");
}







 return 0;
}
