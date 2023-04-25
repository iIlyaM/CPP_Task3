#include "HashMap.h"
#include <assert.h>
#include <iostream>
#include <string>

using namespace std;


int main()
{
    HashMap<int, string> hmap;
    cout << hmap.isEmpty() << endl;
    hmap.insert(1, "jfhdjskhfjksdjfsd");
    hmap.insert(2, "2");
    hmap.insert(3, "3");
    cout << hmap.isEmpty() << endl;
    cout << hmap.get(1) << endl;
    hmap.printMap();
    hmap.remove(1);
    hmap.printMap();

    /*string value;
    bool result = hmap.get(2, value);
    assert(result);
    assert(value == "2");

    result = hmap.get(3, value);
    assert(result);
    assert(value == "3");

    hmap.remove(3);
    result = hmap.get(3, value);
    assert(!result);*/
}