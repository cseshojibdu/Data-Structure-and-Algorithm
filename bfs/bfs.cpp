#include<stdio.h>
#include<queue>
using namespace std;

/*
0 1 0 0 1 0
1 0 1 1 0 0
0 1 0 0 0 1
0 1 0 0 1 0
1 0 0 0 0 1
0 0 1 0 1 0
*/
int main()
{
    int g[100][100],n,i,j,dist[100],visited[10];
    queue<int>q;
    int source;

    printf("Number of Nodes: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
        visited[i]=0;

   // input graph
    printf("Enter Graph adjacency matrix: \n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
        {
            scanf("%d",&g[i][j]);
        }


    printf("enter source: ");
    scanf("%d",&source);
    // bfs start...
    dist[source]=0;
    visited[source]=1;
    q.push(source);
    int u;
    while(!q.empty())
    {
        u = q.front();
        for(j=1;j<=n;j++)
        {
            if(g[u][j]==1 && visited[j]==0)
            {
                visited[j]=1;
                q.push(j);
                dist[j] = dist[u]+1;
            }
        }
        q.pop();
    }
    for(i=1;i<=n;i++)
        printf("\nDistance from %d to %d = %d ",source,i,dist[i]);
    return 0;
}
