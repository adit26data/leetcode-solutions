#include <bits/stdc++.h>
using namespace std;
bool isSafe(int **graph, int *color, int n, int c, int v)
{
    for (int i = 0; i < n; i++)
    {
        if (graph[v][i] && c == color[i])
            return false;
    }
    return true;
}
bool isColor(int **graph, int *color, int n, int v, int m)
{
    if (v == n)
        return true;
    else
    {
        for (int c = 1; c <= m; c++)
        {
            if (isSafe(graph, color, n, c, v))
            {
                color[v] = c;
                if (isColor(graph, color, n, v + 1, m))
                    return true;
                color[v] = 0;
            }
        }
        return false;
    }
}
int main()
{
    cout << "enter the number of nodes in the graph:" << endl;
    int n;
    cin >> n;
    cout << "enter the adjacency matrix of the graph:" << endl;
    int **graph = (int **)malloc(sizeof(int) * n);
    for (int i = 0; i <= n - 1; i++)
    {
        graph[i] = (int *)malloc(sizeof(int) * n);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> graph[i][j];
        }
    }
    cout << "enter the number of colors:" << endl;
    int m;
    cin >> m;
    int color[n];
    // initialising all the colors by 0
    for (int i = 0; i < n; i++)
        color[n] = 0;
    if (isColor(graph, color, n, 0, m) == false)
        cout << "no solution!" << endl;
    else
    {
        for (int i = 0; i <= n - 1; i++)
            cout << color[i] << " ";
    }
}
