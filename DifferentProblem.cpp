//
// Created by jessi on 1/12/2024.
//
/*"Write a program that computes the difference between non-negative integers.
 Input
Each line of the input consists of a pair of integers. Each integer is between
 and
 (inclusive). The input is terminated by end of file.

 Output
 For each pair of integers in the input,
 output one line, containing the absolute value of their difference.
 "
 */

#include <iostream>
#include <cstring>
#include <vector>
using namespace std;





int main() {
    string intOne;
    string intTwo;
    int smallest;
    string subtractOne = "";
    string SubtractTwo = "";
    int subOne;
    int subTwo;
    vector<int> vectorOne;
    vector<int> vectorTwo;

    //Getting input
    cout<< "Please input two integers" << endl;
    //Store integers as strings to hold larger integers
    cin>> intOne;
    cin>> intTwo;

    //Put String to Vector

    for(int i = 0; i < intOne.size(); i++){
        vectorOne.push_back((int)intOne.at(i)-48);
    }
    for(int i = 0; i < intTwo.size(); i++){
        vectorTwo.push_back((int)intTwo.at(i)-48);
    }

    //Subtraction
    if(vectorOne.size() > vectorTwo.size()) {
        if (vectorTwo.size() > 10000000000000000) {
            vectorOne.at(
        } else if (vectorTwo.size() > 1000000000000000) {

        }else if (vectorTwo.size() > 100000000000000) {

        }else if (vectorTwo.size() > 10000000000000) {

        }else if (vectorTwo.size() > 1000000000000) {

        }else if (vectorTwo.size() > 100000000000) {

        }else if (vectorTwo.size() > 10000000000) {

        }else if (vectorTwo.size() > 1000000000) {

        }else if (vectorTwo.size() > 100000000) {

        }else if (vectorTwo.size() > 10000000) {

        }else if (vectorTwo.size() > 1000000) {

        }else if (vectorTwo.size() > 100000) {

        }else if (vectorTwo.size() > 10000) {

        }else if (vectorTwo.size() > 1000) {

        }else if (vectorTwo.size() > 100) {
            vectorTwo.at(3)
        }else if (vectorTwo.size() > 10) {
            for(int i = 0; i <= vectorTwo.size; i++){
                subtractTwo += vectorTwo.at[i];
            }

        }

    }else{
        smallest = 1;
    }








}
