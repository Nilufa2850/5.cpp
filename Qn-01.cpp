//Define a c++ function to swap data of two int variables using call by reference

#include<iostream>
using namespace std ;
void swap (int& , int &) ;

int main ()
{
    int x , y ;
    cout<<"Enter two values : " ;
    cin>>x>>y ;
    swap (x,y) ;
    cout<<x<<" "<<y ;
}

void swap (int &m , int &n)
{
    int t ;
    t = m ; 
    m = n ;
    n = t ;
}
