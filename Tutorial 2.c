#include<stdio.h>
#include<stdlib.h>
/*int main () {
//USING IF--ELSE//
int time = 20;

if(time < 18){
    printf("GOOD DAY");
} else {
 printf("GOOD EVENING");
}

return 0;

}*/

/*int main() {
//USING THE ELSE-IF STATEMENT//

int time = 22;
if (time < 10){
printf("good morning");
}else if (time < 20){
printf("good day");
}else {
printf("good evening");
}
return 0;

}*/

/*int main(){
//FINDING OUT IF A NUMBER IS POSITIVE OR NEGATIVE USING ELSE-IF STATEMENT//
 int num = 10;

 if (num > 0){
    printf("Number is positive");
 } else if (num < 0){
 printf("Number is negative");
 } else {
 printf("Number is 0 ");
 }
 return 0;
}*/

/*int main() {
    //SHORT-HAND IF-ELSE(TERNARY OPERATOR)
int time = 20;
(time < 18)? printf("Good day"):printf("Good evening");

return 0;
}*/

/*int main () {
//switch statement//

int day = 4;

switch (day){
case 1:
    printf("monday");
    break;

case 2:
    printf("tuesday");
    break;

case 3:
    printf("wednesday");
    break;
case 4:
    printf("thursday");
    break;

case 5:
    printf("friday");

default:
    printf("looking forward to the weekend");
}
}*/

/*int main () {
//THE WHILE LOOP//

int i = 0;

while (i < 5) {
    printf("%d\n", i);
    i++;

}
}*/

/*int main (){
//THE DO/WHILE LOOP//

int i = 0;
do{
    printf("%d\n", i);
    i++;
}
while (i < 5);

return 0;
}*/

/*int main() {
//THE FOR LOOP//
int i;

for (i = 0; i < 5; i++){
    printf("%d\n", i);
}
return 0;
}*/

//example 2//
int main () {
    int i;
for(i=0; i <= 10; i += 2){
    printf("%d\n", i);
}
return 0;
}

