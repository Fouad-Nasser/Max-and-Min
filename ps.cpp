#include<iostream>
using namespace std;

int main(){
  int a,b,c;
  cin>>a>>b>>c;

  int min = a<b?a:b;
  min = min<c?min:c;

  int max = a>b?a:b;
  max = max>c?max:c;

  printf("%d %d\n",min,max);

  return 0;
}
