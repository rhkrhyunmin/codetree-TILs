#include <iostream>
#include <vector>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, num, cnt;
int visited[100][100];
int v[100][100];

int DFS(int x, int y) {
    visited[x][y] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny] && v[nx][ny] == num) {
            cnt += DFS(nx, ny);
        }
    }
    return cnt;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }

    int tmp, max = 0, block_cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (visited[i][j] == false) {
                cnt = 1;
                num = v[i][j];
                tmp = DFS(i, j);
                if (tmp >= 4) block_cnt++;
                if (tmp > max) max = tmp;
            }
        }
    }

    cout << block_cnt << " " << max;
    return 0;
}