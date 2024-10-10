#include <iostream>

using namespace std;

int main(){
    const int numCount = 10;
    double number[numCount];
    double = 0.0;


    cout << "Enter" << numCount << "numbers: " << endl;

    for ( int i = 0; i < numCount; ++i){
        cout << "Number" << i + 1 << ":";
        cin >> numbers[i];

        sum += numbers[i];
    }
    double average = sum / numCount;
    cout << "The average is:" << average << endl;

    return 0;
}