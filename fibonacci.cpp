#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

void mult(int a[2][2],int b[2][2],int dest[2][2]) {
  //memset(*dest,0,sizeof(*dest));
  for(int i=0;i<2;i++) {
    for(int j=0;j<2;j++) {
      int temp=0;
      for(int k=0;k<2;i++) {
        temp += a[i][k]*b[k][j];
      }
      dest[i][j] = temp;
    }
  }
}

int main() {
  int arr[2][2] = {{1,1},{1,0}};
  int n;
  scanf("%d",&n);
  int mul[100][2][2] = {};
  memcpy(&mul[1],arr,sizeof(arr));
  for(int i=2;i<10;i++) {
    mult(mul[i-1],mul[i-1],mul[i]);
  }
  cout<<mul[2][0][1]<<endl;
  return 0;
}
