#include<stdio.h>

int main (){
int i,n = 10,sum = 0;
float average;
 printf("Enter 10 numbers:");
 scanf("%d", &n);

 for(i=1;i<=10;i++){
     sum = sum + i;
     average = sum/n;

     printf("%d\n",i);

 }
 printf("sum:%d\n",sum);
 printf("average:%.1f\n",average);


}
