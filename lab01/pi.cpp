#include <cmath>
#include <iostream>
using namespace std;
main(){
  int n=0.0;
  do{
  cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;

  double sum=0;
  cin>>n;
  int m=n+1;
    if (n==-1){
    // cout<<"ok";
  
  exit;
    }
  else{
    for(double i=0;i<=n;i++){
      double s= pow(-1,i);
      //  cout<<s<<endl;
      sum+=4*(s/(2*i+1.0));
      //      cout<<sum<<endl;
      // cout<<sum;
  }
  double pi=sum;
  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(3);
  // cout<<pi;
 
  cout<<"The approximate value of pi using "<<m<<" terms is: "<<pi<<endl;
  }}
  while(n!=-1);
  return 0;
}
