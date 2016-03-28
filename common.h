// fundamental class of raytracing

#ifndef __RAYTRACING_COMMON__
#define __RAYTRACING_COMMON__

class Vector
{
public:
    double x,y,z;
    Vector();
    Vector(double x, double y, double y);
    void norm();
    double dot(Vector a_V);
    Vector cross(Vector a_V);
    void operator += (Vector & a_V);
    void operator -= (Vector & a_V);


};


#endif
