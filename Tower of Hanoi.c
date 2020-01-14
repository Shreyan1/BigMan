#include<stdio.h>
#include<conio.h>

void main()
{
    int disk;
    int moves;
    printf("Enter the no. of disk you want to play with: ");
    scanf("%d",&disk);
    moves = pow(2,disk)-1;
    printf("No of moves required is = %d\n",moves);
    hanoi(disk,'A','C','B');
}
void hanoi(int x, char from, char to, char aux)
{
    if(x==1)
        printf("Moves disk from %c to %c\n",from,to);
    else
    {
        hanoi(x-1,from,aux,to);
        printf("Moves disk from %c to %c \n",from,to);
        hanoi(x-1,aux,to,from);
    }
}

