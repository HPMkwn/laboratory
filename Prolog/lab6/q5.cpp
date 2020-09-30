#include<bits/stdc++.h>
using namespace std;

class Player{
private:
    int bcode;
    string bname;
    int innings;
    int notouts;
    int runs;
    float batavg;
    void calcavg(){
        batavg = (float)runs/(innings-notouts);
    }
public:
    void readdata(int code,string name,int run,int inni,int notout){
        bcode = code;
        bname = name;
        runs = run;
        innings = inni;
        notouts = notout;
        calcavg();
    }
    void displaydata(){
        cout<<"Name of the Player is: "<<bname<<'\n';
        cout<<"Code of a Player is: "<<bcode<<'\n';
        cout<<"No. of innings of a Player is: "<<innings<<'\n';
        cout<<"Total runs of a Player is: "<<runs<<'\n';
        cout<<"Total no. of notouts of a Player is: "<<notouts<<'\n';
        cout<<"Batting Average of a Player is: "<<batavg<<'\n';
    }
};

int main(){
    Player virat = Player();
    virat.readdata(18,"Virat Kohli",11867,239,39);
    virat.displaydata();

    Player dhoni = Player();
    dhoni.readdata(7,"MS Dhoni",10773,297,84);
    dhoni.displaydata();

    return 0;
}