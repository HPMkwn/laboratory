#include<bits/stdc++.h>
using namespace std;


class Rectangle{
    int width;
    int height;

public:
    Rectangle(){
        this->width = 5;
        this->height = 4;
    }
    Rectangle(int height,int width){
        this->width = width;
        this->height = height;
    }
    int getArea(){
        return this->width * this->height;
    }
    int getPerimeter(){
        return 2*(this->height + this->width);
    }

};

int main(){
  
  return 0;
}