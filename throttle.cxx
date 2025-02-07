// FILE: throttle.cxx
// go to throttle.h for class documentation


#include <cassert>
#include "throttle.h"

namespace main_Savitch_2A 
{
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
    return position / static_cast <double> (top_position);
    // postcondition: return the fuel flow in decimal 
}

bool throttle::is_on() const{
    // postcondition: return true if position of the throttle is greater than 0, else return false if posisiton is below(which it shouldn't be) or equal 0
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
}

