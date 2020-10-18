#ifndef THIRDMESSAGE_H
#define THIRDMESSAGE_H


struct ThirdMessageStruct{
    double amplitude;
    double rauge;
    int idProbe;
    int idD;
    double departureTime;
};

class ThirdMessage
{
public:
    ThirdMessage();
    void setRandomData();

private:
    ThirdMessageStruct thirdMessageStruct = ThirdMessageStruct();
};

#endif // THIRDMESSAGE_H
