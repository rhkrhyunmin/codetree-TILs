#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Point {
    int x, y;
};

int n, m;
vector<vector<int>> board;
vector<vector<bool>> visited;

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

bool bfs() {
    queue<Point> q;
    q.push({0, 0});
    visited[0][0] = true;

    while (!q.empty()) {
        Point current = q.front();
        q.pop();

        int x = current.x;
        int y = current.y;

        // 도착 지점에 도달한 경우
        if (x == n - 1 && y == m - 1) {
            return true;
        }

        // 상하좌우 이동
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; ++i) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // 이동 가능하면서 방문하지 않은 경우
            if (isValid(nx, ny) && board[nx][ny] == 1 && !visited[nx][ny]) {
                q.push({nx, ny});
                visited[nx][ny] = true;
            }
        }
    }

    // 도착 지점에 도달하지 못한 경우
    return false;
}

int main() {
    cin >> n >> m;

    board.resize(n, vector<int>(m));
    visited.resize(n, vector<bool>(m, false));

    // 입력 받기
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> board[i][j];
        }
    }

    // BFS로 경로 찾기
    if (bfs()) {
        cout << "1\n";
    } else {
        cout << "0\n";
    }

    return 0;
}