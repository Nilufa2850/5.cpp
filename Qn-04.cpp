/*WAF using function overloading to find max of the nos, and both the nos can be integer or real*/

#include<iostream>
using namespace std ;

int max (int, int) ;
float max (float, float) ;

int main ()
{
    int x , y ;
    float a , b ;

    cout<<"Enter two integer nos : " ;
    cin>>x>>y ;
    cout<<"Max is "<<max(x , y)<<endl ;

    cout<<endl<<"Enter two real nos : " ;
    cin>>a>>b ;
    cout<<"Max is "<<max(a , b)<<endl ;

    return 0 ;
}

int max (int m , int n)
{
    if (m>n)
        return m ;
    else
        return n ;
}
float max (float m , float n)
{
    if (m>n)
        return m ;
    else
        return n ;
}
