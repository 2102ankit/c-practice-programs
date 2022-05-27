#include<stdio.h>
#include <string.h>
struct vehicle{
	char reg_no[10],owner[30],address[40];
};
void print_owner(char filename[])
{	FILE*fp1;
	struct vehicle v;
	int i,n,flag;
	char reg_no[10];
	printf("Enter n:");
	scanf("%d",&n);
	fp1=fopen(filename,"r");
	for(i=0;i<n;i++)
	{	flag=0;
		printf("\nEnter owner's registration no.:");
		scanf("%s",reg_no);
		//fp1=fopen(filename,"r");
		while(fscanf(fp1,"%[^,],%[^,],%[^\n]\n",v.reg_no,v.owner,v.address)!=EOF)
		{	if(strcmp(v.reg_no,reg_no)==0)
			{	printf("\n%s,%s",v.owner,v.address);
				flag=1;
				break;}
		}//while
		if(flag==0)
		{printf("\nNot found!");
		}
		//fclose(fp1);
		rewind(fp1);
	}//end-for
	fclose(fp1);
}//end-print_owner
int main()
{	print_owner("vehicles.txt");
	return 0;
}