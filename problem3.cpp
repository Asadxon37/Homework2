#include <iostream>
using namespace std;

int main() {
  char g;
  cin>>g;
  double a;
  cin>>a;
  if(g == 'M' && a<1.70) {
    cout<<"Short"<<endl;
  }
  else if(g =='M'&&a>=1.70&&a<1.85) {
    cout<<"Normal"<<endl;
  }
  else if(g=='M'&&a>=1.85) {
    cout<<"Tall"<<endl;
  }
  else if(g=='F'&&a<1.60) {
    cout<<"Short"<<endl;
  }
  else if(g =='F'&&a>=1.60&&a<1.75) {
    cout<<"Normal"<<endl;
  }
  else if(g=='F'&&a>=1.75) {
    cout<<"Tall"<<endl;
  }
    return 0;
  }