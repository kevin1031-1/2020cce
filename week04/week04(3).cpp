#include<stdio.h>
struct data
{
    float x,y,z;
}point1;
struct data point[5];
int main()
{
    for(int i=0;i<5;i++)
    {
        point[i].x= i*10;
        point[i].y=20;
        point[i].z=0;
        printf("%f %f %f\n",point[i].x,point[i].y,point[i].z);
    }
}
