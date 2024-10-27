#pragma once

#include <iostream>

struct coordinates {
    double x;
    double y;
};

enum OperationStage {
    SCALPEL,
    HEMOSTAT,
    TWEEZERS,
    SUTURE,
    COMPLETE
};

void scalpel(const coordinates& start, const coordinates& end) {
std::cout << "You made a cut between: (" << start.x << ", " << start.y <<  ") and ("
    << end.x << ", " << end.y << ")" << std::endl;
}

void hemostat(const coordinates& point){
    std::cout << "Hemostat appiled at: (" << point.x << ", " << point.y << ")" << std::endl;
}

void tweezers(const coordinates& point) {
    std::cout << "Tweezers appiled at: (" << point.x << ", " << point.y << ")" << std::endl;
}

void suture(const coordinates& start, const coordinates& end) {
std::cout << "You made a suture between: (" << start.x << ", " << start.y <<  ") and ("
    << end.x << ", " << end.y << ")" << std::endl;
}

bool areCoordinatesEqual(const coordinates& a, const coordinates& b) {
    return (a.x == b.x && a.y == b.y);
}