#include <iostream>
using namespace std;
int main(){
  int row=0,col=0;
  cout<<"Enter number of rows and columns:"<<endl;
  cin>>row>>col;
  // for (col;col>0;col--){
  while (row!=0 && col!=0 && col>0){
    int con=row;
    for (con;con>0;con--){
      cout<<"x.";
    }
    cout<<"\n";
    col--;
  }
  // for
  return 0;
}
