#include <stdio.h>
#include <math.h>

struct punkt
{
    double x,y,z;
};
double odleglosc(struct punkt tab[],int n)
{
    int i =0;
    double odleglosc;
    double min=sqrt(pow((tab[i+1].x-tab[i].x),2)+pow((tab[i+1].y-tab[i].y),2)+pow((tab[i+1].z-tab[i].z),2));
     for(i=0;i<n-1;i++)
     {

         odleglosc=sqrt(pow((tab[i+1].x-tab[i].x),2)+pow((tab[i+1].y-tab[i].y),2)+pow((tab[i+1].z-tab[i].z),2));
         if(odleglosc<min)
         {
            min=odleglosc;
         }

     }
   return min;
}
int main()
{
    struct punkt tab[3] = {{3.4,5.6,2.4},{2.3,8.9,1.01},{3.1,1.1,.2}};
    printf("%.2lf",odleglosc(tab,3));
    return 0;

}
