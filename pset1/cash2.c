#include<stdio.h>
#include<cs50.h>
int main (void)
{
    
    float changeowed = get_float("change owed : ");
    int change = changeowed*100 ;
    
    
    if (change<5)
    {
        printf("%i penny\n",change);
        
    } else if (change==5)
    {
        printf("a nickel\n");
        
    }  else if (change>5&&change<10){
        printf("%i penny \na nickel\n",change-5);
        
    }
    else if (change==10){
        printf("a dime\n");
        
    }
    else if (change>10&&change<15){
        printf("%i penny \na dime\n",change-10);
        
    }
    else if (change==15){
        printf("a nickel\na dime\n");
        
        
    }else if (change>15&&change<20){
        printf("%i penny\na nickel\na dime\n",change-15);
        
        
    }else if (change==20){
        printf("2 dime\n");
        
        
    }else if (change>20&&change<25){
        printf("%i penny\n2 dime\n",change-20);
        
        
    }else if (change==25){
        printf("a quarter\n");
        
        
    }else if (change>25){
        int c1=change/25 ;
        printf("%i quarter\n",c1);
        int c1r=change%25 ;
        if (c1r<5)
        {
        printf("%i penny\n",c1r);
        
        } else if (c1r==5)
        {
          printf("a nickel\n");
        
        }  else if (c1r>5&&c1r<10){
           printf("%i penny \na nickel\n",c1r-5);
        
        }
          else if (c1r==10){
           printf("a dime\n");
        
        }
           else if (c1r>10&&c1r<15){
           printf("%i penny \na dime\n",c1r-10);
        
        }
           else if (c1r==15){
           printf("a nickel\na dime\n");
        
        
        }  else if (c1r>15&&c1r<20){
           printf("%i\na nickel\na dime\n",c1r-15);
        
        
        }  else if (c1r==20){
           printf("2 dime\n");
        
        
        }  else if (c1r>20&&c1r<25){
           printf("%i penny\n2 dime\n",c1r-20);
    }
    }
  
}
