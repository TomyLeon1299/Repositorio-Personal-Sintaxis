#include <stdio.h>
#include <ctype.h>

int main()
{
    int caracter = getchar();
    
    while(caracter != EOF)
    {
        if(isdigit(caracter))
        {
            
        }
        else if(islower(caracter))
        {
            putchar(toupper(caracter));
        }  
        else if(isupper(caracter))
        {
            putchar(tolower(caracter));
        }   
        else
        {
            putchar(caracter);
        }

        caracter = getchar();
    }

return 0;
}