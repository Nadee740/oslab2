#include <stdio.h>  
#include <stdlib.h>  
int main ()   
{  
// declaration of the variables  
int i, num;  
printf ( " Enter the last number: ");  
scanf ( " %d", &num);  
for ( i = 1; i<num; i++)  
{  
// use if statement to check the condition  
if ( i == 6 )  
   exit(0);    
  

  
printf  (" \n Number is %d", i);  
}   
return 0;  
}