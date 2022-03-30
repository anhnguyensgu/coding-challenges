#include <bits/stdc++.h>

using namespace std;

void solveMatrix(vector<vector<int>> matrix, int n) {
  int checkRow = 0;
  int checkCol = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] == 1) {
        checkRow |= 1 << i;
        checkCol |= 1 << j;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    int isOne = checkRow & (1 << i);
    if (isOne != 0) {
      for (int j = 0; j < n; j++) {
        matrix[i][j] = 1;
      }
    }

    isOne = checkCol & (1 << i);
    if (isOne != 0) {
      for (int j = 0; j < n; j++) {
        matrix[j][i] = 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }
}

vector<vector<int>> transformArrayToVector(int **testcase1, int n) {
  vector<vector<int>> matrixVector;
  for (int i = 0; i < n; i++) {
    vector<int> row;
    for (int j = 0; j < n; j++) {
      row.push_back(testcase1[i][j]);
    }
    matrixVector.push_back(row);
  }
  return matrixVector;
}

int main() {
  int n = 4;

  vector<vector<int>> testcase_1 = {
      {5, 9, 2, 5},
      {1, 0, 2, 3},
      {3, 1, 2, 4},
      {0, 1, 2, 3},
  };

  vector<vector<int>> testcase_2 = {
      {0, 1, 2, 3},
      {3, 1, 2, 4},
      {1, 0, 2, 4},
      {5, 9, 2, 5},
  };

    vector<vector<int>> testcase_3 = {
      {0, 1, 2, 3},
      {3, 2, 1, 4},
      {0, 0, 2, 4},
      {5, 9, 2, 5},
  };

  solveMatrix(testcase_3, n);
}
// time complexity: O(n^2)
// space complexity: O(1)