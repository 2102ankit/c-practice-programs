#include<stdio.h>
// vowel, consonant, total characters, words
int vowel (char s[])
{   int i, counter=0;
    for ( i = 0; s[i]!=0 ; i++)
    {   if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ||
        s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {counter++;
        }            
    }
    return counter;    
}
 
int consonant (char s[])
{   int i, counter=0,counter2=0;
    for ( i = 0; s[i]!=0 ; i++)
    {if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
    {   if (s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' &&
        s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U' && s[i]!=32)
        {counter++;
        }
    }
    }
    return counter;
    
}

int length (char s[])
{   int i, counter=0;
    for ( i = 0; s[i]!=0 ; i++)
    {counter++;            
    }
    return counter;    
}

int words (char s[])
{   int i, counter=0;
    for ( i = 0; s[i]!=0 ; i++)
    {   if (s[i]==32)
        {counter++;
        }
    }
    return counter+1;    
}

int main()
{
    char str[20];
    int x,y,z,w;
    printf("Enter the string: ");
    scanf("%[^\n]",str);
    x = vowel(str);
    y= consonant(str);
    z=length(str);
    w=words(str);
    printf("The number of vowels is %d", x);
    printf("\nThe number of consonants is %d", y);
    printf("\nThe total number of characters is %d", z);
    printf("\nThe total number of words is %d", w);

    return 0;

}