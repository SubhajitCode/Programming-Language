#include<stdio.h>
#include<math.h>
typedef struct Vector
{
    float x,y,z;
} vector;
typedef struct Points
{
	float x;
	float y;
    float z;

} point;
float vector_dot(vector vector1,vector vector2)
{
    float result;
    result=vector1.x*vector2.x+vector1.y*vector2.y+vector1.z*vector2.z;
    return result;

}
float magnitude(vector vector1)
{
    return(sqrt(vector1.x*vector1.x+vector1.y*vector1.y+vector1.z*vector1.z));
}
vector vector_cross(vector vector1,vector vector2)
{
    vector vector3;
    vector3.x=vector1.y*vector2.z-vector1.z*vector2.y;
    vector3.y=vector1.z*vector2.x-vector1.x*vector2.z;
    vector3.z=vector1.x*vector2.y-vector1.y*vector2.x;
    return vector3;
    
}
vector scaler_mul(vector vector1,float m)
{
    vector vector3;
    vector3.x=vector1.x*m;
    vector3.y=vector1.y*m;
    vector3.z=vector1.z*m;
    return vector3;
    
}
vector unitvector(vector vector1)
{
    vector vector3;
    vector3=scaler_mul(vector1,1/(magnitude(vector1)));
    return vector3;

}
vector direction(point point1,point point2)
{
    vector vector3={(point1.x-point2.x),(point1.y-point2.y),(point1.z-point2.z)};
    return vector3;
}
void print_vector(vector vector3)
{
    printf(" %fi+%fj+%fk\n",vector3.x,vector3.y,vector3.z);

}
float area(point point1,point point2,point point3)
{
    vector vector1,vector2;
    vector1=direction(point1,point2);
    vector2=direction(point1,point3);
    return(.5*magnitude(vector_cross(vector1,vector2)));
}
void main()
{
    vector vector1={4,3,12},vector2={4,5,6},vector3,vector4;
    point point1={3,4,5},point2={6,2,3},point3={7,3,6};
    printf("Dot Product of vector1 and vector2 is %f\n",vector_dot(vector1,vector2));
    vector3=vector_cross(vector1,vector2);
    printf("Cross Product of vector1 and vector2 is %fi+%fj+%fk\n",vector3.x,vector3.y,vector3.z);
    printf("magnitude of vector1 is %f\n",magnitude(vector1));
    vector3=scaler_mul(vector1,.5);
    printf("Scaler multiplation of vector1 and %f is %fi+%fj+%fk\n",.5,vector3.x,vector3.y,vector3.z);
    vector3=unitvector(vector1);
    printf("Unit of vector1 is %fi+%fj+%fk\n",vector3.x,vector3.y,vector3.z);
    vector3=direction(point1,point2);
    printf("Direction of the line made by poin1,point2 is");
    print_vector(vector3);
    printf("Area bound by point1,point2,point3 is %f\n",area(point1,point2,point3));

}