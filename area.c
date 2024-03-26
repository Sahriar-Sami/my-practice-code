#include<stdio.h>
#include<math.h>
int main(){

 float x1,y1,x2,y2,x3,y3;
 printf("Enter the value of A:");
 scanf("%f %f",&x1,&y1);
 printf("Enter the value of B:");
 scanf("%f %f",&x2,&y2);
 printf("Enter the value of C:");
 scanf("%f %f",&x3,&y3);
 float area=fabs(Sceil(((x1*(y2-y1))+(x2*(y3-y1))+(x3*(y1-y2)))/2));
 printf("The area of the triangle is %f",area);





 return 0;
}
