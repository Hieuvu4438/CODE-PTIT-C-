#include <stdio.h>
int main(){
    int N, M, a, b;
    scanf("%d %d", &N, &M);
    int matrix[N][M];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d %d", &a, &b);
    a --;
    b --;
    for(int row = 0; row < N; row++){
        int temp = matrix[row][a];
        matrix[row][a] = matrix[row][b];
        matrix[row][b] = temp;
       
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
