//Define a c++ function to add 2 or 3 numbers using default argu

#include<iostream>
using namespace std ;

int add(int , int , int=0) ;
int main ()
{
    int x , y , z ;

    cout<<"Enter two numbers for addition : ";
    cin>>x>>y ;
    cout<<x<<"+"<<y<<"="<<add(x,y) ;

    cout<<endl<<"Enter three numbers for addition : ";
    cin>>x>>y>>z ;
    cout<<x<<"+"<<y<<"+"<<z<<"="<<add(x,y,z) ;
}

int add (int x, int y , int z)
{
    return x+y+z ;
}
