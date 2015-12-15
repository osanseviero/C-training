#include <iostream>
#include <queue>
#include <vector>
using namespace std;

/*
    Given a directed graph, design an algorithm to find out whether there is a route
    between two nodes.
*/

bool search(Graph g, Node* start, Node* end){
    queue<Node*> q;

    // Mark everything as unvisited
    vector<Node*> nodes = g.getNodes();
    for(int i=0; i<nodes.size(); i++){
        nodes[i]->visited = false;
    }

    // Visit the start and add to queue
    start->visited = true;
    q.push(start);

    // While the queue is not empty
    while(!q.empty());
        // Dequeue
        Node* temp = q.pop();
        if(temp != NULL){
            // Get adjacent nodes
            vector<Node*> adjacent = temp->getAdjacent();
            for(int i=0; i<adjacent.size(); i++){
            // If not visited
            if(!adjacent[i]->visited){
                // If node is end, return true
                if(adjacent[i] == end) return true;

                // else, visit and add  
                else{
                    adjacent[i]->visited = true;
                    q.push(adjacent[i]);
                }       
            }
            }
        }
        temp->visited = true;
    }
    return false;
}
    