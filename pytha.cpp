//today we will make program to check whether the given numbers are pythagorian triplet or not;
#include<iostream>
using namespace std;
 
int main()
{
    int a,b,c;//taking 3 numbers input
    cout<<"Enter First Number : ";
    cin>>a;
    cout<<"Enter Second Number : ";
    cin>>b;
    cout<<"Enter third Number : ";
    cin>>c;

    //now we will calculate the sum of squares of first two numbers
    int ans = (a * a) + (b * b);

    //using if else to check conditions
    if(ans == (c * c))
    {
        cout<<"Pythagorian Triplet";
    }
    else
    {
        cout<<"Not Pythagorian Triplet";
    }
    //program is ready lets run it
    //thanks for Watching
return 0;
}