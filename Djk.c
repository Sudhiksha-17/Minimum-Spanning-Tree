// Dijkstra's Algorithm in C

#include <stdio.h>
#define INFINITY 9999
#define MAX 10

void Dijkstra(int Graph[MAX][MAX], int n, int start);

void Dijkstra(int Graph[MAX][MAX], int n, int start) {
  int cost[MAX][MAX], dis[MAX], pred[MAX];
  int visited[MAX], count, mindis, nxtn, i, j;

  // Creating cost matrix
  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      if (Graph[i][j] == 0)
        cost[i][j] = INFINITY;
      else
        cost[i][j] = Graph[i][j];

  for (i = 0; i < n; i++) {
    dis[i] = cost[start][i];
    pred[i] = start;
    visited[i] = 0;
  }

  dis[start] = 0;
  visited[start] = 1;
  count = 1;

  while (count < n - 1) {
    mindis = INFINITY;

    for (i = 0; i < n; i++)
      if (dis[i] < mindis && !visited[i]) {
        mindis = dis[i];
        nxtn = i;
      }

    visited[nxtn] = 1;
    for (i = 0; i < n; i++)
      if (!visited[i])
        if (mindis + cost[nxtn][i] < dis[i]) {
          dis[i] = mindis + cost[nxtn][i];
          pred[i] = nxtn;
        }
    count++;
  }

  // Printing the dis
  for (i = 0; i < n; i++)
    if (i != start) {
      printf("\nDistance from source to %d: %d", i, dis[i]);
    }

}
int main() {
  int Graph[MAX][MAX], i, j, n, u;
  n = 7;

  Graph[0][0] = 0;
  Graph[0][1] = 4;
  Graph[0][2] = 2;
  Graph[0][3] = 0;
  Graph[0][4] = 0;


  Graph[1][0] = 0;
  Graph[1][1] = 0;
  Graph[1][2] = 3;
  Graph[1][3] = 2;
  Graph[1][4] = 3;

  Graph[2][0] = 0;
  Graph[2][1] = 1;
  Graph[2][2] = 0;
  Graph[2][3] = 4;
  Graph[2][4] = 5;

  Graph[3][0] = 0;
  Graph[3][1] = 0;
  Graph[3][2] = 0;
  Graph[3][3] = 0;
  Graph[3][4] = 0;


  Graph[4][0] = 0;
  Graph[4][1] = 0;
  Graph[4][2] = 0;
  Graph[4][3] = -5;
  Graph[4][4] = 0;


  Graph[5][0] = 0;
  Graph[5][1] = 3;
  Graph[5][2] = 0;
  Graph[5][3] = 0;
  Graph[5][4] = 2;



  u = 0;
  Dijkstra(Graph, n, u);

  return 0;
}
