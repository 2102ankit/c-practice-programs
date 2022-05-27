#include<stdio.h>
#include<math.h>
int main ()
{
    int dec,bin,r,i,ch;
    printf("\n 1.Binary to Decimal \n 2.Decimal tp Binary \n 3.Exit");
    printf("\nEnter your choice:");
    scanf("%d", &ch);

    if(ch==1)
    {        
        printf("\nEnter the Binary number:");
        scanf("%d",&bin);
        dec=0;
        i=1;
        while(bin!=0)
        {
            r=bin%10;
            bin/=10;
            dec+=r*i;
            i*=2;
        }
         printf("\nThe Decimal equivalent is %d",dec);
        /*1001
        r=1,num=100
        dec=0+1*1
        i=2
        r=0
        dec=1+0*2
        r=0=1+0*4
        r=1
        dec=1+1*8

        
        
        */
    }
    else if (ch==2)
    {
        i=1;
        printf("\nEnter the Decimal number:");
        scanf("%d",&dec);
        bin=0;
        while(dec!=0)
        {
            r=dec%2;
            dec/=2;
            bin+=r*i;
            i*=10;
        }
         printf("\nThe Binary equivalent is %d",bin);
        /*i=1
        reqd=0
        while given!=0

        rem=given/base of reqd
        given/=base of reqd
        reqd+=rem*i
        i*=base of given
        
        */
    }
    else if (ch==3)
    {
        printf("\nBye Bye!");
    }

    else 
    {
        printf("\n :>");
    }

        return 0;
}
