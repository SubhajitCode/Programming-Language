#include<stdio.h>
typedef struct Points
{
	float x;
	float y;

} point;
typedef struct Lines
{
	float a;
	float b;
    float c;

} line;
line constuct(point point1,point point2)
{
    float m=(point1.y-point2.y)/(point1.x-point2.x);
    line line1;
    line1.a=m;
    line1.c=point1.y-(m*point1.x);
    line1.b=-1;
    return line1;

}
point intersect(line line1,line line2)
{
    point point3;
    float de=(line2.a*line1.b-line1.a*line2.b);
    point3.y=(-1)*(line2.a*line1.c-line1.a*line2.c)/de;
    point3.x=(line2.b*line1.c-line1.b*line2.c)/de;
    return point3;

}
void print_line(line line1)
{

    printf("(%2f)x+(%2f)y+(%2f)=0\n",line1.a,(line1.b),(line1.c));
}
void print_point(point point1)
{
    printf("(%f,%f)\n",point1.x,point1.y);
}
void main()
{
    printf("Enter 4 Points :\n");
    point point1={2,3},point2={4,7},point3;
    scanf("%f%f%f%f%f%f%f%f",&point1.x,&point1.y,&point2.x,&point2.y,&point3.x,&point3.y,&point4.x,&point4.y);
    line line1={2,3,-26},line2={4,7,-54},line3;
    line3=constuct(point1,point2);
    print_line(line3);
    point3= intersect(line1,line2);
    print_point(point3);


}