#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

class Coordinate{
    float radius;
    float angle;

    public:

        Coordinate(float radius,float angle){
            this->angle = angle;
            this->radius = radius;
        }
        pair<int,int> polar_to_rectangular(){
            return {this->radius*cos(this->angle),this->radius*sin(this->angle)};
        }
};

int main(){
  
  Coordinate point1(5,30);
  pair<int,int> pair1 = point1.polar_to_rectangular();
  cout<<pair1.first<<" "<<pair1.second<<"\n";
  return 0;
}