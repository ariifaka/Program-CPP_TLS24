#include <iostream>
using namespace std;

int main()
{
    double aurel; //aurel = mass
    double nana; //nana = acceleration
    double nanin; //nanin = force
    char rheva; //rheva = decision1
    double yuni; //yuni = displacement
    double raya; //raya = work
    char fasha; //fasha = decision2

//intro
    cout << "this program is used to calculate the force and work applied on an object" << endl;

beginning:

//mass
    cout << "enter the mass of the object (kg)" << endl;
    cin >> aurel;

//acceleration
    cout << "enter the acceleration of the object (m/s^2)" << endl;
    cin >> nana;

//force
    cout << "total force applied on the object (N)" << endl;
    nanin = aurel * nana;
    cout << nanin << "N" << endl;

//calculating the work    
    cout << "do you want to calculate the work done on the object? (y/n)" << endl;
    cin >> rheva;

//if not
    if (rheva == 'n' || rheva == 'N') {
        cout << "thank you for using this program. have a great day!" << endl;
        
    return 0;
    }

//if yes
    else {
        cout << "let's move to the next part!" << endl;
    }

//displacement
    cout << "enter the displacement of the object (m)" << endl;
    cin >> yuni;

//work
    cout << "total work applied on the object" << endl;
    raya = nanin * yuni;
    cout << raya << "J" << endl;

//moving back
    cout << "thank you for using this program! do you want to continue the program? (y/n)" << endl;
    cin >> fasha;
    
//continuing the program
    if (fasha == 'y' || fasha == 'Y') {
    goto beginning;
    }
    
    return 0;
}