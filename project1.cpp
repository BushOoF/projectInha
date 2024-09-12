#include <iostream>
#include<string>
#include"Car.h"
#include<fstream>
#include<exception>
using namespace std;

class Student {
public:
    int studentId;
    std::string studentName;

    Student() : studentId(0), studentName("") {}
    Student(int id, std::string name) : studentId(id), studentName(name) {}

    void serialize(std::ofstream& out) const {
        out << studentId << ' ' << studentName << '\n';
    }

    void deserialize(std::ifstream& in) {
        in >> studentId >> studentName;
    }
};


int main()
{

    const int MAX_CARS = 3;
    Student st[MAX_CARS] = {
      Student(1, "Alice"),
      Student(2, "Bob"),
      Student(3, "Charlie")
    };
    int studentCount = 0;
    string option;
    cout << "Do you want to buy a car or to sell one?" << endl << "Enter: ";
    cin >> option;
    if (option == "buy")
    {
        std::ifstream infile("car.txt", std::ios::in);
        if (infile.is_open()) {
            while (!infile.eof() && studentCount < MAX_CARS) {
                Student temp;
                temp.deserialize(infile);
                // Check to ensure the read operation was successful
                if (infile) {
                    st[studentCount++] = temp;
                }
            }
            infile.close();

            // Output the data read from file
            for (int i = 0; i < studentCount; i++) {
                std::cout << "Student ID: " << st[i].studentId << ", Name: " << st[i].studentName << std::endl;
            }
        }
        else {
            std::cout << "Failed to open file for reading." << std::endl;
        }
    }
    else if (option == "sell")
    {
        std::ofstream outfile("car.txt", std::ios::out);
        if (outfile.is_open()) {
            for (int i = 0; i < MAX_CARS; i++) {
                st[i].serialize(outfile);
            }
            outfile.close();
        }
        else {
            std::cout << "Failed to open file for writing." << std::endl;
        }

    }
    else
    {
        cout << "Please type sell or buy";
    }
    system("pause");
    return 0;
}