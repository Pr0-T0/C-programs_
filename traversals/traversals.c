#include<stdio.h>
#define max 20
int source, G[max][max]={0}, visited[max]={0}, Q[max] = {0};
int Vno, Eno;
int front = -1,rear = -1;

void enqueue(int item){
    if(front == -1 && rear == -1){
        front = rear = 0;
        Q[rear] = item;
    }
    else{
        Q[++rear] = item;
    }
}

int dequeue(){
    if(front == -1 && rear == -1)
        return -1;
    else if(front == rear){
        int item = Q[rear];
        front = rear = -1;
        return item;
    }
    else{
        return Q[front++];
    }
}

void printMatrix(){
    printf("Adjacency Matrix : \n");
    for(int i = 1; i <= Vno; i++){
        for(int j = 1; j <= Vno; j++){
            printf("%d",G[i][j]);
        }
        printf("\n");
    }
}

void BFS(int i){
    visited[i] = 1;
    printf("%d->",i);
    enqueue(i);
    while(front != -1){
        i = dequeue();
        for(int j = 1; j <= Vno; j++){
            if(G[i][j] == 1 && visited[j] == 0){
                printf("%d->",j);
                visited[j] = 1;
                enqueue(j);
            }
        }
    }
}

void DFS(int i){
    visited[i] = 1;
    printf("%d->",i);
    for(int j = 1; j <= Vno; j++){
        if(G[i][j] == 1 && visited[j] == 0)
            DFS(j);
    }
}

int main(){
    int v1,v2;
    printf("Enter the number of vertices of the graph : ");
    scanf("%d",&Vno);

    printf("Enter the number of edges of the graph : ");
    scanf("%d",&Eno);

    printf("Enter the edges in the format (V1 V2) :");
    for(int i = 1; i <= Eno; i++){
            scanf("%d%d",&v1,&v2);
            G[v1][v2] = 1;
            G[v2][v1] = 1;
    }

    printMatrix();

    printf("Enter the source : ");
    scanf("%d",&source);

    DFS(source);
    
    for(int i = 0;i <= Vno; i++)
        visited[i] = 0;

    printf("\n");

    BFS(source);
}
