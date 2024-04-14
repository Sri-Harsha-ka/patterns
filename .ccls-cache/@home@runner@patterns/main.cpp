#include <iostream>
using namespace std;

int main() {
  int r,c;
  cout<< "Enter rows and columns" <<endl;
  cin>> r >> c;

  // pattern 1
  // for loop
  // int i,j;
  // for(i=1;i<=r;i++){
  //   for(j=1;j<=c;j++){
  //     cout<< c-j+1<< "\t";
  //   }
  //   cout<<endl;
  // }

  // while loop 
  // int i=1,j=1;
  // while(i<=r){
  //   while(j<=c){
  //     cout<< c-j+1<< "\t";
  //     j++;
  //   }
  //   cout<< endl;
  //   j=1;
  //   i++;
  // }

  // pattern 2
  // int i=1,j=1;
  // int sum=0;
  // while(i<=r){
  //   while(j<=c){
  //     sum+=1;
  //     cout<< sum<< "\t";
  //     j++;
  //   }
  //   i++;
  //   j=1;
  //   cout<<endl;
  // }

  // pattern 3
  // int i=1,j=1;
  // while(i<=r){
  //   while(j<=i){
  //     cout<< "*"<< "\t";
  //     j++;
  //   }
  //   j=1;
  //   i++;
  //   cout<<endl;
  // }
  
}