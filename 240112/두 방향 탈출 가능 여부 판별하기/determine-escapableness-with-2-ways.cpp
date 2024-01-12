#include <iostream>
#include <vector>

#define MAX_NUM 1000
using namespace std;

int n, m;
int vertex_cnt;

int dx[] = {0, 1};
int dy[] = {-1, 0};

// index를 1번 부터 사용하기 위해 MAX_NUM+1만큼 할당합니다.
int graph[MAX_NUM][MAX_NUM];
bool visited[MAX_NUM][MAX_NUM];

void DFS(int x, int y) {
    // 해당 정점에서 이어져있는 모든 정점을 탐색해줍니다.
    for (int i = 0; i < 2; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 범위를 벗어나는 경우에는 건너뜁니다.
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
            continue;
        }

        // 아직 방문하지 않았고, 간선이 존재하는 경우에만 DFS를 호출합니다.
        if (graph[nx][ny] == 1 && !visited[nx][ny]) {
            visited[nx][ny] = true;

            // 현재 정점에서 이어진 정점에 대해서도 DFS를 호출합니다.
            DFS(nx, ny);
        }
    }
}

int main() {
    cin >> n >> m;

    // 입력을 받을 때 v1과 v2를 사용하지 않고, 대신 그래프의 크기인 n과 m을 이용해 입력을 받습니다.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // 각 정점이 서로 이동이 가능한 양방향 그래프이기 때문에
            // 각 정점에 대한 간선을 각각 저장해줍니다.
            cin >> graph[i][j];
        }
    }

    // DFS 시작
    visited[0][0] = true;
    DFS(0, 0);

    cout << visited[n - 1][m - 1];

    return 0;
}