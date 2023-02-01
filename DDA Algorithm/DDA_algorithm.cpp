#include<bits/stdc++.h>
using namespace std;

int roundup(float n)
{
  float y = (n+0.600000);
  int z = (int)y;
  return z;
}

int main(){
  float x0,y0,x1,y1;
  cout << "Enter starting co-ordinate of line : ";
  cin >> x0 >> y0 ;
  cout << "Enter ending co-ordinate of line : ";
  cin >> x1 >> y1 ;
  float m = (y0-y1) / (x0-x1) ;
  if( m > 1 ){    
    float nx = x0 ;
    cout << "RX RY\n";
    for(int ny = y0 ; ny <= y1 ; ny++,nx+=(1/m) ){
      cout << roundup(nx) <<" "<< ny << endl;
    }
  }
  else if ( m < 1 ){
    float ny = y0 ;
    cout << "RX RY\n";
    for(int nx = x0 ; nx <= x1 ; nx++,ny+=m ){
      cout << nx <<" "<< roundup(ny) << endl;
    }
  }
  return 0;
}