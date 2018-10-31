#include<stdio.h>
typedef struct Points
{
	float x;
	float y;

} point;
point mid (point point1,point point2)
{
	point point3;
	point3.x=(point1.x+point2.x)/2;
	point3.y=(point1.y+point2.y)/2;
	return point3;
	


}
void main()
{
	 point point1,point2,ponit3;
	 printf("Please Enter The Coordinates of first Point\n");
	 scanf("%f%f",&point1.x,&point1.y);
	 printf("Please Enter The Coordinates of Second Point\n");
	 scanf("%f%f",&point2.x,&point2.y);
	 ponit3 = mid(point1,point2);
	printf("The middle of those point is (%f,%f)\n",ponit3.x,ponit3.y);
		


}
