#include <stdio.h>
 
int main()
{
    char ch;
     
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        switch(ch)
        {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf(" VOWEL.\n",ch);
                break;
            default:
                printf(" CONSONANT.\n",ch);            
        }
    }
    else
    {
        printf("invalid.\n",ch);
    }
 
    return 0;
}

