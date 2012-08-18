#include<iostream>

using namespace std;

void disp(int arr[2][2]) {
  for(int i=0;i<2;i++) {
    for(int j=0;j<2;j++) {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main() {
  int (*ptr)[2][2];
  int arr[1][2][2] = { {{1,2},{3,4}}};
  ptr = arr[0];
  disp(ptr);
  return 0;
}
