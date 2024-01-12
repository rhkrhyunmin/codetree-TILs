#include <iostream>
#include <vector>

#define MAX_NUM 1000
using namespace std;

int n, m;
int vertex_cnt;

int dx[] = { 0, 1 };
int dy[] = {-1, 0};

// index를 1번 부터 사용하기 위해 MAX_NUM+1만큼 할당합니다.
int graph[MAX_NUM + 1][MAX_NUM + 1];
bool visited[MAX_NUM + 1][MAX_NUM +1];

void DFS(int x, int y) {
    // 해당 정점에서 이어져있는 모든 정점을 탐색해줍니다.
    for (int i = 0; i < 2; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        // 아직 간선이 존재하고 방문한 적이 없는 정점에 대해서만 탐색을 진행합니다.
        if (graph[ny][nx] == 1 && !visited[ny][nx]) {
            visited[ny][nx] = true;

            // 현재 정점에서 이어진 정점에 대해서도 DFS를 호출합니다.
            DFS(ny,nx);
        }
    }
}

int main() {
    cin >> n >> m;

    int v1, v2;
    for (int i = 0; i < m; i++) {
        // 각 정점이 서로 이동이 가능한 양방향 그래프이기 때문에
        // 각 정점에 대한 간선을 각각 저장해줍니다.
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }

    // DFS 시작
    visited[0][0] = true;
    DFS(0,0);

    cout << visited[n-1][n-1];

    return 0;
}