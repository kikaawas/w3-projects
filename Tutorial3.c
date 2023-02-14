#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*int main () {
//BREAK//
int i;

for (i = 0; i < 10; i++){
    if (i == 4){
        break;
    }
    printf("%d\n" , i);
}
return 0;
}*/

/*int main(){
//Continue//
int i;

for (i = 0; i < 10; i++){
        if(i == 4) {
                continue;
} printf("%d\n" , i);
}

return 0;

}*/

/*int main (){
    //BREAK IN WHILE LOOP//
int i = 0;

while (i < 10) {
    if (i == 4){
      break;
}
printf("%d\n" , i);
i++;}

return 0;
}*/

/*int main (){
//CONTINUE IN THE WHILE LOOP//
int i = 0;

while (i < 10) {
    if (i == 4) {
        i++;
        continue;
    }
    printf("%d\n" , i);
    i++;
}
return 0;
}*/


/*int main (){
    //TO ACCESS THE ELEMENTS OF AN ARRAY//
int myNumbers[] = {25,50,75,100};

printf("%d",myNumbers[0]);

return 0;
}*/

/*int main() {
int myNumbers[] = {25,50,75,100};
myNumbers[0] = 33;

printf("%d" , myNumbers[0]);

return 0;
}*/

/*int main() {
//LOOP THROUGH AN ARRAY//
int myNumbers[ ] = {25, 50, 75, 100};
int i;

for (i = 0; i < 4; i++){
    printf("%d\n", myNumbers[i]);
}
return 0;
}*/

/*int main (){
int myNumbers[4];

myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;

printf("%d\n", myNumbers[0]);

return 0;

}*/

/*int main(){
//ACCESS THE ELEMENTS OF A 2D ARRAY//

int matrix[2][3] = {{1,4,2}, {3,6,8}};

printf("%d", matrix[0][2]);

return 0;
}*/

/*int main(){
//CHANGE ELEMENTS IN A 2D ARRAY//

int matrix[2][3] = {{1,4,2}, {3,6,8}};
matrix[0][0] = 9;
printf("%d", matrix[0][0]);
 return 0;
}*/

/*int main(){
//LOOP THROUGH A 2D ARRAY//
int matrix[2][3] = {{1,4,2},{3,6,8}};

int i,j;
for(i=0; i<2; i++){
    for(j=0; j<3; j++){
        printf("%d\n", matrix[i][j]);
    }
}
 return 0;
}*/
