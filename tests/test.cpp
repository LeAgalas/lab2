#include "gtest/gtest.h"
#include "../libs/folium/FoliumOfDescartes.h"
#include <cmath>

using namespace Lab2;
TEST(Initialization, Initialization) {
    double error = 0.000001;
    FoliumOfDescartes fol;
    EXPECT_NEAR(fol.GetParameter(), 1, error);

    FoliumOfDescartes fol2(3.4);
    EXPECT_NEAR(fol2.GetParameter(), 3.4, error);

    FoliumOfDescartes fol3(-17.2);
    EXPECT_NEAR(fol3.GetParameter(), -17.2, error);
}

TEST(Setting, Set) {
    double error = 0.000001;
    FoliumOfDescartes fol;
    fol.SetParameter(4);
    EXPECT_NEAR(fol.GetParameter(), 4, error);

    FoliumOfDescartes fol2(3.4);
    fol2.SetParameter(0);
    EXPECT_NEAR(fol2.GetParameter(), 0, error);

    FoliumOfDescartes fol3(-17.2);
    fol3.SetParameter(-141);
    EXPECT_NEAR(fol3.GetParameter(), -141, error);
}

TEST(Functions, calculate){
    double error = 0.000001;
    FoliumOfDescartes fol(4);
    EXPECT_NEAR(fol.FindSquareSide(), 4/sqrt(2), error);

    FoliumOfDescartes fol2(3.4);
    EXPECT_NEAR(fol2.FindRadiusOfCurvatureAtKnot(), sqrt(2), error);

    FoliumOfDescartes fol3(-17.2);
    EXPECT_NEAR(fol3.FindLargestDiameter(), 2 * (-17.2)/ pow(3, 3/4), error);
}



int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}