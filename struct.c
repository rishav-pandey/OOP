#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} d1, d2, result1, result2;

int main() 
{
   // take first distance input
   printf("Enter 1st distance\n");
   printf("Enter feet: ");
   scanf("%d", &d1.feet);
   printf("Enter inch: ");
   scanf("%f", &d1.inch);
 
   // take second distance input
   printf("\nEnter 2nd distance\n");
   printf("Enter feet: ");
   scanf("%d", &d2.feet);
   printf("Enter inch: ");
   scanf("%f", &d2.inch);
   
   // adding distances
   result1.feet = d1.feet + d2.feet;
   result1.inch = d1.inch + d2.inch;
   
   
    while (d1.inch >= 12.0) {
      d1.inch = d1.inch - 12.0;
      ++d1.feet;
}

// subtracting distances
   if(d1.feet>d2.feet)
   {
       if(d1.inch>=d2.inch){
   result2.feet = d1.feet - d2.feet;
   result2.inch = d1.inch - d2.inch;}
   else if(d2.inch>d1.inch){
       while(d1.inch<d2.inch){
       --d1.feet;
       d1.inch=d1.inch+12;
   }
       result2.feet = d1.feet - d2.feet;
       result2.inch = d1.inch - d2.inch;
   }
       
        // convert inches to feet if greater than 12
   while (result1.inch >= 12.0) {
      result1.inch = result1.inch - 12.0;
      ++result1.feet;
   }
   }
    else{
   result2.feet = d2.feet - d1.feet;
   result2.inch = d2.inch - d1.inch;
         // convert inches to feet if greater than 12
   while (result2.inch >= 12.0) {
      result2.inch = result2.inch - 12.0;
      ++result2.feet;
   }
    }
    

  printf("\nSum of distances = %d\'-%.1f\"", result1.feet, result1.inch);
  printf("\nDifference of distances = %d\'-%.1f\"", result2.feet, result2.inch);
   return 0;
}