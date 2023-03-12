#include<bits/stdc++.h>
using namespace std;
int main()
{
    int matrix[3][3];
    cout << "Enter the matrix (3x3) row by row:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    int search_digit;
    cout << "Enter a single digit to search for in the matrix: ";
    cin >> search_digit;

    int count = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == search_digit) {
                count++;
            }
        }
    }

    cout << "The digit " << search_digit << " appears " << count << " times in the matrix." << endl;
    



  return 0;
}