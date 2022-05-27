#include <stdio.h>
#include <string.h>

typedef struct airplane                  //------> prepare structure for flight record
{
	char stpt[4];
	char dest[4];
	int sttime;
	int arrtime;
	int seats;
} airplane_t;

void readdata(airplane_t flight[], int n) 		// --------> prepares a database for flight records
{
	for (int i = 0; i < n; i++)
	{
		printf("Enter the starting location: ");
		scanf(" %[^\n]", flight[i].stpt);               // ----> space added to take of buffer
		printf("Enter the final location: ");
		scanf(" %[^\n]", flight[i].dest);				// ----> space added to take of buffer
		printf("Enter the starting time: ");
		scanf(" %d", &flight[i].sttime);
		printf("Enter the arrival time: ");
		scanf(" %d", &flight[i].arrtime);
		printf("Enter the number of seats available: ");
		scanf(" %d", &flight[i].seats);
	}
}

void search(airplane_t flight[], int n)
{
	char src[4], desti[4];
	int x, y, p = 1, flag, j;

	do
	{
		printf("\nEnter Your Starting Location: ");
		scanf(" %s", src);
		printf("Enter Your Destination Location: ");
		scanf(" %s", desti);

		flag = 0;
		for (j = 0; j < n; j++)
		{
			if (strcmp(src, flight[j].stpt) == 0 && strcmp(desti, flight[j].dest) == 0 && flight[j].seats > 0)
			{
				y = j;
				printf("You have a flight availabe for this journey.");
				printf("\nNo. of seats left in this flight= %d", flight[y].seats);
				printf("\nEnter 1 to confirm booking: \n");
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			scanf("%d", &x);
		else
		{
			printf("Sorry. There are no flights available.");
		}

		if (x == 1)
		{
			printf("Your booking has been confirmed!");
			flight[y].seats--;
			printf("\nNo. of seats left in this flight= %d", flight[y].seats);
		}
		 
		printf("\nDo you wish to continue?\nEnter 1 for yes else enter 0 for no: ");
		scanf("%d", &p);

	} while (p != 0);
}

int main()
{
	int n;
	printf("Enter the number of data: ");
	scanf("%d", &n);

	airplane_t flight[n];
	readdata(flight, n);
	search(flight, n);

	return 0;
}
