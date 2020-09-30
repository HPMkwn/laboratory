#include<bits/stdc++.h>
using namespace std;

class Flight{
private:
    int flight_num;
    string destination;
    float fligth_distance;
    float fuel;
    void CALCFUEL(){
        if(fligth_distance<=1000){
            fuel = 500;
        }else if(fligth_distance>1000 && fligth_distance<=2000){
            fuel = 1100;
        }else if(fligth_distance>2000){
            fuel = 2200;
        }
    }

public:
    void FEEDINFO(int num,string dest,float dist){
        flight_num = num;
        destination = dest;
        fligth_distance = dist;
        CALCFUEL();
    }
    void SHOWINFO(){
        cout<<"No. of a flight is: "<<flight_num<<'\n';
        cout<<"Destination of a flight is: "<<destination<<'\n';
        cout<<"Distance of a flight is: "<<fligth_distance<<'\n';
        cout<<"Fuel Intake of a flight is: "<<fuel<<'\n';
    }
};

int main(){
    Flight flight = Flight();
    int num;
    string destination;
    float dist;

    cout<<"Enter the no. of a flight: ";
    cin>>num;

    cout<<"Enter the destination of a flight: ";
    cin>>destination;

    cout<<"Enter the distance of a flight: ";
    cin>>dist;

    flight.FEEDINFO(num,destination,dist);
    flight.SHOWINFO();

    return 0;
}