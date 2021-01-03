//
// Created by Jeethesh on 03-01-2021.
//
#include<iostream>
#include <stdexcept>

#include "Vec3.h"
#include "Line.h"

int main()
{

    {
        std::cout << "Test 1:" << std::endl;

        Line a(Vec3(0, 0, 0), Vec3(1, 0, 0));

        Line b(Vec3(0, 0, 1), Vec3(0, 1, 0));

        Vec3 pointOnA;
        Vec3 pointOnB;

        try
        {
            std::cout << "The distance is " << getDistance(a, b, pointOnA, pointOnB) << std::endl;

            std::cout << "Point on a = " << pointOnA.print() << std::endl;
            std::cout << "Point on b = " << pointOnB.print() << std::endl;
        }
        catch (std::runtime_error &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << std::endl;
    }



    {
        std::cout << "Test 2:" << std::endl;

        Line c(Vec3(0, 0, 0), Vec3(1, 0, 0));

        Line d(Vec3(0, 0, 1), Vec3(1, 0, 1));


        Vec3 pointOnC;
        Vec3 pointOnD;

        try
        {
            std::cout << "The distance is " << getDistance(c, d, pointOnC, pointOnD) << std::endl;

            std::cout << "Point on c = " << pointOnC.print() << std::endl;
            std::cout << "Point on d = " << pointOnD.print() << std::endl;
        }
        catch (std::runtime_error &e)
        {
            std::cout << e.what() << std::endl;
        }

        std::cout << std::endl;
    }

    return 0;
}