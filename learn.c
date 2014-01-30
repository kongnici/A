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
