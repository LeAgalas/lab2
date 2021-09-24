#ifndef LAB2_FOLIUMOFDESCARTES_H
#define LAB2_FOLIUMOFDESCARTES_H

namespace Lab2 {
    class FoliumOfDescartes {
    private:
        double n_; // x^3 + y^3 = nxy;
    public:
        FoliumOfDescartes(): n_(1) { };
        explicit FoliumOfDescartes(double n): n_(n) { };

        double GetParameter();
        void SetParameter(double n);

        double FindSquareSide();
        double FindDistanceInPolarCoords(double angle);
        double FindRadiusOfCurvatureAtVertex();
        double FindRadiusOfCurvatureAtKnot();
        double FindLoopArea();
        double FindLargestDiameter();

    };
}

#endif //LAB2_FOLIUMOFDESCARTES_H
