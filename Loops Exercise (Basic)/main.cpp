/*

 Another coding challenge from HackerRank
 
 *Task
 
 Given an integer, n, print its first 10 multiples (n * i). Each multiple (n * i) (where 1 <= i <= 10) should be printed on a new line in the form: (n * i) = result.
 
 *Input Format
 
 A single integer, n.
 
 *Constraints
 
 2 <= n <= 20

 *Output Format
 
 Print 10 lines of output; each line i (where 1 <= i <= 10) contains the result of (n * i) in the form:
 (n * i) = result.
 
 ----------
 
 A great little exercise to keep up those for loop chops

*/

#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    for (int j = 1; j <= 10; j++) {
        cout << n << " x " << j << " = " << (n * j) << endl;
    }

    return 0;
}
