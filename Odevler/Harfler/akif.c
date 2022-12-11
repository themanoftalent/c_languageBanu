// Make your program write "Akif" in a traianlge shape. 
// you have the code for ABC
// imagine, think, search and do it.
// Best luck!


int main()

{
	
int i,j;
char w1='A';
char w2='k';
char w3='i';
char w4='f';

for(i=1; i<=5; i++)
{
    for(j=0; j<(2*5-2*i); j++)
    {
        printf(" ");
    }
    printf(" ");
    for(j=0; j<i; j++)
    {
        printf("%c",w1);
    }
    
    for(j=i; j<5; j++)
    {
        printf(" ");
    }
    printf(" ");
    for(j=0; j<i; j++)
    {
      printf("%c",w2);  
    }
    printf(" ");
    for(j=0; j<i; j++)
    {
        printf("%c",w3);
    }
    for(j=0; j<i; j++)
    {
        printf(" ");
    }
    printf(" ");
    for(j=0; j<i; j++)
    {
        printf("%c",w4);
    }
    printf("\n");

}  


return 0;
}
