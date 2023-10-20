#include <stdio.h>
 
int main()
{
    int choice;
    float side, length, breadth, radius, perimeter, area;
 
    printf("\n1.Circle");
    printf("\n2.Square");
    printf("\n3.Rectangle");
    printf("\nEnter your choice:");
    scanf("%d", &choice);
    if (choice==1)
   {
        printf("Enter the radius of crircle:\n");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        perimeter = 2*3.14*radius;
        printf("Area of a circle = %.2f\n", area);
        printf("Perimeter of circle = %.2f\n", perimeter);
   }
    else if(choice==2)
    {
        printf("Enter the side\n");
        scanf("%f", &side);
        area = side * side;
        perimeter = 4 * side;
        printf("Area of a Square = %.2f\n", area);
        printf("Perimeter of Square = %.2f\n", perimeter);
      
    }
    else if(choice==3)
    {
        printf("Enter the lenth and breadth\n");
        scanf("%f %f", &length, &breadth);
        area = breadth * length;
        perimeter = 2*(length+breadth);
        printf("Area of a Rectangle = %.2f\n", area);
        printf("Perimeter of rectangle = %.2f\n", perimeter);
    }
    else
    {
        printf("Invalid number");
    }
    return 0;
}



