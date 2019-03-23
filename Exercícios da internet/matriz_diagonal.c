#include <stdio.h>
#include <stdlib.h>

int isDiagonalBottomLeft(int line, int column);
int isDiagonalTopLeft(int line, int column);

int isDiagonalBottomRight(int line, int column);
int isDiagonalTopRight(int line, int column);

void main(void){
    int greatestProductOfThreeNumbers = 0;

    int matrix[20][20] = {
        4, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2,
        0, 5, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
        0, 0, 8, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0,
        2, 0, 0, 9, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0,
        0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0,
        0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0,
        0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
        0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0,
        4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    };

    for(int line = 3; line <= 16; line++){
        for(int column = 3; column <= 16; column++){
            
            if(isDiagonalTopLeft(line, column)){
                if((matrix[line][column] * matrix[line - 1][column - 1] * matrix[line - 2][column - 2] * matrix[line - 3][column - 3]) > greatestProductOfThreeNumbers){   // Diagonal Top Left
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line - 1][column - 1] * matrix[line - 2][column - 2] * matrix[line - 3][column - 3];
                }
            }

            if(isDiagonalBottomLeft(line, column)){
                if((matrix[line][column] * matrix[line + 1][column - 1] * matrix[line + 2][column - 2] * matrix[line + 3][column - 3]) > greatestProductOfThreeNumbers){   // Diagonal Bottom Left
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line + 1][column - 1] * matrix[line + 2][column - 2] * matrix[line + 3][column - 3];
                }
            }

            if(isDiagonalBottomRight(line, column)){
                if((matrix[line][column] * matrix[line + 1][column + 1] * matrix[line + 2][column + 2] * matrix[line + 3][column + 3]) > greatestProductOfThreeNumbers){   // Diagonal Bottom Right
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line + 1][column + 1] * matrix[line + 2][column + 2] * matrix[line + 3][column + 3];
                }
            }
           
            if(isDiagonalTopRight(line, column)){
                if((matrix[line][column] * matrix[line - 1][column + 1] * matrix[line - 2][column + 2] * matrix[line - 3][column + 3]) > greatestProductOfThreeNumbers){   // Diagonal Top Right
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line - 1][column + 1] * matrix[line - 2][column + 2] * matrix[line - 3][column + 3];
                }
            }

        }
    }
 
    printf("\n\n Greatest Product of four numbers:\n Matrix[%d][%d] = %d\n\n", line1, column1, greatestProductOfThreeNumbers);

    system("pause");
}

int isDiagonalBottomLeft(int line, int column){
    // Invalid position
    if( line > 16 || column < 3)
        return 0;
    else
        return 1;
}

int isDiagonalTopLeft(int line, int column){
    // Invalid position
    if( line < 3 || column < 3)
        return 0;
    else
        return 1;
}

int isDiagonalBottomRight(int line, int column){
    // Invalid position
    if( line > 16 || column > 16)
        return 0;
    else
        return 1;
}
int isDiagonalTopRight(int line, int column){
    // Invalid position
    if( line - 2 < 0 || column > 16)
        return 0;
    else
        return 1;
}
