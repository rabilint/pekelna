#include <stdio.h>
#include <cstdlib>
//Тут x та у переплутано, чому? Історія не скаже...


int borderSize[50][50];

void borderMake(int = borderSize[50][50]) {
    for (int x = 0; x < 50; x++) {
        for (int y = 0; y < 50; y++) {
            if (x == 0) {
                borderSize[x][y] = *"=";
            }
            else if (y == 0 || y == 49) {
                borderSize[x][y] = *"|";
            }
            else if (x == 49) {
                borderSize[x][y] = *"=";
            }
            else {
                borderSize[x][y] = *"#";
            }

        }
    }
}

void buildPath(int = borderSize[50][50]) {
    int x = 0, y = 0;
    for (int z = 0; z < 50*50; z++) {
        int randNum = rand() % 4;
        switch (randNum) {
            case 0: if (borderSize[x][y+1] = "|" || "="){ //top
            borderSize[x+1][y] = *" ";} else {
                borderSize[x][y+1] = *" ";
            }
            break;

            case 1: if                                          //left
        }

    }
}

int main() {
    borderMake(borderSize[50][50]);
    for (int x = 0; x < 50; x++) {
        for (int y = 0; y < 50; y++) {
            printf("%c", borderSize[x][y]);
            if (y == 49) {
                printf("\n");
            }
        }

    }
    return 0;
}
