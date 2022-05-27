//1.*(a+0)->*(a+n-1)
//*(a+1)->*(a+n-2)
#include<stdio.h>
void reverse(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int t=*(a+i);
        *(a+i)=*(a+n-1-i);
        *(a+n-1-i)=t;
    }
}
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",*(a+i));
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    reverse(arr,9);
    print(arr,9);

    return 0;
}
