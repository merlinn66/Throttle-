#include <iostream>
#include <cstdlib>
#include <cmath>
#include "throttle.h"

using namespace std;

using namespace main_Savitch_2A;

const int DEMO_SIZE = 5;

int main(){
    throttle control(DEMO_SIZE);
    throttle jet;
    int user_input;

    cout << "I have a throttle with 6 positions." << endl;
    cout << "Where would you like to set the throttle? " << endl;
    cout << "Enter a number of throttle position: ";
    cin >> user_input;

    control.shut_off();
    control.shift(user_input);

    while (control.is_on()){
    cout << "The flow is on " << control.flow() << endl;
    control.shift(-1);

    if (control.halfway())
    cout << "The throttle is half way open" << endl;
    }
    
    cout << "The flow is now off." << endl;
    

   return EXIT_SUCCESS;
}

