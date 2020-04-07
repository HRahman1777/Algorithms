#include<iostream>
using namespace std;


double mySqrt(double tar)
{
    double low, high, mid;
    low=0.0;
    high=tar;
    while((high-low)>0.00000000001)
    {
        mid = (high+low)/2;
        if((mid*mid)>tar)
            high=mid;
        else
            low = mid;
    }

    return mid;
}


int main()
{
    double target, res;
    cout<<"Enter number: ";
    cin>>target;
    res = mySqrt(target);
    cout<<"Sqrt value: "<<res<<"\nValues rot_value: "<<res*res<<endl;

    return 0;
}
