#include "raylib.h"
#include <stdlib.h>
#include <time.h>

#define TAM_JANELA 600
#define TAM_QUADRADO 20
#define MAT 30
#define NUM_INIMIGOS 20

int main() {
    int x = 280, y = 280, mat[MAT][MAT] = {0};

    srand(time(NULL));

    // Criacao de inimigos, de maneira aleatoria
    int inimigosCriados = 0;
    while(inimigosCriados < NUM_INIMIGOS){
        int linha = rand() % MAT;
        int coluna = rand() % MAT;

        if(mat[linha][coluna] == 0 && (linha != y / TAM_QUADRADO || coluna != x / TAM_QUADRADO)){
            mat[linha][coluna] = 1;
            inimigosCriados++;
        }
    }

    // Config da janela
    InitWindow(TAM_JANELA, TAM_JANELA, "Quadrado");
    SetTargetFPS(60);

    while(!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        // Desenha tanto o quadrado verde, quanto os vermelhos
        DrawRectangle(x, y, TAM_QUADRADO, TAM_QUADRADO, GREEN);
        for(int i = 0; i < MAT; i++){
            for(int j = 0; j < MAT; j++){
                if(mat[i][j] == 1){
                    DrawRectangle(j * TAM_QUADRADO, i * TAM_QUADRADO, TAM_QUADRADO, TAM_QUADRADO, RED);
                }
            }
        }
        EndDrawing();

        // Movimentacao do quadrado verde
            if(IsKeyPressed(KEY_UP)){
                y -= TAM_QUADRADO;
            }

            if(IsKeyPressed(KEY_DOWN)){
                y += TAM_QUADRADO;
            }

            if(IsKeyPressed(KEY_LEFT)){
                x -= TAM_QUADRADO;
            }

            if(IsKeyPressed(KEY_RIGHT)){
                x += TAM_QUADRADO;
            }

            // Verifica se ocorre colisao do bloco verde com inimigo
            int colidiu = 0;
            for(int i = 0; i < MAT && !colidiu; i++){
                for(int j = 0; j < MAT; j++){
                    if(mat[i][j] == 1 &&
                       x == j * TAM_QUADRADO &&
                       y == i * TAM_QUADRADO){
                        colidiu = 1;
                        break;
                    }
                }
            }

            // Se a colisao acontecer, fecha o programa
            if(colidiu){
                break;
            }

            // Se sair da janela, fecha o programa
            if(x < 0 || y < 0 || x + TAM_QUADRADO > TAM_JANELA || y + TAM_QUADRADO > TAM_JANELA){
                break;
            }
    }

    CloseWindow();

    return 0;
}