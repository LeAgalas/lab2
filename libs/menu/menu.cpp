#include <iostream>
#include "menu.h"


using namespace std;
using namespace Lab2;
void print_menu() {
    cout << "======Console for Folium Of Descartes=======\n"
            "Formula: x^3 + y^3 == nxy\n"
            "Default n is 1\n"
            "=============================================\n"
            "1. Set parameter\n"
            "2. Get parameter\n"
            "3. Get square size\n"
            "4. Get distance in polar coords\n"
            "5. Get radius of curvature in the vertex\n"
            "6. Get radius of curvature in the knot\n"
            "7. Get area of the loop\n"
            "8. Get largest diameter\n"
            "9. Exit \n"
            "Your choice ---> ";
}

void get_int(int *a) {

    cin >> *a;
    while (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "You have entered wrong input. Try again: ";
        cin >> *a;
    }
}

void print_result(int choice, FoliumOfDescartes* folium){
    switch (choice){
        case 1:
            double param;
            cout << "Enter new parameter ---> ";
            cin >> param;
            folium->SetParameter(param);
            cout << "New parameter set" << endl << endl;
            break;
        case 2:
            cout << "Your folium is: x^3 + y^3 = " << folium->GetParameter() << "xy" << endl << endl;
            break;
        case 3:
            cout << "Your square side is:" << folium->FindSquareSide() << endl << endl;
            break;
        case 4:
            double angle;
            cout << "Enter angle ---> ";
            cin >> angle;
            cout << "Your distance in polar coords is:" << folium->FindDistanceInPolarCoords(angle) << endl << endl;
            break;
        case 5:
            cout << "Your radius of curvature at vertex is:" << folium->FindRadiusOfCurvatureAtVertex() << endl << endl;
            break;
        case 6:
            cout << "Your radius of curvature at vertex is:" << folium->FindRadiusOfCurvatureAtKnot() << endl << endl;
            break;
        case 7:
            cout << "Your loop area is:" << folium->FindLoopArea() << endl << endl;
            break;
        case 8:
            cout << "Your largest diameter is:" << folium->FindLargestDiameter() << endl << endl;
            break;
        case 9:
            break;
        default:
            cout << "No such option. Try again!" << endl << endl;
    }
}
