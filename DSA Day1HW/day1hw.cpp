/* 
November 27, 2021

Diane Granger 
dianeegranger@gmail.com

Data Structures and Algorithms Zero to Hero
LetsUpgrade
Instructor:  Subrat Kkumar Swain

Day 1 Assignment:
Write code to print the following pattern:

1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1

Concept:  Pattern Printing

*/

#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  int i, j, rows;
  
  cout << "Please enter the number of rows to print:  ";
  cin >> rows;     /* store user input in rows */

  /* nested loop structure */
  /* for each of the rows */
  for(i=1; i<=rows; i++) {
    /* j - number of items to print in row i */
    for(j=i; j>=1; j--) {
      cout << (j % 2);    
    } /* close j loop */
    cout << "\n";     /* done printing this line, move cursor to next line */
  } /* close i loop */
  return 0;
} /* close out main() function */


/*
day1hw.cpp TEST OUTPUT:
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs> ./day1hw
Please enter the number of rows to print:  10
1
01
101
0101
10101
010101
1010101
01010101
101010101
0101010101
PS C:\Users\diane\OneDrive\Desktop\LetsUpgrade\Data Structures and Algorithms\dsa probs>
*/