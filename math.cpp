#include <iostream>
using namespace std;
int main(){
  cout<<"First x and y"<<endl;
  double x,y;
  cin>>x>>y;
  double dy=0;
  cout<<"distance? \n";
  double ds;
  cin>>ds;
  cout<<"time?\n";
  double time;
  cin>>time;
  for (int con=1;con<=time;con++){
    dy=-5*x+y*y;
      cout<<"dy="<<dy<<endl;
    x=x+ds;
    y=ds*dy+y;
    cout<<"x="<<x<<"  y="<<y<<endl;
  }
  return 0;
}
