//
// Created by jessi on 1/12/2024.
//

/*"Seven Wonders is a card drafting game in which players build
 structures to earn points. The player who ends with the most points wins.
 One winning strategy is to focus on building scientific structures.
 There are three types of scientific structure cards: Tablet (‘T’), Compass (‘C’), and Gear (‘G’).
 For each type of cards, a player earns a number of points that is equal to the
 squared number of that type of cards played. Additionally, for each set of
 three different scientific cards, a player scores
 points.
For example, if a player plays
 Tablet cards,
 Compass cards and
 Gear card, she gets
 points.

It might be tedious to calculate how many scientific points a player gets by the end of each game.
 Therefore, you are here to help write a program for the calculation to save everyone’s time.

Input
The input has a single string with no more than
 characters. The string contains only letters ‘T’, ‘C’ or ‘G’,
 which denote the scientific cards a player has played in a Seven Wonders game.

Output
Output the number of scientific points the player earns.

Note
Seven Wonders was created by Antoine Bauza, and published by Repos Production. Antoine Bauza and Repos Production do not endorse and have no involvement with the ProgNova contest.

 "*/
#include <iostream>
#include <valarray>

using namespace std;

string cards;
int tcards = 0;
int gcards = 0;
int ccards = 0;
int main(){
    cout<<"Enter your cards"<< endl;
    cin>>cards;

    //Found out how much of each card
    for(int i = 0; i < cards.size(); i++){
        if(cards.at(i) == 'T'){
            tcards += 1;
        }else if(cards.at(i) == 'G') {
            gcards += 1;
        }else if (cards.at(i) == 'C'){
            ccards += 1;
        }
    }

    //Get the score
    cout<< (pow(tcards,2)+ pow(gcards,2)+pow(ccards,2));



}
