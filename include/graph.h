#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;
class Graph{
    private:
    unordered_map<string,vector<pair<string,int>>>adjList;

    public:
    void addCity(string city);
    void addRoad(string src,string dest,int dist);
    void displayGraph();
};

#endif