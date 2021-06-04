#include "traingle .h"
#include <iostream>
#include <string>
using namespace std;
traingle::traingle ()
{
    cout << "The Default Constructor Pitch \n";
}
traingle::traingle(float len,float wid):length(len),width(wid)
{

}
void traingle::  set_lengh(float *len)
{
    lengh = len;
}
float traingle::get_ava()
{
    float sum=0;
    for (int i=0 ; i<3 ; i++)
    {
           sum += lengh[i];
    }
    float average = sum/3;
    cout <<"The Sum Of Length : ";
    return average;
}

//traingle ::~traingle ()
//{
    //dtor
//}

