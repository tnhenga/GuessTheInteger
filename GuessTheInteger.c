/* Tanaka Nhenga
Write a program that plays the game of “guess the number” as follows: Your
program chooses the number to be guessed by selecting an integer at random in
the range 1 to 100. The program then types:
I have a number between 1 and 100.
Can you guess my number?
Please type your first guess.
The player then types a first guess. The program responds with one of the
following:

1. Excellent! You guessed the number!
2. Too low. Try again.
3. Too high. Try again.
If the player’s guess is incorrect, your program should loop until the player finally
gets the number right. Your program should keep telling the player Too high or
Too low to help the player “zero in” on the correct answer. (Note: The search
technique employed in this problem is called binary search in computer science.)
*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

time_t t;
int rn, num=-1;
char PlayAgain = 'y';
srand((unsigned) time(&t));


while(PlayAgain == 'y')
{
rn = (rand()%100)+1;
printf("Hello! I have a number between 1 and 100. \n");
printf("Can you guess it? Enter your guess! \n");
while(rn != num)
{
  scanf("%d",&num);
if(num == rn)
  printf("Excellent! You guessed the number! \n");
else
if(num < rn)
  printf("Higher... Keep guessing. \n");
else
  printf("Lower... Keep guessing. \n");
}
return 0;
}


}