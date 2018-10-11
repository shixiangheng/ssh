#include <cmath>
#include <iostream>
using namespace std;
int main(){
  int n=0.0;
  do{
    cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
    double sum=0;
    cin>>n;
    int m=n+1;    //used for final "terms" sentences
    if (n==-1){   //exit situation
      break;
    } else{
      for(double i=0;i<=n;i++){
	sum += 4*(pow(-1,i)/(2*i+1.0));
      }           //I used the sum first in order to check if my equation's part is correct
      double pi=sum;
      cout.setf(ios::fixed);
      cout.setf(ios::showpoint);
      cout.precision(3);
      if (m==1){
	cout<<"The approximate value of pi using "<<m<<" term is: "<<pi<<endl;
      } else{
	cout<<"The approximate value of pi using "<<m<<" terms is: "<<pi<<endl;
      }
    }


  }
  while(n!=-1);
  return 0;  //it is wired that my computer automaticly have two whitespaces betwwen different loops, rather than 4...I don't know
             //how to fix it...
}
