#include<stdio.h>
void categorise_books(char file_b[],char file_h[],char file_p[])
{
    char type,title[30],author[20];
    float price;
    FILE*fp1,*fp2,*fp3;
    fp1=fopen(file_b,"r");
    fp2=fopen(file_h,"w");
    fp3=fopen(file_p,"w");
    while(fscanf(fp1,"%c,%[^,],%[^,],%f\n",&type,title,author,&price)!=EOF)
    {
        if(type=='h')
            fprintf(fp2,"%s,%s,%f\n",title,author,price);
        if(type=='p')
            fprintf(fp3,"%s,%s,%f\n",title,author,price);
        if(type=='b')
        {
            fprintf(fp2,"%s,%s,%f\n",title,author,price);
            fprintf(fp3,"%s,%s,%f\n",title,author,price);
        }
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
}
int main()
{
    categorise_books("all_books.txt","hardbacks.txt","paperbacks.txt");
    return 0;
}
A