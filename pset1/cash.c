#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main (void)
{
    float changeowed;
    do
    {
         changeowed = get_float("change owed :");
    }
    while (changeowed<0);
    
       int change = round(changeowed*100) ;
    
  


    
    int c1 = change/25 ;
    int c1r = change%25;
    int c2 = c1r/10 ;
    int c2r = c1r%10 ;
    int c3 = c2r/5 ;
    int c3r = c2r%5 ;
    int c4 = c3r/1  ;
    if (changeowed>0){
    printf("%i\n",c1+c2+c3+c4);
    }
    
    
}
