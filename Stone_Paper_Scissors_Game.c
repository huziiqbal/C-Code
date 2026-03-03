#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
	int rounds;
	int choice;
	int win =0 ;
	int loss =0 ;
	int draw =0 ;

	srand(time(NULL));
	printf("Enter the number of rounds you want to play: ");
	scanf("%d",&rounds);
	for (int i =0 ; i<rounds ; i++) {
		printf("Enter your choice for round %d:\n",i+1);
		printf("0 FOR STONE\n1 FOR PAPER\n2 FOR SCISSORS\n");
		scanf("%d",&choice);
		int comp_choice=rand()%3;
		char *game_matrix[3][3]= {{"DRAW","LOSS","WIN"},
			{"WIN","DRAW","LOSS"},
			{"LOSS","WIN","DRAW"}
		};
		printf("THE COMPUTER'S CHOICE WAS %d\n", comp_choice);
		printf("RESULT FOR THIS ROUND IS: %s ",game_matrix[choice][comp_choice]);
		printf("\n");
		if(strcmp(game_matrix[choice][comp_choice],"WIN")==0){
			win +=1;
		}
		else if(strcmp(game_matrix[choice][comp_choice],"LOSS")==0) {
			loss +=1;
		}
		else
			draw+=1;

	}
	if (win>(rounds/2)||win > loss || win> draw) {
		printf("YOU WON THE GAME");
	}

	else if (loss>(rounds/2)||loss > win || loss> draw) {
		printf("YOU LOSS THE GAME");
	}
	else
		printf("THE MATCH WAS DRAW");

	return 0;
}
