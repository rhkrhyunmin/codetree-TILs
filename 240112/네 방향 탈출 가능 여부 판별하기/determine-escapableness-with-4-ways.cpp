#include <iostream>
#include <queue>
using namespace std;

int n, m;
int board[100][100];
queue<pair<int, int>> q;
bool visited[100][100];

void BFS() {

    while (!q.empty()) {
        int x = q.front().first, y = q.front().second;
        q.pop();

        int dx[4] = { 1, -1, 0, 0 };
        int dy[4] = { 0, 0, 1, -1 };

        // Loop through the four directions (up, down, left, right)
        for (int dir = 0; dir < 4; dir++) {
            int nx = x + dx[dir];
            int ny = y + dy[dir];

            // Check if the next position is within the bounds of the grid
            if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                // Check if the next position is not visited and is a valid cell to move into
                if (!visited[nx][ny] && board[nx][ny] == 1) {
                    // Mark the next position as visited
                    visited[nx][ny] = true;
                    // Push the next position into the queue for further exploration
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}

int main() {
    cin >> n >> m; // n:행사이즈, m:열사이즈

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    q.push(make_pair(0, 0));
    visited[0][0] = true;

    BFS();

    // Check if the destination point has been visited
    cout << visited[n - 1][m - 1];

    return 0;
}