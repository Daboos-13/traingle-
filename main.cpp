#include <iostream>
#include "traingle .h"

using namespace std;

int main()
{
        float len,wid,arr[3];
        cout<<"enter the length and the width  of  the triangle "<<endl;
        cin>>len>>wid;
        traingle traingl1(len,wid);
        cout <<"enter the all length \n";
        for (int i=0 ; i<3 ; i++)
        {
            cin >> arr[i];
        }
        traingl1.set_lengh(arr);
        cout <<traingl1.get_ava();
    /*
    int i=0;
    for (int x=0; x<3 ; x++)
    {
        cout<<x<<endl;
        do
        {
            if (i==0)
            {
                cout<<"asd \n";
                break;
            }
            cout<<"add\n";
            i++;
        }
        while (i==4);
    }
    */
}
