#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
class DM
{ public:
double meter,centimeter;
};
class DB
{
public:
double feet,inches;
friend void add(DM,DB);
};

void add(DM dm,DB db)
{
double d1,d2;

cout<<"\nEnter the distance in meter and centimeter:";
cin>>dm.meter>>dm.centimeter;
cout<<"\nEnter the distance in feet and inches:";
cin>>db.feet>>db.inches;
d1=dm.meter+(db.feet)/3.281;
d2=dm.centimeter+(db.inches)*2.54;
cout<<"\nMeter + Feet = "<<d1<<" meter";
cout<<"\nCentimeter + inches = "<<d2<<" cemtimeter";
}
int main()
{
;
DM dm;
DB db;
add(dm,db);
return 0;
}