#include "FoliumOfDescartes.h"
#include <cmath>


namespace Lab2 {

    double FoliumOfDescartes::GetParameter() {
        return n_;
    }

    void FoliumOfDescartes::SetParameter(double n) {
        n_ = n;
    }

    double FoliumOfDescartes::FindSquareSide() {
        return  n_ / sqrt(2);
    }

    double FoliumOfDescartes::FindDistanceInPolarCoords(double angle) {
        double c = cos(angle), s = sin(angle);
        return n_ * c * s / (pow(c, 3) + pow(s, 3));
    }

    double FoliumOfDescartes::FindRadiusOfCurvatureAtVertex() {
        double radius, coord,  second;
        coord = n_ / sqrt(2);
        second = 2 * pow(n_, 3) / coord /  pow((3*coord - n_), 3);
        radius = pow(2, 3/2) / fabs(second);
        return radius;
    }

    double FoliumOfDescartes::FindRadiusOfCurvatureAtKnot() {
        return sqrt(2);
    }

    double FoliumOfDescartes::FindLoopArea() {
        return n_ * n_ / 6;
    }

    double FoliumOfDescartes::FindLargestDiameter() {
        return 2 * n_/ pow(3, 3/4);
    }

}