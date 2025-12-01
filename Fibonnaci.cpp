#include <bits/stdc++.h>
using namespace std;

const vector<vector<int>> BASIC = {{1,1}, {1,0}};

// Recursive Method
// Time Complexity -> O(n^2)
// Space Complexity -> O(n)

int recursiveFib(int num) {
    if (num <= 1) {
        return num;
    } else {
        return recursiveFib(num - 1) + recursiveFib(num - 2);
    }
}

// Dynamic Programming Method
// Time Complexity -> O(n)
// Space Complexity -> O(n)

int dynamicProg(int num) {
    vector<int> memory(num + 1);
    memory[0] = 0;
    memory[1] = 1;

    if(num <= 1) {
        return num;
    }

    for (int i = 2; i <= num; i++) {
        memory[i] = memory[i - 1] + memory[i - 2];
    }

    return memory[num];

}

// Divide & Conqure (Matrix Multiplication)  Method
// Time Complexity -> O(log n)
// Space Complexity -> O(log n)

void matrixMultip(vector<vector<int>>& A, const vector<vector<int>>& B) {
    int a = A[0][0] * B[0][0] + A[0][1] * B[1][0];
    int b = A[0][0] * B[0][1] + A[0][1] * B[1][1];
    int c = A[1][0] * B[0][0] + A[1][1] * B[1][0];
    int d = A[1][0] * B[0][1] + A[1][1] * B[1][1];

    A[0][0] = a;
    A[0][1] = b;
    A[1][0] = c;
    A[1][1] = d;
}

void powerMatrix(vector<vector<int>>& vec1, int pow) {
    if(pow == 0 || pow == 1) {
        return;
    }

    powerMatrix(vec1, pow / 2);
    matrixMultip(vec1, vec1);

    if(pow % 2 != 0) {
        matrixMultip(vec1, BASIC);
    }
}

int fiboMatrix(int num) {
    if(num <= 1) {
        return num;
    }

    vector<vector<int>> basic = BASIC;
    powerMatrix(basic, num -1);

    return basic[0][0];
}

void menu() {
    cout << "\nMain Menu: " << endl;
    cout << "===========" << endl;
    cout << "1. Calculate Fibbonaci Series using Recursive Method." << endl;
    cout << "2. Calculate Fibbonaci Series using Divide and Conquer (Matrix Multiplication)." << endl;
    cout << "3. Calculate Fibbonaci series using Dynamic Programming." << endl;
    cout << "0. Exit" << endl;
}

int main() {
    cout << "=== Welcome To Fibonnaci Sequance ===" << endl;
    cout << "=====================================" << endl;
    cout << endl;

    while (true) {
        menu();

        int num;
        char choice;

        cout << endl;
        cout << "Please Enter your choice: ";
        
        cin >> choice;

        if (choice == '0') {
            cout << "Good Bye:)" << endl;
            break;
        }

        else if (choice == '1') {
            cout << "Please Enter number to calculate: ";
            cin >> num;
            cout << "Fibbonaci Series of number " << num << " is: '" << recursiveFib(num) << "'" << endl;
            cout << endl << "------------------------------------------------" << endl;
        }

        else if (choice == '2'){
            cout << "Please Enter number to calculate: ";
            cin >> num;
            cout << "Fibbonaci Series of number " << num << " is: '" << fiboMatrix(num) << "'" << endl;
            cout << endl << "------------------------------------------------" << endl;
        }

        else if (choice == '3') {
            cout << "Please Enter number to calculate: ";
            cin >> num;
            cout << "Fibbonaci Series of number " << num << " is: '" << dynamicProg(num) << "'" << endl;
            cout << endl << "------------------------------------------------" << endl;
        }

        else {
            cout << "Invalid Input, please try again." << endl;
            cout << endl;
        }

    }

    return 0;
}