#include <cs.50.h>
#include <studio.h>
#include <string.h>

int main(void)
{
    // get line of text
    string s = GetString();
    
    // print string, one character per line
    if (s != NULL)
    {
        for (int i = 0; i < strlen(s); i++)
        {
            char c = s[i];
            printf("%c\n",c);
        }
    }
    return 0;
}

// same function

int main(void)
{
    // get line of text
    string s = GetString();
    
    //print string, one character per line
    if (s != NULL)
    {
        for (int i = 0, n = strlen(s); i < n; i++)
        {
            printf("%c\n", s[i]);
        }
    }
    return 0;
}

// 

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    //   print arguement
    printf("\n");
    for (int i = 0; i < argc; i++)
         printf("%s\n", argv[i]);
    printf("\n");
    return 0;
}

/***********
 * jharvard@appliance (~/src2w): ./argv1 goodbye classroom 
 * 
 * ./argv1
 * goodbye
 * class
 * **/
 
