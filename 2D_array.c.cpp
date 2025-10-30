/*
Name:Elizabeth Njeri 
Reg no:CT101/G/26440/25
Description:2D array 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FLOORS 5
#define ROOMS 10

int main() {
    int occupancy[FLOORS][ROOMS];
    int occupied, vacant;

    srand(time(NULL)); // For random occupancy

    // Input random occupancy data
    for(int i = 0; i < FLOORS; i++) {
        for(int j = 0; j < ROOMS; j++) {
            occupancy[i][j] = rand() % 2; // 0 or 1
        }
    }

    // Display occupancy per floor
    for(int i = 0; i < FLOORS; i++) {
        occupied = 0; vacant = 0;
        for(int j = 0; j < ROOMS; j++) {
            if(occupancy[i][j] == 1) occupied++;
            else vacant++;
        }
        printf("Floor %d: Occupied: %d, Vacant: %d\n", i+1, occupied, vacant);
    }

    return 0;
}