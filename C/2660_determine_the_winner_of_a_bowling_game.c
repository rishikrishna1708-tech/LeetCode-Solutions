/*
Problem: 2660. Determine the Winner of a Bowling Game

Approach:
1. Traverse both players' score arrays.
2. For each round:
   - If the player scored 10 in any of the previous two rounds,
     double the current score.
3. Add scores to total sum for each player.
4. Compare total scores:
   - Return 1 if player1 wins
   - Return 2 if player2 wins
   - Return 0 if tie

Time Complexity: O(n)
Space Complexity: O(1)

Language: C
*/

int isWinner(int* player1, int player1Size, int* player2, int player2Size) {
    
    int sum1 = 0,sum2 = 0;
    
    for(int i = 0; i < player1Size; i++) {
        int score1=player1[i];
        int score2=player2[i];
        if((i>0 && player1[i-1]==10) || (i>1 && player1[i-2]==10))
            score1*= 2;
        
        if((i >0&&player2[i-1]==10) || (i>1 && player2[i-2]==10))
            score2*=2;
        
        sum1+=score1;
        sum2+=score2;
    }
    if(sum1>sum2) return 1;
    if(sum2>sum1) return 2;
    return 0;
}
