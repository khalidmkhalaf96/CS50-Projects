./
{
    int height;
    do    {
        printf("Height: ");
        height=get_int();
        
    }
    while ( height < 0 || height > 23);
    int raw;
    for ( raw=0 ; raw < height ; raw++)
        {
        
        int space;
        for( space=1; space < height-raw ; space++)
        {
            printf(" ");
        }
        int hash;
        
        for (hash = 0 ; hash < raw+1 ; hash++)
        {
            printf("#");
            
        }
        
        printf("  ");
        for (hash = 0 ; hash < raw+1 ; hash++)
        {
            printf("#");
            
        }
        
        
        
        printf("\n");
        
    }
    
    
}


