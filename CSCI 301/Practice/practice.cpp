#include <iostream>
#include <cmath>

using namespace std;

double add(double num, double num2) {

    return num += num2;
}

double sub(double num, double num2){

    return num -= num2;
}

double mult(double num, double num2){

    return num *= num2;
}

double div(double num, double num2){

    return num /= num2;
}

int main() {
    
    double num, num2;
    char opp = ' ';

    cout << "Please enter an equation: " << endl;
    cin >> num >> opp >> num2;

    if(opp == '+') {
        num = add(num,num2);
    }
    else if(opp == '-') {
        num = sub(num,num2);
    }
    else if(opp == '*') {
        num = mult(num,num2);
    }
    else {
        num = div(num,num2);
    }

    cout << "Your number is:" << num << endl;


    return 0;
}