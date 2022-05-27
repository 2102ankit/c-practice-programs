#include<stdio.h>
#include<string.h>
typedef struct book{
    char isbn[15];
    int count;
}book_t;

int search_books(book_t b[],int n,char isbn[])
{
    int i,flag=0;
    for(i=0;i<n;i++)
        if(strcmp(b[i].isbn,isbn)==0){
            b[i].count++;
            flag=1;
            break;
            }
    if(flag==0)
    {
        strcpy(b[i].isbn,isbn);
        b[i].count=1;
        return i+1;//this function must return i+1-the number of isbns after adding the ith book index
    }
    return n;//this function must return n-if no changes to the isbn of books
}
void sort(book_t b[],int n)
{
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-1;j++)
            if(b[j].count<b[j+1].count)
            {
                book_t t=b[j];
                b[j]=b[j+1];
                b[j+1]=t;
            }
}
void process_isbn(char filename[],char sorted_file[])
{
    book_t books[100];
    FILE*fp1,*fp2;
    char isbn[15];
    fp1=fopen(filename,"r");
    fp2=fopen(sorted_file,"w");
    int i=0;
    while(fscanf(fp1,"%[^\n]\n",isbn)!=EOF)
    {
        i=search_books(books,i,isbn);
    }
    fclose(fp1);
    sort(books,i);
    int j=0;
    while(j<i)
    {
        fprintf(fp2,"%s,%d\n",books[j].isbn,books[j].count);
        j++;
    }
    fclose(fp2);
}
int main()
{
    process_isbn("isbn.txt","sorted_isbn.txt");
    return 0;
}