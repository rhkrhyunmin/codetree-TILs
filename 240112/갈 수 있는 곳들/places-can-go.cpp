#include <iostream>
#include <vector>
using namespace std;

int n, k;
vector<vector<int>> board;
vector<vector<bool>> visited;

void DFS(int row, int col) {
    if (row < 0 || row >= n || col < 0 || col >= n || visited[row][col] || board[row][col] == 1)
        return;

    visited[row][col] = true;

    DFS(row + 1, col);
    DFS(row - 1, col);
    DFS(row, col + 1);
    DFS(row, col - 1);
}

int main() {
    cin >> n >> k;

    // Initialize board and visited vectors
    board.resize(n, vector<int>(n, 0));
    visited.resize(n, vector<bool>(n, false));

    // Input the grid values
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];

    // Input the starting points
    for (int i = 0; i < k; i++) {
        int startRow, startCol;
        cin >> startRow >> startCol;
        DFS(startRow - 1, startCol - 1);  // Adjust to 0-based indexing
    }

    // Count the number of visited cells
    int countVisited = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (visited[i][j])
                countVisited++;

    cout << countVisited << endl;

    return 0;
}