//program of 2D array 
/*
Name.Nkonge williamutethia 
Regno.CT101/G/22542/24
*/
#include <stdio.h>
int main() {
    int scores[2][2] = {{{65, 92},{84, 72}}, {{35, 70},{59, 67}}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}