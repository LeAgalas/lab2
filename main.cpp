#include <iostream>
#include "libs/folium/FoliumOfDescartes.h"
#include "libs/menu/menu.h"


using namespace std;
using namespace Lab2;
int main() {
    int choice;
    FoliumOfDescartes folium;
    do {
        print_menu();
        get_int(&choice);
        cout << endl;
        print_result(choice, &folium);
    } while (choice != 9);
    cout << "Exited by user" << endl;
}