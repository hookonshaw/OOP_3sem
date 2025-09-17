#include <iostream>
#include "growingTree.h"

int growingTree(int UpSpeed, int DownSpeed, int desiredHeight){
    int currentHeightTree = 0;
    int day = 0;

    while (currentHeightTree < desiredHeight){
        day += 1;
        currentHeightTree += UpSpeed;
        if (currentHeightTree >= desiredHeight){
            return day;
        }
        currentHeightTree -= DownSpeed;
    }
}