#pragma once
#include <stdexcept>
#include <iostream>

namespace data
{
    struct Data
    {
        Data() = default;
        Data(std::string datacopy)
        {

        std::string DD = datacopy.substr(0, 2);
        std::string MM = datacopy.substr(3, 2);
        std::string YY = datacopy.substr(6, 4);
        this->day = atoi(DD.c_str());
        this->month = atoi(MM.c_str());
        this->year = atoi(YY.c_str());
        //Place for your decision
        //...
       
        }

        void foo(int day)
        {
            if (30 < day || day < 0)
            {
                std::trow day;
            }
        }

        std::try
        {
            foo(5);
        }
        std::catch (const int day)
        {
            cout << "Значение day меньше или больше возможного" << endl;
        }



        Data operator = (const Data& rhs)
        {
            day = rhs.day;
            month = rhs.month;
            year = rhs.year;

            return *this;
        }

        int day;
        int month;
        int year;
    };
}