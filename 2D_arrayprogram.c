/*
Name:Mathias kioko 
Reg :CT100/G/26229/25
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room, occupied, vacant;

    srand(time(0));

    // Generate random occupancy (1 = occupied, 0 = vacant)
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2;
        }
    }

    // Display per floor
    for (floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    return 0;
}