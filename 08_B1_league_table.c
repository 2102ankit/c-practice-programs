#include<stdio.h>
#include<string.h>

typedef struct team
{
	char name[30];
	int games,won,lost,draw,goals,points;
}team_t;

typedef struct game
{
	char team1[30],team2[30];
	int goals1, goals2;
} game_t;

void read_teams(int n, team_t t[n])
{
	for(int i=0; i<n; i++)
	{
		printf(" \nEnter Team Name: ");
		scanf(" %[^\n]",t[i].name);
		printf("\nGames Played: ");
		scanf("%d",&t[i].games);
		printf("\nGames Won: ");
		scanf("%d",&t[i].won);
		printf(" \nGames Lost: ");
		scanf("%d",&t[i].lost);

		t[i].draw=t[i].games - t[i].won - t[i].lost;

		printf(" \nGoals Scored: ");
		scanf("%d",&t[i].goals);

		t[i].points=2*t[i].won + t[i].draw;
	}
}

void read_game(int m, game_t g[m])
{
	for(int i=0; i<m; i++)
	{
		printf(" \nTeam 1 Name: ");
		scanf(" %[^\n]",g[i].team1);
		printf(" \nGoals scored by team 1: ");
		scanf("%d",&g[i].goals1);
		printf(" \nTeam 2 Name: ");
		scanf(" %[^\n]",g[i].team2);
		printf(" \nGoals scored by team 2: ");
		scanf("%d",&g[i].goals2);

	}

}


void print_teams(int n, team_t t[n])
{
	for(int i=0; i<n; i++)
	{
		printf(" \nTeam Name: ");
		printf(" %s",t[i].name);
		printf(" \nGames Played: ");
		printf(" %d",t[i].games);
		printf(" \nGames Won: ");
		printf(" %d",t[i].won);
		printf(" \nGames Lost: ");
		printf(" %d",t[i].lost);
        printf(" \nGames Draw: ");
		printf(" %d",t[i].draw);

		//t[i].draw=t[i].games - t[i].won - t[i].lost;

		printf(" \nGoals Scored: ");
		printf(" %d",t[i].goals);
        printf(" \nTotal Points Scored: ");
		printf(" %d",t[i].points);

		//t[i].points=2*t[i].won + t[i].draw;
	}
}

void update_league_table(int n, int m, team_t t[n], game_t g[m])
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(	strcmp(t[i].name,g[j].team1) == 0	)
			{
				if(g[j].goals1> g[j].goals2) 
				{
					t[i].games+=1;
					t[i].won+=1;
					t[i].goals+=g[j].goals1;
					t[i].points+=2;	
				
				}
				else if(g[j].goals1< g[j].goals2) 
				{
					t[i].games+=1;
					t[i].lost+=1;
					t[i].goals+=g[j].goals1;								
				}
				else 
				{
					t[i].games+=1;
					t[i].draw+=1;
					t[i].goals+=g[j].goals1;
					t[i].points+=1;	
				
				}
			}
			
			if(	strcmp(t[i].name,g[j].team2) == 0)	
			{	if(g[j].goals1> g[j].goals2) 
				{
					t[i].games+=1;
					t[i].won+=1;
					t[i].goals+=g[j].goals2;
					t[i].points+=2;				
				}
				else if(g[j].goals1< g[j].goals2) 
				{
					t[i].games+=1;
					t[i].lost+=1;
					t[i].goals+=g[j].goals2;								
				}
				else 
				{
					t[i].games+=1;
					t[i].draw+=1;
					t[i].goals+=g[j].goals2;
					t[i].points+=1;					
				}
			}			
		}
	}
}

int main()
{	
	team_t t[10];
	game_t g[10];
	read_teams(2,t);
	read_game(2,g);
	update_league_table(2,2,t,g);
	print_teams(2,t);
	return 0;
}