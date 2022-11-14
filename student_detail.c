#include <stdio.h>

struct Distance {
   int feet;
   float inch;
} d1, d2, result;

int main() {
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


   // display distance
   printf("\n\nFirst distance = %d feet %.2f inch", d1.feet, d1.inch);
   printf("\n\nSecond distance = %d feet %.2f inch", d2.feet, d2.inch);
   
   // adding distances
   result.feet = d1.feet + d2.feet;
   result.inch = d1.inch + d2.inch;

   printf("\n\n\nSum of distances = %d feet %.2f inch", result.feet, result.inch);

    // subtracting distances
    if(d1.feet>d2.feet)
        result.feet = d1.feet - d2.feet;
    else    
        result.feet = d2.feet - d1.feet;

    if(d1.inch>d2.inch)
        result.inch = d1.inch - d2.inch;
    else    
        result.inch = d2.inch - d1.inch;
        
    printf("\n\n\nDifference of distances = %d feet %.2f inch", result.feet, result.inch);
    
   return 0;
}