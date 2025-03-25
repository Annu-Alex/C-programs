# include<stdio.h>
#define PI 3.142
#define AREA_OF_CIRCLE(r)(PI*r*r)
#define SURFACE_AREA_CYCLINDER(r,h)(2*PI*r*(r+h))
int main()
{
	float r,h,area,surface_area;
	printf("Enterthe radius of circle and cyclinder");
	scanf("%f",&r);
	printf("Enter the height of cyclinder");
	scanf("%f",&h);
	area=AREA_OF_CIRCLE(r);
	surface_area=SURFACE_AREA_CYCLINDER(r,h);
	printf("The area of circle is %2f",area);
	printf("The surface area ofcyclinder %2f",surface_area);
	return 0;
}	
	
