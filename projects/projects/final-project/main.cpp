#include <iostream>
#include "mountain.h"
#include <iomanip>
#include <climits>
#include <vector>


using namespace std;

int minElevation(vector<Mountain> mount){
    //int min = INT_MAX; possible error
    double min = mount[0].getElevation();
    for (int i = 0; i < 7; ++i){
        if (mount[i].getElevation() < min){
            min = mount[i].getElevation();
        }
    }
    return min;
}

int main(){

//initializes all mountains

vector<Mountain> mount = {
    Mountain("Chimborazo", "Ecuador", 20549),
    Mountain("Matterhorn", "Switzerland", 14692),
    Mountain("Olympus", "Greece", 9573),
    Mountain("Everest", "Nepal", 29029),
    Mountain("Mount Marcy - Adirondacks", "United States", 5344),
    Mountain("Mount Mitchell - Blue Ridge", "United States", 6684),
    Mountain("Zugspitze", "Switzerland", 9719)
};

//displays information about all mountains 


cout << setw(30) << "Mountain" << setw(20) << " Country " << setw(30) << " Elevation " << endl;

for (int i = 0; i < 7; ++i){
    cout << setw(30) << mount[i].getName() << " " << setw(20) << mount[i].getCountry() << " " << setw(20) << mount[i].getElevation() << " feet " << mount[i].toMeters() << " meters" << endl;
}

//smallest mountain

int min = minElevation(mount);

for (int i = 0; i < 7; ++i){
    if (min == mount[i].getElevation()){
        cout << "The mountain with the minimum elevation is: " << mount[i].getName() << ", with elevation: " << mount[i].getElevation() << endl;
        break;
    }
}


   return 0;
}