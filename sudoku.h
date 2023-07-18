#include<stdio.h>
#include<stdlib.h>

char POSSIBLE = 0x1FF; 


typedef struct Box{
	struct Box * next;	
} Box;

typedef struct Square{
	int number;
	char code; //9 bit value 1 -> not possible 0 -> possible	
	Box * box;
	int row;
	int column;	

} Square;


int ** createPuzzle();
void printPuzzle(int ** puzzle);
Swuare *** setUpPuzzle(int ** puzzle);
