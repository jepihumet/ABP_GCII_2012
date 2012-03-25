#include "View.h"
#include <math.h>

#define PI 3.141592654

View::View()
{
    distancia = 10;
    volume = 0;
    angle_vertical = 35;
    angle_horitzontal = 45;
    axis = false;
    adaptar = false;
    sphere = false;
}

View::~View()
{

}

float View::getEyeX()
{
    return distancia * cos((float)((angle_vertical*PI)/180.0)) * sin((float)((angle_horitzontal*PI)/180.0));
}

float View::getEyeY()
{
    return distancia * sin((float)((angle_vertical*PI)/180.0));
}

float View::getEyeZ()
{
    return distancia * cos((float)((angle_vertical*PI)/180.0)) * cos((float)((angle_horitzontal*PI)/180.0));
}
