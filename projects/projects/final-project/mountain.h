#include<iostream>

using namespace std;

class Mountain{
    private:
        string name;
        string country;
        int elevation;

    public:
        Mountain(string name, string country, int elevation){
            this -> name = name;
            this -> country = country;
            this -> elevation = elevation;
        }

        string getName(){
            return this -> name;
        }

        string getCountry(){
            return this -> country;
        }

        int getElevation(){
            return this -> elevation;
        }

        double toMeters(){
            return this -> elevation/3.2808;
        }
};