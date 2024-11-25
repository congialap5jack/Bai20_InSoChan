// Bai20_InSoChan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Nhap vao mot so nguyen: ";
    cin >> n;

    cout << "Cac so chan tu 1 den " << n << " la: ";

    /// Duyet tu 1 den và in ra các so chan
    for (int i =2 ; i <= n; i += 2) {
        cout << i << " ";
    }

    return 0;
}