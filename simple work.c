#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*int main (){
int Area,Height,Width,Perimeter;
Height = 7;
Width = 5;
Area = Height*Width;
Perimeter = (2*Height) + (2*Width);

printf("The area and perimeter of the rectangle is %d inches and %d inches respectively",Area,Perimeter);

return 0;

}*/

int main(){
float area,radius,Perimeter;
const float pi = 3.14;
radius = 4;

area = pi*radius*radius;
Perimeter = 2*pi*radius;

printf("perimeter of a circle is %.2f and the area is %.2f",Perimeter,area);

return 0;

}

