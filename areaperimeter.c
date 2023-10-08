#include<stdio.h>
int main()
{
float length, breadth, side, radius;

// Area and Perimeter of Circle
printf("Enter the radius of the circle: \n");
scanf("%f", &radius);
printf("The area of circle is %f \n", 3.14*radius*radius);
printf("The perimeter of the circle is %f \n" , 2*3.14*radius);

// Area and Perimeter of Square
printf("\nEnter the side of the square: \n");
scanf("%f", &side);
printf("The area of square is %f \n", side*side);
printf("The perimeter of the square is %f \n", 4*side);

// Area and Perimeter of Rectangle
printf("\nEnter the length of the rectangle: \n");
scanf("%f", &length);
printf("Enter the breadth of the rectangle: \n");
scanf("%f", &breadth);
printf("The area of the rectangle is %f \n", length*breadth);
printf("The perimeter of the rectangle is %f \n", 2*(length+breadth));

return 0;

}