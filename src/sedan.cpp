#include "sedan.hpp"
#include <array>

static const std::array<double, 7> gear_ratios = {-1, 1, 2, 3, 4, 5, 6};

Sedan::Sedan() : current_gear(0)
{
}

void Sedan::shift_up()
{
    //Skift op hvis gear hvis den ikke er 6
    if (current_gear == -1)
    current_gear = current_gear + 2;
    else if (current_gear != 6)
    current_gear ++;
}

void Sedan::shift_down()
{
    //skifter gear ned hvis den ikke er -1
    if (current_gear == 1)
    current_gear = current_gear - 2;
    else if (current_gear != -1)
    {
        current_gear --;
    }
}

double Sedan::get_torque(double engine_rpm, double throttle)
{
    //Fuld pedal, fuck poli
    return throttle * 1400;
}

double Sedan::get_weight()
{
    //Vi har taget bagsæderne ud for optimering.
    return 1500;
}

double Sedan::get_wheel_radius()
{
    //hjul
    return 0.3;
}

double Sedan::get_current_gear_ratio()
{
    //Bruger gear_rations array
    return gear_ratios[current_gear];
}