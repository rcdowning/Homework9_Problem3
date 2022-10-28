/* The answers to a true-false test are as follows: T T F F T. Given a
 * two-dimensional answer array, in which each row corresponds to the answers
 * provided on one test, write a function that accepts the two-dimensional array
 * and number of tests as parameters and returns  a  one-dimensional  array
 * containing  the  grades  for  each  test.  (Each  question  is  worth  5
 * points, so the maximum possible grade is 25.) Test your function with the
 * following data: */

#include <iomanip>
#include <iostream>

using namespace std;

int main() {

  // create array for the answer key

  char answers[5] = {'T', 'T', 'F', 'F', 'T'};

  // matrix for test data

  const int N_ROWS = 6;
  const int N_COLUMNS = 5;

  char tests[N_ROWS][N_COLUMNS] = {
      {'T', 'F', 'T', 'T', 'T'}, {'T', 'T', 'T', 'T', 'T'},
      {'T', 'T', 'F', 'F', 'T'}, {'F', 'T', 'F', 'F', 'F'},
      {'F', 'F', 'F', 'F', 'F'}, {'T', 'T', 'F', 'T', 'F'}};

  // compare each row to the answer key, add 5 if indexes equal

  int grade = 0;

  for (int r = 1; r < N_ROWS + 1; r++) {
      tests[r][N_COLUMNS];
    for (int c = 0; c < N_COLUMNS; c++) {
      if (tests[N_ROWS][c] == answers[c])
        grade = grade + 5;
    }
    cout << "Test number " << r << " has a grade of " << grade << "." << endl;
  }
}