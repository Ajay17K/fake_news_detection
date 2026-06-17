#include "../include/graph.h"

void Graph::addCity(string city){
    adjList[city];
}

void Graph::addRoad(string src,string dest,int dist){
    adjList[src].push_back({dest, dist});
    adjList[dest].push_back({src, dist});
}

void Graph::displayGraph(){

    for (auto city : adjList){
        cout << city.first << " -> ";
        for (auto road : city.second){
            cout << "("<< road.first<< ", "<< road.second << " km) ";
        }
        cout << endl;
    }
}