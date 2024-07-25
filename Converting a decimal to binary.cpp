/*Converting a decimal to binary: In the decimal number system, the value of a given number is calculated by multiplying each digit with a power of 10 (e.g. 374 = 3*100 + 7*10+ 4*1). In the binary system, the value of a number is calculated by multiplying each digit (or bit) by a power of 2. For example, (binary)1101 = 1*23 + 1*22 + 0 + 1* 20 = (decimal)13. So the representation of the decimal number 13 in binary is 1101. One way to convert a decimal number into its equivalent binary is to keep dividing the decimal number by 2, and writing the successive values of the remainders. This will produce the ‘reverse’ of the binary number, i.e will produce 1011 in the case of 13. (13 divided by 2 gives a remainder of 1, then 6 divided by 2 gives a remainder of 0, then 3 divided by 2 gives a remainder of 1, and finally 1 divided by 2 gives a remainder of 1). Write a program that asks the user to enter an integer, and then prints the binary equivalent of that integer, in reverse. (Challenge: can you print the binary number in the right order?)*/

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <vector>

using namespace std;

int main() {
    int number;
    int rem = 0;
    vector <int> num;

    cout << "Enter a digit to convert to Binary: " << endl;
    cin >> number;

    while (number > 0) {
        rem = number % 2;
        num.push_back(rem);
        number = number / 2;
    }
    cout << "BINARY:  ";                            // since we have already push back rem , the data is stored in num but in reverse ,so this is what we do:
    for (int i = num.size() - 1; i >= 0; i--) {     // int i = num.size()-1 ::: start from the last index of size of my vector
        cout << num[i];                             // go all the way to index 0 before stopping the loop
                                                    // at each iteration , go one index back in the vector size
                                                    // print each i , starting from the last element by num.size()-1 all the way to first element i=0
                                                    // each iteration go one more i back in the elements index of vector (i--)                                
    }
    cout << endl;


}