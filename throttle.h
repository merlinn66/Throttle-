// file: throttle.h
// Constructor for the throttle class:
// throttle();
// postcondition: the throttle has one position above the shut off position, and it is currently shut off

// throttle(int size);
//  precondition: size > 0
// postcondition: throttle is "size" amount above the shut off position and is currently shut off  

// Modification member functions:
// void shut_off(); 
// postcondition: throttle is shutoff
// void shift(int amount);
// precondition: amount > 0 or not who cares apparently
// postcondition: the position of the throttle has been moved by the "amount" but not below 0 or above the top_position

// Constant Class members
// double flow() const;
// postcondition: return the flow in decimal, must not return value below 0 or above 1
// bool is_on() const;
// postcondition: return true if position of the throttle is greater than 0, else return false if posisiton is below(which it shouldn't be) or equal 0

#ifndef MAIN_SAVITCH_THROTTLE
#define MAIN_SAVITCH_THROTTLE

namespace main_Savitch_2A
{
    class throttle{
    public:
    //MODIFICATIOON MEMBER FUNCTIONS
    void shut_off();
    void shift(int amount);
    //CLASS CONSTRUCTORS
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
}

#endif
