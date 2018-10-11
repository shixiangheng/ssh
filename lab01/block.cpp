#include <iostream>
using namespace std;
int main(){
  int row=0,col=0;//set the original value
  do{
    cout<<"Enter number of rows and columns:"<<endl;
    cin>>row>>col;
    int count_r=row;                   //count r for count number of rows
    while (count_r!=0 && col!=0 && col>0){
      int con=col;                     //con for count number of columns
      for (con;con>0;con--){
	cout<<"X.";
      }
      cout<<"\n";
      count_r--;
    }
  }
  while (row!=0 && col!=0 && col>0);//exit when either is 0
  
  return 0;
}
