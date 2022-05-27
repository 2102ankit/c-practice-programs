#include<stdio.h>
typedef struct family
{
	char wife_name[20];
	int n_child;
	char child_names[10][20];
}family;
typedef union details
{
	family fam;
	char hobby[30];

}details;
typedef struct member
{
	char name[20];
	int age;
	char addr[100];
	char active,married;
	//family fam; -->method 1
	details det;
}member;
void read_members(member m[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		printf("Enter name:");
		scanf("%s",m[i].name);
		printf("Enter age:");
		scanf("%d",&m[i].age);
		printf("Enter address:");
		scanf("%s",m[i].addr);
		printf("Enter active(A)/inactive(I):");
		scanf(" %c",&m[i].active);
		printf("Enter active(M)/unmarried(S):");
		scanf(" %c",&m[i].married);
		if(m[i].married=='M')
		{
			//**to access the components which in turn are component,
			//**we use a sequence of dots(periods) till we reach the desired component
			printf("Enter wife's name:");
			scanf("%s",m[i].det.fam.wife_name);//**
			printf("Enter no. of children:");
			scanf("%d",&m[i].det.fam.n_child);//**
			for(j=0;j<m[i].det.fam.n_child;j++)
			{
				printf("Enter child's name:");
				scanf("%s",m[i].det.fam.child_names[j]);//**
			}

		}
		else
		{
			printf("Enter hobby:");
			scanf("%s",m[i].det.hobby);//**
		}
	}//end-i
}
void print_details(member m[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(m[i].active=='A'&& m[i].married=='M')
		{
			printf("\nMember %d Wife Name: %s",i+1,m[i].det.fam.wife_name);
		}
		else if(m[i].active=='A'&& m[i].married=='S')
		{
			printf("\nMember %d Hobby: %s",i+1,m[i].det.hobby);
		}
		else
		{
			printf("\nMember %d Inactive",i+1);
		}
	}
}
int main()
{
	member members[20];
	int n;
	printf("Enter n:");
	scanf("%d",&n);
	read_members(members,n);
	print_details(members,n);
	return 0;
}
