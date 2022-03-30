#Approach
- if row[i] contains 1 or col[j] contains 1
=> matrix[0..n][j] = 1 and matrix[i][0...n] = 1
  
- only origin 1's cell makes other cells change.

=> use bitset checkRow and checkCol to check if a row or column contains 1.

- Time Complexity will be O(n^2). We have to go through each cell.
- Space will be O(N), but we can improve it by using bitwise

1. add to bitset: 1001 | 0100 = 1101
1. check exists: 
   1. 1001 & 0100 = 0000 (not exists)
    2. 1001 & 1000 = 1000 > 0 (exists)
    

With this improvement, we can reduce the memory
Time: O(n^2)
Space: O(1)