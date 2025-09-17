#include <iostream>
#include "growingTree.h"
// рассмотрим на примере 100 10 910
int growingTree(int UpSpeed, int DownSpeed, int desiredHeight){
    int currentHeightTree = 0; //текущее значение роста дерева
    int day = 0; // день, который будет ответом

    while (currentHeightTree < desiredHeight){ // если текущее значение меньше нужного, 
    //прибавляем ко дню единицу и увеличиваем на UpSpeed, если в какой-то момент текущее значение 
    // больше или равно, то выводим этот самый день, если же нет, то мы отнимаем DownSpeed
    // если же currentHeightTree >= desiredHeight, то выходим из цикла и выводим нужный день
        day += 1;
        currentHeightTree += UpSpeed;
        if (currentHeightTree >= desiredHeight){
            return day;
        }
        currentHeightTree -= DownSpeed;
    }
}