#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

void mult(long long int a[2][2],long long int b[2][2],long long int dest[2][2]) {
  for(int i=0;i<2;i++) {
    for(int j=0;j<2;j++) {
      long long int temp=0;
      for(int k=0;k<2;k++) {
        temp += a[i][k]*b[k][j];
      }
      dest[i][j] = temp;
    }
  }
}

int main() {
  long long int arr[2][2] = {{1,1},{1,0}};
  int n;
  scanf("%d",&n);
  long long int mul[100][2][2] = {};
  memcpy(&mul[1],arr,sizeof(arr));
  for(int i=2;i<10;i++) {
    mult(mul[i-1],mul[i-1],mul[i]);
    /*
    for(int x=0;x<2;x++) {
      for(int y=0;y<2;y++) {
        cout<<mul[i][x][y]<<" ";
      }
      cout<<"--------------"<<endl;
    }
    */
  }
  cout<<mul[4][0][1]<<endl;
  return 0;
}
