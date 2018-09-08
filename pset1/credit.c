#include<stdio.h>
#include<cs50.h>
int main (void)
{
    
    long long credit;
    
    do
    {
        credit=get_long_long("credit:");
    }
    while(credit<1);
    
    long long x=credit , z=credit , a=credit , f=credit , e=credit;
    int y=0;
    int c ;
    int s=0;
    int sd=0;
    int sds=0;
    for (x=credit,a=credit,f=credit,e=credit;x>y;x/=10,a/=10)
    
    {
        
        z = z/10*10 ;
        c= a-z ;
        
        z=z/10;
        
        if (f==e)
        
        {
            
            
            f=f/100;
            e=e/10;
            s=s+c;
            
          
        }else if (f==e/10)
        {
            
            e=e/10;
            sd=(c*2);
            if (c<5)
            {
                sds=sds+sd;
            }else if (c>=5)
            {
                if (c==5)
                {
                    sds=sds+1;
                }else if (c==6)
                {
                    sds=sds+3;
                }else if (c==7)
                {
                    sds=sds+5;
                }else if (c==8)
                {
                    sds=sds+7;
                }else if (c==9)
                {
                    sds=sds+9;
                }
                
                
            }
         
        }
       
        
     }
     
     int sum = s + sds;
     int sumr = sum%10;
     if (sumr==0)
     {
       
         long long amex1= credit>=340000000000000;
         long long amex11=credit<350000000000000 ;
         long long amex2= credit>=370000000000000;
         long long amex22=credit<380000000000000 ;
         long long master1= credit>=5100000000000000;
         long long master11=credit<5600000000000000 ;
         long long visa1= credit>=4000000000000000 ;
         long long visa11=credit<5000000000000000 ;
         long long visa2= credit>=4000000000000;
         long long visa22=credit<5000000000000 ;
         
         
        
            
             if ((amex1&&amex11)||(amex2&&amex22))
        {
            printf ("AMEX\n");
            
        }else if (master1&&master11)
        {
            printf("MASTERCARD\n");
        }else if ((visa1&&visa11)||(visa2&&visa22))
        {
            printf("VISA\n");
            
        }else {
            printf("INVALID\n");
        }
            
            
        
        
        
     }else {
         printf("INVALID\n");
     }
     
     
}     