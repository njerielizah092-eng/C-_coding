/*
Name:Elizabeth Njeri 
Reg no:CT101/G/26440/25
Description:3D array in
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define BRANCHES 3
#define FLOORS 5
#define ROOMS 10

int main() {
    int occupancy[BRANCHES][FLOORS][ROOMS];
    int totalOccupied = 0;

    srand(time(NULL)); // For random occupancy

    // Assign random occupancy
    for(int b = 0; b < BRANCHES; b++) {
        for(int i = 0; i < FLOORS; i++) {
            for(int j = 0; j < ROOMS; j++) {
                occupancy[b][i][j] = rand() % 2; // 0 or 1
                totalOccupied += occupancy[b][i][j];
            }
        }
    }

    // Display total occupied rooms
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}