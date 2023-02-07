//
// Created by michal on 02.01.2023.
//
#include "math.h"
#include "Tradycjny.h"

float Tradycjny::odleglosc(float x_sklepu, float y_sklepu) {
    return sqrt(pow((x-x_sklepu), 2) + pow((y-y_sklepu), 2));
}
