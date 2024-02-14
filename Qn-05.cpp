/*WAF using function overloading to add two nos, having diff data type*/

#include<iostream>
using namespace std ;

int add (int, int) ;
float add (float, float) ;

int main ()
{
    int x , y ;
    float a , b ;

    cout<<"Enter two integer nos : " ;
    cin>>x>>y ;
    cout<<"add is "<<add(x , y)<<endl ;

    cout<<endl<<"Enter two real nos : " ;
    cin>>a>>b ;
    cout<<"add is "<<add(a , b)<<endl ;

    return 0 ;
}

int add (int m , int n)
{
    return m+n ;
}
float add (float m , float n)
{
    return m+n ;
}
