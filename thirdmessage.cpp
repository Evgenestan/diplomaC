#include "thirdmessage.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

ThirdMessage::ThirdMessage()
{

}

void ThirdMessage::setRandomData()
{
    thirdMessageStruct.amplitude = rand();
    thirdMessageStruct.departureTime = rand();
    time_t t = time(NULL);
    tm tlm;
    localtime_s(&tlm, &t);
    std::cout << tlm.tm_hour << tlm.tm_min;

}
