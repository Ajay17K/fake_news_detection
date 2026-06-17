#include<iostream>
#include "../include/graph.h"
using namespace std;

int main(){
    cout<<"Project Setup"<<endl;

    Graph g;

    g.addCity("Delhi");
    g.addCity("Mumbai");
    g.addCity("Jaipur");
    g.addCity("Ahmedabad");

    g.addRoad("Delhi", "Mumbai", 1400);
    g.addRoad("Delhi", "Jaipur", 280);
    g.addRoad("Jaipur", "Ahmedabad", 650);
    g.addRoad("Ahmedabad", "Mumbai", 520);

    g.displayGraph();
    return 0;
}