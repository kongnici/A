#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc !=2)
    {
        return 1;
    }
    else
    {
        int k = atoi(argv[1]);
    }
    
    printf("give me word:");
    string p = GetString();
    
    if (p != NULL)
    {
        if(isalhpa(k[i]))
        {
            for( int i = 0; i = strlen(p); i++)
            {
                if(isupper(k[i])
                {
                    printf("%c",(k[i] - 97 + k) % 26 + 97)
                }
                else if (islower(k[i])
                {
                    printf("%c",(k[i] - 123 + k) % 26 +123)
                }
            }
        }
    }
    return 1;
};
    
    //http://code.google.com/p/danieleugenewilliams/source/browse/CS50/pset2_crypto/caesar.c?r=e3d985f64042a5041b1c43e490bc5956c571dd63
