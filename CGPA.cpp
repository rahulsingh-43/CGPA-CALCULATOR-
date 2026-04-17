#include <iostream>
#include <vector>
using namespace std;

// Function to convert grade letter to grade point
float getGradePoint(char grade) {
    switch(grade) {
        case 'A': return 10;
        case 'B': return 8;
        case 'C': return 6;
        case 'D': return 4;
        case 'F': return 0;
        default: return -1;
    }
}

int main() {
    int n;
    cout << "===== CGPA CALCULATOR =====" << endl;
    cout << "Enter number of courses: ";
    cin >> n;

    vector<string> course(n);
    vector<char> grade(n);
    vector<float> credit(n);

    float totalCredits = 0, totalPoints = 0;

    // Input section
    for(int i = 0; i < n; i++) {
        cout << "\nCourse " << i+1 << " name: ";
        cin >> course[i];

        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade[i];

        float gp = getGradePoint(grade[i]);

        if(gp == -1) {
            cout << "Invalid grade! Try again.\n";
            i--;
            continue;
        }

        cout << "Enter credit hours: ";
        cin >> credit[i];

        totalCredits += credit[i];
        totalPoints += gp * credit[i];
    }

    // GPA Calculation
    if(totalCredits == 0) {
        cout << "Error: Total credits cannot be zero!" << endl;
        return 0;
    }

    float gpa = totalPoints / totalCredits;

    // Output section
    cout << "\n===== COURSE DETAILS =====" << endl;
    for(int i = 0; i < n; i++) {
        cout << course[i] << " | Grade: " << grade[i] 
             << " | Credit: " << credit[i] << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalPoints << endl;
    cout << "Semester GPA: " << gpa << endl;

    // CGPA Calculation
    int sem;
    cout << "\nEnter number of semesters: ";
    cin >> sem;

    float sgpa, sum = 0;

    for(int i = 0; i < sem; i++) {
        cout << "Enter SGPA of semester " << i+1 << ": ";
        cin >> sgpa;
        sum += sgpa;
    }

    float cgpa = sum / sem;

    cout << "\n===== FINAL RESULT =====" << endl;
    cout << "CGPA: " << cgpa << endl;

    float percentage = cgpa * 9.5;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}
