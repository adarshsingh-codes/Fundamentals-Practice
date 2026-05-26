#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void explainPQ() {

    // ==============================
    // MAX HEAP (Default Priority Queue)
    // ==============================
    //data is stored in a tree internally and not linearly

    priority_queue<int> pq;

    pq.push(5);      
    // pq = {5}

    pq.push(2);      
    // pq = {5, 2}

    pq.push(8);      
    // pq = {8, 5, 2}

    pq.emplace(10);  
    // pq = {10, 8, 5, 2}

    cout << pq.top() << endl;   
    // prints 10

    pq.pop();        
    // pq = {8, 5, 2}

    cout << pq.top() << endl;   
    // prints 8

    // Other functions:
    // pq.size()
    // pq.empty()
    // pq.swap()


    // ==============================
    // MIN HEAP
    // ==============================

    priority_queue<int, vector<int>, greater<int>> minpq;

    minpq.push(5);      
    // minpq = {5}

    minpq.push(2);      
    // minpq = {2, 5}

    minpq.push(8);      
    // minpq = {2, 5, 8}

    minpq.emplace(10);  
    // minpq = {2, 5, 8, 10}

    cout << minpq.top() << endl;  
    // prints 2
}

int main() {
    explainPQ();
    return 0;
}