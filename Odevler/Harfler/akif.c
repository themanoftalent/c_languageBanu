int main()
{
    int i, j;

    char name1='A';
    char name2='k';
    char name3='i';
    char name4='f';
   
    for(i=0; i<=5; i++)
    {
        for(j=1; j<(2*5-2*i); j++)
        {
            printf(" ");
        }
        printf(" ");
        for(j=0; j<i; j++)
        {
            printf("%c",name1);
        }
        
        for(j=i; j<5; j++)
        {
            printf("");
        }
        printf(" ");
        for(j=0; j<i; j++)
        {
          printf("%c",name2);  
        }
        printf(" ");
        for(j=0; j<i; j++)
        {
            printf("%c",name3);
        }
        for(j=0; j<i; j++)
        {
            printf("");
        }
        printf(" ");
        for(j=0; j<i; j++)
        {
            printf("%c",name4);
        }
        printf("\n");
    
    }  
    
    
    return 0;
}
