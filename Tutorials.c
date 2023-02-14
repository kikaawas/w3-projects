#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //IMPORTS THE BOOLEAN HEADER FILE//
#include <string.h>
/*int main()
{
    //PRINTING DIFFERENT TYPES IN A SINGLE PRINTF()FUNCTION//

    int myNum = 15;
    char myLetter = 'D';

    printf("My Number is %d and my Letter is %c", myNum,myLetter);
    return 0;
}*/

/*int main (){
//CHANGE VARIABLES//
int myNum = 15;
    myNum = 10;

    printf("%d",myNum);

    return 0;
    }*/

   /* int main (){
   //ASSIGNING THE VALUE OF VARIABLE TO ANOTHER//
    int myNum = 15;
    int myOtherNum = 23;

    myNum = myOtherNum;
   printf("%d", myNum);

   return 0;
    }*/

   /* int main(){
   //COPY VARIABLES TO EMPTY VARIABLES//
   int myNum = 15;

   int myOtherNum;
 myOtherNum = myNum;
printf("%d",myOtherNum);

   return 0;

    }*/

   /* int main() {
        //ADD VARIABLES TOGETHER//

        int x = 5;
        int y = 6;

        int sum = x + y;

        printf("%d", sum);

        return 0;
    }*/

    /*int main() {
    //DECLARE MULTIPLE VARIABLES//
    int x = 5, y = 6, z = 50;
    printf("%d",x+y+z);

    return 0;
    }*/

    /*int main () {
    int x,y,z;
    x = y = z = 50;
    printf("%d", x+y+z);

    return 0;

    }*/

    /*int main () {
    //CONSTANT VARIABLES//
    const int BIRTHYEAR = 1980;

    printf("%d", BIRTHYEAR);

    return 0;
    }*/

 /*  int main() {
//OPERATORS

int sum1 = 100 + 50;
int sum2 = sum1 + 250;
int sum3 = sum2 + sum2;

printf("%d\n", sum1);
printf("%d\n", sum2);
printf("%d\n", sum3);

return 0;
    }*/

    /*int main() {
   int x = 10;
   x += 5;
   printf("%d",x);

   return 0;
    }*/

   /* int main() {
   /*COMPARISON OPERATOR(USED TO COMPARE TWO VALUES)
   TRUE(1) AND FALSE(0)*/
   /*int x = 5;
   int y = 3;
   printf("%d\n", x > y);
   printf("%d\n", x > 3 && x < 10);
   printf("%d\n", x < 3 || x > 4);
   printf("%d", !(x > 3 && x < 10));

   return 0;

    }*/

    /*int main(){
        //SIZEOF OPERATOR//
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));

    return 0;

    }*/

    /*int main () {
    //CREATING BOOLEAN VARIABLES//

    bool isProgrammingFun = true;
    bool isFishTasty = false;

    printf("%d\n", isProgrammingFun);
    printf("%d\n", isFishTasty);
    printf("%d\n", 10 == 10);

    return 0;

    }*/

   /* int main () {
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    printf("%d", isHamburgerTasty == isPizzaTasty);

    return 0;
    }*/

    /*int main(){
    int myAge = 25;
    int votingAge = 18;

    printf("%d", myAge >= votingAge);

    return 0;
    }*/

   /* int main(){
   int myAge = 25;
   int votingAge = 18;

   if (myAge >= votingAge){
    printf("Old enough to vote!");
   } else {
   printf("Not old enough to vote.");}

   return 0;

    }*/
//STRINGS//
//modifying strings//
/*int main(){
char greetings[]= "Hello World!";
greetings[0] = 'J';
printf("%s",greetings);
return 0;}*/

//LOOP THROUGH A STRING//
/*int main(){
char carName[]="Volvo";
int i;
for (i=0;i<5;++i){
    printf("%c",carName[i]);
}
return 0;
}*/

//Another method of creating strings//
/*int main(){
char greetings[]={'H', 'e', 'l', 'l', 'o',' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
printf("%s",greetings);
return 0;
}*/

//showing that the 2methods are of the same size//

/*int main(){
char greetings[]={'H', 'e', 'l', 'l', 'o',' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
char greetings2[]="Hello World!";

printf("%lu\n",sizeof(greetings));
printf("%lu\n",sizeof(greetings2));

return 0;

}*/

/*int main(){
char txt[]="we are the so called \"vikings\" from the North and it\'s nice to be from the north\\south";
printf("%s",txt);
return 0;
}*/

//STRINGS FUNCTIONS//

/*int main (){
char alphabet[50]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%d", strlen(alphabet));
printf("\n%d",sizeof(alphabet));

return 0;
}*/

//concatenate strings//
/*int main (){
char str1[20]="Hello ";
char str2[]="World";

strcat(str1,str2);
printf("%s",str1);

return 0;
}*/

//COPYING STRINGS IN C//

/*int main(){
char str1[20]= "Hello World";
char str2[20];

//copy string str1 to str2//
strcpy(str2,str1);

//print str2//
printf("%s",str2);
}*/

//COMPARING STRINGS//
 int main(){
 char str1[]="Hello";
 char str2[]="Hello";
 char str3[]="Hi";

 //compare str1 and str2 and print the result//
 printf("%d\n",strcmp(str1,str2));

 //compare str1 and str2 and print the result//
 printf("%d\n",strcmp(str1,str3));

 return 0;
 }



