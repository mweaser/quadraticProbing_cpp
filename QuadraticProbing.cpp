#include "Hashtable.h"
#include <iostream>

using namespace std;

/* Program that shows that the Quadratic Probing 
will be ruined with a non-prime tableSize number.
*/

string randomString(int len) {
        string string;
        const char alphabet[] = "abcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < len; ++i) {
            int size = sizeof(alphabet) - 1;
            string+= alphabet[rand() % (size)];
        }

     return string;
}

int main(){
    Hashtable<int> hashtable(true, 300);

    for (int i = 0; i < 300; i++){
        cout << i << endl; 
        hashtable.add(randomString(2),0);
    }

    
}



