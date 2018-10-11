#include <iostream>
using namespace std;
void fan(double&a, double &b);
 double a=5;
 double b=10;

int main()
{
 cout<<a<<endl;
 cout<<b<<endl;
 fan(a,b);
 cout<<a<<endl;
  cout<<b<<endl;
    return 0;
}
void fan(double &a, double &b){
  double c;
  c=a;
  a=b;
  b=c;
}


  
