 A simple and efficient CGPA Calculator built using C++. This program helps students calculate their GPA (Grade Point Average) for a semester and overall CGPA based on course grades and credit hours.
📌 Features
📥 Take input for number of courses
📝 Enter grade and credit hours for each course
🧮 Calculate:
Total Credits
Total Grade Points
📊 Compute:
Semester GPA
Overall CGPA
📋 Display:
Individual course details
Final CGPA
⚙️ How It Works
User inputs total number of courses.
For each course:
Enter grade (A, B, C, etc.)
Enter credit hours
Program converts grades into grade points.
Calculates:
Total Grade Points = Grade × Credit Hours
GPA = Total Grade Points / Total Credits
Displays the final CGPA.
🧾 Grade Point System (Example)
Grade
Grade Point
A
10
B
8
C
6
D
4
F
0
(You can modify this system in the code as per your university rules.)
💻 Technologies Used
C++
Standard Input/Output
▶️ How to Run
Clone the repository:
Bash
git clone https://github.com/your-username/cgpa-calculator.git
Navigate to the project folder:
Bash
cd cgpa-calculator
Compile the code:
Bash
g++ cgpa.cpp -o cgpa
Run the program:
Bash
./cgpa
📷 Sample Output

Enter number of courses: 3

Course 1:
Enter Grade: A
Enter Credit Hours: 4

Course 2:
Enter Grade: B
Enter Credit Hours: 3

Course 3:
Enter Grade: C
Enter Credit Hours: 2

Total Credits: 9
Total Grade Points: 68

CGPA: 7.55
🚀 Future Improvements
Add GUI (using Qt or other libraries)
Support percentage to grade conversion
Store student data in file
Multi-semester CGPA calculation
🤝 Contributing
Feel free to fork this repo and improve the project!
📄 License
This project is open-source and free to use.
