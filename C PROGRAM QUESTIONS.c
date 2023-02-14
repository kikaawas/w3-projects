#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*int main(){
//1.Write a c program to print you name,date of birth and mobile number//

printf("Name:KIKAWA STANLEY\n");
printf("DOB: MAY 28 1991\n");
printf("Mobile Number: 0702257740");

return 0;
}*/

/*int main(){
//2.Write a c program to get the version you are using//
printf("I am using version C18!");

return 0;
}*/

/*int main(){
/*3.Write a C program to print a block F using hash#, where F has a height of six characters and width of five and
four characters. And also to print a big 'C'.*/
//1).BLOCK F//

/*printf("######\n");
printf("#\n");
printf("#\n");
printf("#####\n");
printf("#\n");
printf("#\n");
printf("#\n");

return 0;
}*/

/*int main(){
printf("    ######\n");
printf("  ##      ##\n");
printf(" #\n");
printf(" #\n");
printf(" #\n");
printf(" #\n");
printf(" #\n");
printf("  ##      ##\n");
printf("    ######\n");

return 0;
}*/

/*int main(){
//4.Write a C program to print the following characters in a  reverse way.//
char letter1 = 'x';
char letter2 = 'm';
char letter3 = 'l';

printf("The reverse of %c%c%c is %c%c%c\n",letter1, letter2, letter3, letter3, letter2, letter1);


return 0;

}*/

/*int main (){
//5.write a c program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches//

int height,width,perimeter,area;
height = 7;
width = 5;
perimeter = (height + width + height + width);

area = (height * width);

printf("%d inches is the perimeter of the rectangle\n", perimeter);
printf("%d square inches is the area of the rectangle\n", area);

return 0;
}*/

/*int main (){
 //6.write a c program to compute the perimeter and area of a circle with a given radius//
float radius,perimeter,area;
const float pi = 3.14;
radius = 4;

perimeter = 2*radius*pi;

area = pi*radius*radius;

printf("the perimeter of the cycle = %lf\n", perimeter);
printf("the area of the cycle = %lf\n", area);

return 0;
}*/

/*int main (){
//7.write a c program to display multiple variables//
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;

printf("a + c = %d\n", a + c);
printf("x + c = %f\n", x + c);
printf("dx + x = %lf\n", dx + c);
printf("((int)dx) + ax = %ld\n", ((int)dx) + ax);
printf("a + x = %f\n", a + x);
printf("s + b = %d\n", s + b);
printf("ax + b = %ld\n", ax + b);
printf("s + c = %d\n", s + c);
printf("ax + c = %ld\n", ax + c);
printf("ax + ux = %lu\n", ax + ux);

return 0;

}*/

/*int main (){
/*8.write a c program to convert specified days into
 years,weeks and days (number of days = 1329)*/

 /*int ndays, year, week, days;
 printf("Enter the days:");
 scanf("%d",&ndays);
 year = ndays / 365;
 week = (ndays % 365) / 7;
 days = (ndays % 365) / 7;
 printf("%d is equivalent to %d years,%d weeks,%d days", ndays, year, week, days);

 return 0;

}*/

/*int main (){
//9.write a c program that accepts two integers from the user and calculate the sum of the two integers//

int num1,num2,num3;
printf("Enter the first integer: ");
scanf("%d", &num1);

printf("Enter the second integer:");
scanf("%d", &num2);

num3 = num1 + num2;

printf("sum of the two integers = %d", num3);

return 0;
}*/

/*int main(){
//10.write a c program that accepts two integers from the user and calculate the product of the two integers.
int num1,num2,num3;
printf("Enter the first integer:");
scanf("%d", &num1);

printf("Enter the second integer;");
scanf("%d", &num2);

num3 = num1 * num2;

printf("The product of the two integers is %d",num3);

return 0;
}*/

/*int main(){
/*11.write a c program that accepts two item's weight(floating points' values) and number of
purchase(floating points' values)and calculate the average value of the items*/

/*float weight1,purchase1,weight2,purchase2,total;

printf("Enter weight of item1:");
scanf("%f", &weight1);

printf("Enter the number of purchases of item1:");
scanf("%f", &purchase1);

float qty1 = weight1 * purchase1;

printf("Enter the weight of item2:");
scanf("%f", &weight2);

printf("Enter the number of purchases of item2:");
scanf("%f", &purchase2);

float qty2 = weight2 * purchase2;

total = (qty1 + qty2) / (purchase1 + purchase2);

printf("The average value of the items is %f", total);

return 0;
}*/

/*int main(){
/*12.write a c program that accepts an employee's ID,total worked hours of a month and the amount he received per hour.
Print the employee's ID and salary(with two decimals places)of a particular month.*/

/*float workHours, amountPerHour,salary;
int iD;

printf("Enter Employee ID:");
scanf("%d", &iD);

printf("Enter Total Hours Worked:");
scanf("%f", &workHours);

printf("Enter Amount per Hour:");
scanf("%f", &amountPerHour);

salary = workHours * amountPerHour;

printf("EMPLOYEE ID: %d\n", iD);
printf("EMPLOYEE SALARY: %0.2f", salary);

return 0;
}*/

/*int main () {
/13.write a c program that accepts three integers and find the maximum of the three?//
int num1, num2, num3;

printf("Enter the first integer: ");
scanf("%d", &num1);

printf("Enter the second integer: ");
scanf("%d", &num2);

printf("Enter the third integer: ");
scanf("%d", &num3);

if((num1>num2) && (num1>num3)){
    printf("maximum value = %d",num1);

} else if ((num2>num1) && (num2>num3)){
    printf("maximum value = %d",num2);

} else if ((num3>num1) && (num3>num2)){
    printf("maximum value = %d",num3);
}

return 0;

}*/

/*int main(){
/*14.write a c program to calculate a bike's average consumption from the given total distance(integer value)
traveled(in km) and spent fuel (in liters, float number-2 decimal point).*/
/*int totalDistance;
float fuel;

printf("Enter the given Total distance: ");
scanf("%d", &totalDistance);

printf("Enter fuel Amount in liters: ");
scanf("%f", &fuel);

float averageConsumption = totalDistance / fuel;

printf("Average consumption of the bike is %f km/ltr ", averageConsumption);

return 0;
}*/

/*int main(){
//write a c program to convert a given integer(in seconds) to hours,minutes and seconds//
int hrs, mins, secs, nsecs;
printf("Enter time in seconds: ");
scanf("%d", &nsecs);

hrs = nsecs / 3600;
mins = (nsecs - hrs*3600)/60;
secs = nsecs - hrs*3600- mins*60;

printf("%d HRS:%d MINS:%d SECS", hrs, mins, secs);

return 0;
}*/

/*int main(){
/*write a c program to convert a given a given integer(in days) to years,months and days
assume that all months have 30days and all years have 365days.*/

/*int years,months,days,ndays;

printf("Enter the number of days: ");
scanf("%d", &ndays);

years = ndays / 365;
months = (ndays - years*365)/30;
days = ndays - years*365 - months*30;

printf("%d YEARS %d MONTHS %d DAYS", years, months, days);

return 0;
}*/

/*int main(){
/*write a c program that accepts 4 integers p,q,r,s from the user where q,r and s are positive
and p is even.if q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values",
otherwise print "wrong values".*/
 /*int p,q,r,s;
 printf("Enter first integer: ");
 scanf("%d", &p);
 printf("Enter second integer: ");
 scanf("%d",&q);
 printf("Enter third integer: ");
 scanf("%d",&r);
 printf("Enter fourth integer: ");
 scanf("%d", &s);

 q,r,s > 0;
 p % 2 == 0;

 if((q>r) && (s>p) && ((r + s) > (p + q))){
    printf("Correct values");
    } else {
    printf("wrong values");
    }

return 0;
}*/

/*int main(){
//20.write a c program to print the rootd of Bhaskara's formula from the given three floating numbers.Display a message if it is not possible to find the roots//

double a,b,c,prt1;

printf("a = ");
scanf("%lf", &a);
printf("b = ");
scanf("%lf", &b);
printf("c = ");
scanf("%lf", &c);

prt1 = (b*b) - (4*(a)*(c));

if(prt1 > 0 && a != 0){
   double x1, x2;
    prt1 = sqrt(prt1);

   x1 = (-b + prt1) / (2*a);

   x2 = (-b - prt1) / (2*a);

   printf("root1 = %.5lf\n", x1);
   printf("root2 = %.5lf\n", x2);

} else {
  printf("No possible roots");
}

 return 0;
}*/

         //LOOPS//
/*int main(){
//WRITE A C PROGRAM TO DISPLAY THE FIRST 10 NATURAL NUMBERS//
int i;
for (i=0; i<=10; i++){
    printf("%d\n", i);
}

return 0;
}*/

/*int main(){
//WRITE A C PROGRAM TO FIND THE SUM OF THE FIRST 10 NATURAL NUMBERS//
int j, sum = 0;

for (j = 1; j<=10; j++){
    sum = sum + j;

    printf("%d ", j);
}
printf("\nTHE SUM IS %d", sum);

 return 0;
}*/

/*int main(){
//3.write a c program to display n terms of natural numbers and their sum//
int i, n, sum = 0;
printf("ENTER THE NUMBER OF NATURAL NUMBERS:");
scanf("%d", &n);
for (i = 1; i<=n; i++){
    sum = sum + i;
    printf("%d", i);
}
printf("\nThe sum of the first %d natural numbers is %d", n, sum);
return 0;
}*/

/*int main(){
//write a c program to read 10 numbers from keyboard and find their sum and average//
int i,n,sum = 0;
float average;
printf("Enter 10 numbers: \n");

for(i=1;i<=10; i++){

    printf("number %d:",i);
    scanf("%d",&n);
    sum = sum + n;
}
average = sum / 10;
printf("the sum of 10 numbers is %d and there average is %f",sum,average);

return 0;
}*/

/*int main(){
//5.write a c program to display the cube of the number upto a given integer//

int i,n,cube;

printf("Enter the number of integers: ");
scanf("%d",&n);



for (i=1;i<=n;i++){
        cube = i*i*i;
 printf("\n the cube of %d is %d ",i,cube);

}
return 0;
}*/

/*int main(){
//6.write a program to display the multiplication table of a given integer//

int i,num,n;
printf("Enter the number: ");
scanf("%d", &num);

for (i=1;i<=12; i++){
        n = num*i;

printf("\n %d * %d = %d",i,num,n);

}
return 0;
}*/

/*int main(){
//7.write a c program to display the multiplication table vertically from 1 to n//

int i,num,n;
    printf("Enter a number: ");
    scanf("%d", &num);

 for(i=1; i<=10; i++){
    n = num *i;
    printf("%d * %d = %d, ",num,i,n);
    }
return 0;
}*/

/*int main (){
//write a program in c to display the n terms of odd natural numbers and their sum//
int i,n,sum;
for (i=1,i<=n,i++){
        num = 2i + 1;


}
}*/

/*int main(){
int myNum = 5;

printf("myNum",%d);

return 0;

}*/


