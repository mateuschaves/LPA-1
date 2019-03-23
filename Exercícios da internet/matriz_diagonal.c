#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int isDiagonalTopRight_ToBottomLeft_Ok(int line, int column);
int isDiagonalTopLeft_ToBottomRight_Ok(int line, int column);

int isHorizontalOk(int column);
int isVerticalOk(int line);

void main(void){
    int greatestProductOfThreeNumbers = 0;

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

    for(int line = 0; line <= 19; line++){
        for(int column = 0; column <= 19; column++){

            if(isDiagonalTopRight_ToBottomLeft_Ok(line, column)){
                if((matrix[line][column] * matrix[line + 1][column - 1] * matrix[line + 2][column - 2] * matrix[line + 3][column - 3]) > greatestProductOfThreeNumbers){   // Diagonal Top Right to Bottom Left
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line + 1][column - 1] * matrix[line + 2][column - 2] * matrix[line + 3][column - 3];
                }
            }

            if(isDiagonalTopLeft_ToBottomRight_Ok(line, column)){
                if((matrix[line][column] * matrix[line + 1][column + 1] * matrix[line + 2][column + 2] * matrix[line + 3][column + 3]) > greatestProductOfThreeNumbers){   //  Diagonal Top Left to top Right
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line + 1][column + 1] * matrix[line + 2][column + 2] * matrix[line + 3][column + 3];
                }
            }

            if(isHorizontalOk(column)){
                if((matrix[line][column] * matrix[line][column + 1] * matrix[line][column + 2] * matrix[line][column + 3]) > greatestProductOfThreeNumbers){               // Horizontal
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line][column + 1] * matrix[line][column + 2] * matrix[line][column + 3];
                }
            }
            if(isVerticalOk(line)){
                if((matrix[line][column] * matrix[line + 1][column] * matrix[line + 2][column] * matrix[line + 3][column]) > greatestProductOfThreeNumbers){               // Vertical
                    greatestProductOfThreeNumbers = matrix[line][column] * matrix[line + 1][column] * matrix[line + 2][column] * matrix[line + 3][column];
                }
            }

        }
    }
 
    printf("\n\n Greatest Product of four numbers = %d\n\n", greatestProductOfThreeNumbers);

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