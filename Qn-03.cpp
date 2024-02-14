/*define overloaded function to calculate area of a circle , 
area of a rectangle nad area of a triangle*/

#include<iostream>
using namespace std ;

float area (int) ;
int area (int  , int ) ;
float area (int , float ) ;

int main ()
{
    int r ;
    cout<<"Enter a radius of a circle : ";
    cin>>r ;
    cout<<"Radius = "<<r<<" Area of cirle = "<<area(r) <<endl ;

    int l , b ;
    cout<<"Enter length and breadth : " ;
    cin>>l>>b ;
    cout<<"Length = "<<l<<" Breadth = "<<b<<" Area of rectangle = "<<area(l,b)<<endl  ;

    int len ;
    float h ;
    cout<<"Enter length and height : " ;
    cin>>len>>h ;
    cout<<"Length = "<<len<<" Height = "<<h<<" Area of triangle = "<<area(len,h)<<endl  ;

    return 0 ;
}

float area (int R)
{
    return 3.14*R*R ;
}
int area (int L , int B)
{
    return L*B ;
}
float area (int Len , float H)
{
    return 0.5*Len*H ;
}
