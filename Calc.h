//
//

#ifndef RHYMECALC_CALC_H
#define RHYMECALC_CALC_H

#include <string>

class Calc {
public:
    Calc(int val);//dynamically create and destroy the array using  big 3 that is the commands below
    Calc(const Calc &rhs);//1st, copy constructor,const parameter not change, & says we are taking memory address of rhs
    ~Calc();//2nd destructor
    const Calc &operator=(const Calc &rhs);//3rd copy assignment
   double process(std::string userInput, double prevValue);
    void print();
    std::string* storedExpressions;
    void setStored(size_t newStored);
    size_t getStored();
private:
    size_t stored;
};


#endif //RHYMECALC_CALC_H