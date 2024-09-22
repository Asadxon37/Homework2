#include <iostream>
using namespace std;

int main() {
    int r,w;
    cin>>w>>r;
    if(w==1&&r==1){cout<<"Bus"<<endl;}
    else if(w==0&&r==1){cout<<"Walk"<<endl;}
    else if(w==1&&r==0){cout<<"Bus"<<endl;}
    else if(w==0&&r==0){cout<<"Bike"<<endl;}
    return 0;
}