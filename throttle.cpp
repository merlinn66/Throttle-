#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

class throttle{
    public:
    //MODIFICATIOON MEMBER FUNCTIONS
    void shut_off();
    void shift(int amount);
    throttle (int value);
    throttle();
    // CONSTANT MEMBER FUNCTIONS 
    double flow() const;
    bool is_on() const;
    bool halfway() const;

    private:
    int top_position;
    int position;
};

int main(){
    throttle control(6);
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

void throttle::shut_off(){
    // precondition: None
    position = 0;
    // postcondition: throlle has been shut off
}

void throttle::shift(int amount){
    // precondition: throttle is in a neutral or 0
    // postcondition: not below 0 or above the top_position
    position += amount;
    if (position < 0)
        position = 0;

    else if (position > top_position)
        position = top_position;
}

double throttle::flow() const{
    // precondition: basically non 
    return position / static_cast <double> (top_position);
    // postcondition: return the fuel flow in decimal 
}

bool throttle::is_on() const{
    if (position == 0)
    return false;

    else 
    return true;
}

throttle::throttle(int value){
    position = 0;
    top_position = value;

}

throttle::throttle(){
    top_position = 1;
    position = 0;
}

bool throttle::halfway() const {

    if (top_position / position == 2)
    return true;

    else 
    return false;
}