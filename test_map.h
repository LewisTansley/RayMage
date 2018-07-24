//
// Created by awilliams on 7/24/18.
// Copied directly from https://github.com/AWilliams17/MapThing/blob/master/MapThing/MapThing/Main.cpp

#ifndef RAYMAGE_TEST_MAP_H
#define RAYMAGE_TEST_MAP_H

#endif //RAYMAGE_TEST_MAP_H

#define MAPX 15
#define MAPY 15

//Yes, this is bad practice, but I don't want it in main.cpp
int testMapGrid[MAPX][MAPY] = { //Where 1 == Wall, 0 == Walkable space, 2 == Floor and Ceiling is Red, 3 == Blue
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 3, 1},
        {1, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 2, 1},
        {1, 2, 1, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 3, 1},
        {1, 3, 1, 1, 2, 3, 2, 3, 2, 1, 1, 1, 2, 2, 1},
        {1, 2, 1, 1, 3, 2, 3, 2, 3, 2, 3, 2, 3, 3, 1},
        {1, 3, 1, 1, 2, 3, 2, 3, 2, 3, 2, 3, 2, 2, 1},
        {1, 2, 1, 1, 3, 2, 3, 2, 3, 2, 3, 2, 3, 3, 1},
        {1, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 2, 1},
        {1, 2, 3, 2, 3, 2, 1, 1, 1, 2, 3, 2, 3, 3, 1},
        {1, 3, 2, 3, 2, 3, 1, 1, 1, 3, 2, 3, 2, 2, 1},
        {1, 2, 3, 2, 3, 2, 1, 1, 1, 2, 3, 2, 3, 3, 1},
        {1, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 2, 1},
        {1, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 2, 3, 3, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};