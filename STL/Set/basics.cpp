// #include<bits/stdc++.h>

// using namespace std;

// int main() {
//   set < int > s;
//   for (int i = 1; i <= 10; i++) {  //Iterate through 10 and insert the value of i in the set
//     s.insert(i);
//   }

//   cout << "Elements present in the set: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";  //If element is found print it
//   }
//   cout << endl;
//   int n = 2;
//   if (s.find(2) != s.end())
//     cout << n << " is present in set" << endl;  //Print the element

//   s.erase(s.begin());
//   cout << "Elements after deleting the first element: ";
//   for (auto it = s.begin(); it != s.end(); it++) {
//     cout << * it << " ";
//   }
//   cout << endl;

//   cout << "The size of the set is: " << s.size() << endl;  ///Return the size of the set

//   if (s.empty() == false)
//     cout << "The set is not empty " << endl;  //If set is not empty and elements are still present in it
//   else
//     cout << "The set is empty" << endl;  //If set is empty
//   s.clear();
//   cout << "Size of the set after clearing all the elements: " << s.size();
// }


#include <iostream>
#include <set>
using namespace std;
void explainSet() {
    //a set alsways tores in sorted order and unique
    // ==============================
    // SET
    // ==============================
    set<int> st;

    st.insert(1);    // st = {1}
    st.emplace(2);   // st = {1, 2}
    st.insert(2);    // st = {1, 2}
    // Duplicate values are NOT stored
    st.insert(4);    // st = {1, 2, 4}

    st.insert(3);    // st = {1, 2, 3, 4}

    // Set stores elements in SORTED order automatically
    // ==============================
    // OTHER FUNCTIONS
    // ==============================
    // begin(), end(), rbegin(), rend()
    // size(), empty(), swap()
    // work same as other STL containers
    // ==============================
    // FIND FUNCTION
    // ==============================

    auto it1 = st.find(3); // points to element 3 //returns an iteraor which points to this 3
    auto it2 = st.find(6); // since 6 is not present, //if the elemtn s not preset the iteratoes retunee st.end();that is just after the end
    // iterator becomes st.end()
    // ==============================
    // ERASE FUNCTION
    // ==============================
    st.erase(5); // tries to erase 5 // if not present, nothing happens
    st.erase(3); // st = {1, 2, 4}
    // ==============================
    // COUNT FUNCTION
    // ==============================
    int cnt = st.count(1);
    // returns 1 if present
    // returns 0 if absent
    cout << cnt << endl;
    // ==============================
    // ERASE USING ITERATOR
    // ==============================

    auto it = st.find(2);
    st.erase(it);
    // st = {1, 4}
    auto it = st.find(3);
    st.erase(it);
    // {1, 2, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);
    // after erase -> {1, 4, 5}
    // lower_bound() and upper_bound()
    // work same as vectors
    auto it3 = st.lower_bound(2);
    auto it4 = st.upper_bound(3);
    // ==============================
    // PRINTING SET
    // ==============================
    for(auto value : st) {
        cout << value << " ";
    }
}

int main() {
    explainSet();
    return 0;
}