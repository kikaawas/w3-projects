#include<stdio.h>
#include<stdlib.h>
//1.C-PROGRAM TO CHECK WHETHER AN INTEGER ENTERED IS ODD OR EVEN//
/*int main(){
int number;
printf("Enter a number: ");
scanf("%d", &number);

if(number%2 == 0){
    printf("NUMBER IS EVEN ");
} else {
printf("NUMBER IS ODD ");
}
return 0;

}*/

//2.C PROGRAM TO FIND THE LARGEST NUMBER AMONG THREE//

/*int main(){
int num1,num2,num3;
printf("ENTER THREE NUMBERS ");
scanf("%d,%d,%d",&num1,&num2,&num3);

if(num1 >= num2 && num1 >= num3){
    printf("%d IS THE LARGEST NUMBER", num1);
} else if(num2 >= num1 && num2 >= num3) {
printf("%d IS THE LARGEST NUMBER", num2);
} else if (num3 >= num1 && num3 >= num2){
printf("%d IS THE LARGEST NUMBER", num3);
       }

       return 0;

}*/

//PROGRAM TO FIND THE LARGEST NUMBER USING CONDITIONAL OPERATOR//
/*int main() {
int x, y, z, largest;

printf("Enter three numbers: ");
scanf("%d%d%d", &x, &y, &z);

largest = x > y? (x > z? x:z): (y > z? y:z);
printf("%i Is the Largest Number: ", largest);

 return 0;

}*/

