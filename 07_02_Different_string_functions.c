#include<stdio.h>
void copy(char source[], char dest[])
    {int i;
    for( i=0; source[i]!=0; i++)
    dest[i]=source[i];
    
    dest[i]=0;
    }

int length(char string[])
    {int i;
    for( i=0; string[i]!=0; i++);  
    
    return i;
    }

int compare(char string1[], char string2[])
    {int i;
    for( i=0; string1[i]!=0; i++)
    	{   if (string1[i]>string2[i])
            return 1;

            else if (string1[i]<string2[i])
            return -1;

            else
            return 0;
    	}
    }

void reverse(char source[])
    { 
    int i;
    for( i=0; source[i]!=0; i++);
    //printf("\nThe length is %d",i);
    for(int j=0; j<i/2 ; j++)
    	{	char x=source[j];
    		source[j]=source[i-j-1];
            source[i-j-1]=x;
    	}
    source[i+1]=0;
    }

void concatenate(char string1[],char string2[])
{   int i,j;  
    for(i=0; string1[i]!=0; ++i);
    //printf("\nlength is %d",i);
    for(j=0; string2[j]!=0; ++j);
    //printf("\nlength is %d",j);
    
    for(int x=0; x<j; ++x)
    string1[i+x]=string2[x];
      
    string1[i+j]='\0';
}

void lowtoup(char string[])
{   int i;
    for(i=0; string[i]!=0; i++);

    for(int j=0; j<i; j++)
    {   if(string[j]>96 && string[j]<123)
        string[j]-=32;
    }
}

int main()
{
    char str1[20],str2[20], final[20];

    printf("Enter the String: \n");
    scanf("%[^\n]", str1);

    copy(str1,final);
    printf("The copied string is %s ", final);

    printf("\nThe length of copied string is %d ", length(final));

    printf("\nEnter the 2nd String: \n");
    scanf(" %[^\n]", str2);

    int p=compare(str1, str2);
    if (p==0)
    printf("\nString 1 and 2 are equal.");

    else if (p>0)
    printf("\nString 1 is greater than string 2.");

    else
    printf("\nString 2 is greater than string 1.");

    reverse(str2);
    printf("\nThe reversed string is %s ", str2);

    concatenate(str1, str1);
    printf("\nThe concatenated string is %s ", str1);

    lowtoup(str2);
    printf("\nstring in upper is:%s",str2);

return 0;
}