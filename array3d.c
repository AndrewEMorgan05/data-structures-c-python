#include <stdio.h>
#include <stdlib.h>

struct Array3D {
    int*** data;
    int d1, d2, d3;
};

void initArray(struct Array3D* arr, int x, int y, int z) {
    arr->d1 = x; arr->d2 = y; arr->d3 = z;
    arr->data = (int***)malloc(x * sizeof(int**));
    for (int i = 0; i < x; i++) {
        arr->data[i] = (int**)malloc(y * sizeof(int*));
        for (int j = 0; j < y; j++) {
            arr->data[i][j] = (int*)malloc(z * sizeof(int));
        }
    }
}

void setValues(struct Array3D* arr) {
    int counter = 1;
    for (int i = 0; i < arr->d1; i++)
        for (int j = 0; j < arr->d2; j++)
            for (int k = 0; k < arr->d3; k++)
                arr->data[i][j][k] = counter++;
}

void displayAll(struct Array3D* arr) {
    for (int i = 0; i < arr->d1; i++) {
        for (int j = 0; j < arr->d2; j++) {
            for (int k = 0; k < arr->d3; k++)
                printf("%d ", arr->data[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
}

void displaySingle(struct Array3D* arr, int x, int y, int z) {
    printf("Item at (%d,%d,%d): %d\n", x, y, z, arr->data[x][y][z]);
}

void updateSingle(struct Array3D* arr, int x, int y, int z, int val) {
    arr->data[x][y][z] = val;
}

void freeArray(struct Array3D* arr) {
    for (int i = 0; i < arr->d1; i++) {
        for (int j = 0; j < arr->d2; j++) free(arr->data[i][j]);
        free(arr->data[i]);
    }
    free(arr->data);
}

int main() {
    struct Array3D myArr;
    initArray(&myArr, 2, 2, 2);
    setValues(&myArr);
    displayAll(&myArr);
    updateSingle(&myArr, 0, 0, 0, 99);
    displaySingle(&myArr, 0, 0, 0);
    freeArray(&myArr);
    return 0;
}