#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[]){
  if (argc!=5){
      cerr<<"Usage: ./min4 num1 num2 num3 num4\n Prints smallest of the four numbers\n";
      return 1;
  } else{
    int a=atoi(argv[1]),b=atoi(argv[2]),c=atoi(argv[3]),d=atoi(argv[4]),min=a;
    //compare a and b
    if(a>=b){
      min=b;
    } 
    //compare min(a.b) and c
    if (min>=c){
      min=c;
    }
    //compare min(a,b,c) and d
    if (min>=d){
      min=d;
    }
    cout<<min<<endl;  
      
	  
 
  }
  
  return 0;
}
