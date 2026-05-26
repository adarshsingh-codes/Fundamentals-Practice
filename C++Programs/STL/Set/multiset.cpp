#include<bits/stdc++.h>
using namespace std;
void explainMultiSet() {

    // Everything same as set
    // Only stores duplicate elements also
    //sorted

    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only a single one erased
    ms.erase(ms.find(1));

    // ms.erase(ms.find(1), ms.find(1)+2);
auto it = ms.find(1);
ms.erase(it, next(it, 2));
    // rest all functions same as set
}