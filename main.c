#include "board.c"

int main(){
	printf("enter any box number from 1 to 9\n");
	printf("press any key to start game");
	getch();
	printf("\a");
	createBoard();
	showBoard();
	while(isMoveAvailable(board)==true&&wincheck(board)==0){
		if (move%2==0) {
			mark=ai;
		}
		else{
			mark=player;
		}
		scanf("%d",&box);
		move+=1;
		makeMove(box,mark);
		showBoard();
	}
	int winner=wincheck(board);
	if (winner==1) printf("%c is winner",player);
	if (winner==-1) printf("%c is winner",ai);
	if (winner==0) printf("tie game");
	
}
