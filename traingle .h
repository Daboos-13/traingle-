#ifndef TRAINGLE _H
#define TRAINGLE _H
#include <iostream>
#include <string>

class traingle
{
private:
    float length;
    float *lengh;
    float width;
public:
    traingle();
    traingle(float len , float wid );
    void set_lengh(float len[3]);
    float get_ava();

};

#endif // TRAINGLE _H
