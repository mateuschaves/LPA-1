#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 
#include <time.h>   

#define RED "\x1b[31m"
#define COLOR_RESET "\x1b[0m"

int isDiagonalTopRight_ToBottomLeft_Ok(int line, int column);
int isDiagonalTopLeft_ToBottomRight_Ok(int line, int column);

int isHorizontalOk(int column);
int isVerticalOk(int line);

typedef struct T_positions{
    int line;
    int column;
}T_positions;

void main(void){
    int greatestProductOfFourNumbers = 0;
    const int RANGE = 10;
    srand( (unsigned)time(NULL) ); 
    T_positions pos[4];

    system("cls");

    int matrix[20][20];

    // Uncomment this if you want to put into the array numbers manually

    /*
    int matrix[20][20] = {
        4, 0, 2, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
        0, 5, 0, 5, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
        0, 0, 8, 0, 4, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0,
        2, 0, 0, 9, 0, 1, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0,
        0, 8, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
        0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 1,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 8, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 9, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        6, 5, 1, 2, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };
    */

    // Create a 20x20 array with random numbers
    for(int x = 0; x <= 19; x++){
        for(int y = 0; y <= 19; y++){
            matrix[x][y] = rand() % RANGE;
        }
    }

    for(int line = 0; line <= 19; line++){
        for(int column = 0; column <= 19; column++){

            if(isDiagonalTopRight_ToBottomLeft_Ok(line, column)){
                if((matrix[line][column] * matrix[line + 1][column - 1] * matrix[line + 2][column - 2] * matrix[line + 3][column - 3]) > greatestProductOfFourNumbers){
                    greatestProductOfFourNumbers = matrix[line][column] * matrix[line + 1][column - 1] * matrix[line + 2][column - 2] * matrix[line + 3][column - 3];

                    pos[0].line = line;
                    pos[0].column = column;

                    pos[1].line = line + 1;
                    pos[1].column = column - 1;
                    
                    pos[2].line = line + 2;
                    pos[2].column = column - 2;
                    
                    pos[3].line = line + 3;
                    pos[3].column = column - 3;
                                        
                }
            }

            if(isDiagonalTopLeft_ToBottomRight_Ok(line, column)){
                if((matrix[line][column] * matrix[line + 1][column + 1] * matrix[line + 2][column + 2] * matrix[line + 3][column + 3]) > greatestProductOfFourNumbers){
                    greatestProductOfFourNumbers = matrix[line][column] * matrix[line + 1][column + 1] * matrix[line + 2][column + 2] * matrix[line + 3][column + 3];
                    
                    pos[0].line = line;
                    pos[0].column = column;

                    pos[1].line = line + 1;
                    pos[1].column = column + 1;
                    
                    pos[2].line = line + 2;
                    pos[2].column = column + 2;
                    
                    pos[3].line = line + 3;
                    pos[3].column = column + 3;
                }
            }

            if(isHorizontalOk(column)){
                if((matrix[line][column] * matrix[line][column + 1] * matrix[line][column + 2] * matrix[line][column + 3]) > greatestProductOfFourNumbers){
                    greatestProductOfFourNumbers = matrix[line][column] * matrix[line][column + 1] * matrix[line][column + 2] * matrix[line][column + 3];

                    pos[0].line = line;
                    pos[0].column = column;

                    pos[1].line = line;
                    pos[1].column = column + 1;
                    
                    pos[2].line = line;
                    pos[2].column = column + 2;
                    
                    pos[3].line = line;
                    pos[3].column = column + 3;
                }
            }
            if(isVerticalOk(line)){
                if((matrix[line][column] * matrix[line + 1][column] * matrix[line + 2][column] * matrix[line + 3][column]) > greatestProductOfFourNumbers){
                    greatestProductOfFourNumbers = matrix[line][column] * matrix[line + 1][column] * matrix[line + 2][column] * matrix[line + 3][column];

                    pos[0].line = line;
                    pos[0].column = column;

                    pos[1].line = line + 1;
                    pos[1].column = column;
                    
                    pos[2].line = line + 2;
                    pos[2].column = column;
                    
                    pos[3].line = line + 3;
                    pos[3].column = column;
                }
            }

        }
    }
    

    // Output

    printf("\n\n");

    for(int x = 0; x <= 19; x++){
        for(int y = 0; y <= 19; y++){
            if((x == pos[0].line && y == pos[0].column) || (x == pos[1].line && y == pos[1].column) || (x == pos[2].line &&  y == pos[2].column) || (x == pos[3].line  && y == pos[3].column)){
                printf(RED " %d, " COLOR_RESET, matrix[x][y]);
            }else{
                printf(" %d, ", matrix[x][y]);
            }
        }
        printf("\n");
    }

    printf("\n\n Greatest Product of four numbers: ");
    printf(" %d * %d * %d * %d = %d\n\n\n", matrix[pos[0].line][pos[0].column],  matrix[pos[1].line][pos[1].column], matrix[pos[2].line][pos[2].column], matrix[pos[3].line][pos[3].column], greatestProductOfFourNumbers);

    system("pause");
}

int isDiagonalTopRight_ToBottomLeft_Ok(int line, int column){
    // Invalid position
    if( line > 16 || column < 3)
        return false;
    else
        return true;
}

int isDiagonalTopLeft_ToBottomRight_Ok(int line, int column){
    // Invalid position
    if( line > 16 || column > 16)
        return false;
    else
        return true;
}

int isHorizontalOk(int column){
    if(column > 16){
        return false;
    }else{
        return true;
    }
}

int isVerticalOk(int line){
    if(line > 16){
        return false;
    }else{
        return true;
    }
}