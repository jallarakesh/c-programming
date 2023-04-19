#include <stdio.h>  
  #include <math.h>  
    
  
  union Shape {  
      float radius;  
      struct {  
          float length;  
          float width;  
      } rectangle;  
  };  
   int main() {  
      union Shape shape;  
    
     
      char shapeType;  
      printf("Enter shape type: (c for circle, r for rectangle)\n");  
      scanf("%c", &shapeType);  
    if (shapeType == 'c') {  
       printf("Enter the radius of the circle:\n");  
          scanf("%f", &shape.radius);  
    
       
          float area = M_PI * pow(shape.radius, 2);  
          printf("Area of circle: %f\n", area);  
      } else if (shapeType == 'r') {  
          printf("Enter the length of the rectangle:\n");  
          scanf("%f", &shape.rectangle.length);  
    
          printf("Enter the width of the rectangle:\n");  
          scanf("%f", &shape.rectangle.width);  
    
          
          float area = shape.rectangle.length * shape.rectangle.width;  
          printf("Area of rectangle: %f\n", area);  
      } else {  
          printf("Invalid shape type!\n");  
      }  
    
      return 0;  
  }
