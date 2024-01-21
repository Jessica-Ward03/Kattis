//
// Created by jessi on 1/20/2024.
//
/*"Do you like saxophone? I have an Eb Alto Saxophone, shown to the right.
My fingers move a lot when playing some music,
 and I’m quite interested in how many times each finger presses a button.
 Assume that the music is composed of only
 different notes. They are: C D E F G A B in one octave and C D E F G A B in a higher octave.
 We use c,d,e,f,g,a,b,C,D,E,F,G,A,B to represent them. The fingers I use for each note are:

c: finger 2-4, 7-10

d: finger 2-4, 7-9

e: finger 2-4,7,8

f: finger 2-4,7

g: finger 2-4

a: finger 2,3

b: finger 2

C: finger 3

D: finger 1-4, 7-9

E: finger 1-4, 7,8

F: finger 1-4,7

G: finger 1-4

A: finger 1-3


B: finger 1-2

(Note that every finger is controlling a specific button, different fingers are controlling
 different buttons.)

Write a program to help count the number of times each finger presses the button.
 A finger presses a button if it is needed in a note,
 but not used in the last note. Also, if it is the first note,
 every finger required presses a button.

Input
The first line of the input is a single integer t(1<= t <= 1000)
, indicating the number of test cases.
 For each case, there is only one line containing the song.
 The only allowed characters are “cdefgabCDEFGAB”. There are at most 200
 notes in a song, and the song maybe empty.

Output
For each test case, print
 numbers indicating the number of presses for each finger. Numbers are separated by a single space"*/

#include <iostream>


using namespace std;

int onecount, twocount, threecount,fourcount, fivecount = 0;
int sixcount, sevencount, eightcount,ninecount,tencount = 0;

void numberpress(char letter){
    switch (letter) {
        case 'c':
            twocount++;
            threecount++;
            fourcount++;
            sevencount++;
            eightcount++;
            ninecount++;
            tencount++;
            break;
        case 'd':
            twocount++;
            threecount++;
            fourcount++;
            sevencount++;
            eightcount++;
            ninecount++;
            break;
        case 'e':
            twocount++;
            threecount++;
            fourcount++;
            sevencount++;
            eightcount++;
            break;
        case 'f':
            twocount++;
            threecount++;
            fourcount++;
            sevencount++;
            break;
        case 'g':
            twocount++;
            threecount++;
            fourcount++;
            break;
        case 'a':
            twocount++;
            threecount++;
            fourcount++;
            break;
        case 'b':
            twocount++;
            break;
        case 'C':
            threecount++;
            break;
        case 'D':
            onecount++;
            twocount++;
            threecount++;
            fourcount++;
            sevencount++;
            eightcount++;
            ninecount++;
            break;
        case 'E':
            onecount++;
            twocount++;
            threecount++;
            fourcount++;
            sevencount++;
            eightcount++;
            break;
        case 'F':
            onecount++;
            twocount++;
            threecount++;
            fourcount++;
            sevencount++;
            break;
        case 'G':
            onecount++;
            twocount++;
            threecount++;
            fourcount++;
            break;
        case 'A':
            onecount++;
            twocount++;
            threecount++;
            break;
        case 'B':
            onecount++;
            twocount++;
            break;
    }

}
 int main(){
     int amount;
     string input;


     cin>>amount;
     for(int i = 0; i < amount;i++){
         cin>>input;
         for(int j = 0; j < input.size(); j++) {
             numberpress(input[j]);
         }
         cout<<onecount << " " << twocount << " " << threecount << " " << fourcount << " " << fivecount << " " << sixcount << " " << sevencount << " " << eightcount << " " << ninecount << " " << tencount <<endl;
     }


}



