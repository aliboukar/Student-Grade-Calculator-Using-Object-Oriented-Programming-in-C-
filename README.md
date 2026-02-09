# Student-Grade-Calculator-Using-Object-Oriented-Programming-in-C-
This project implements a Student Grade Calculator in C++ using Object-Oriented Programming (OOP) principles. It calculates final grades for different types of students while maintaining clean, reusable, and structured code.

3. Code Structure
The program is structured around three main classes:
3.1 Student (Base Class)
The Student class represents a general student and contains:
• Protected attributes:
o name (string)

o id (int)
• Public methods:
o A constructor to initialize name and ID
o showInfo() to display student information
o calculateGrade() declared as a virtual function
This class serves as a base class for other student types.

3.2 UndergraduateStudent (Derived Class)
The UndergraduateStudent class inherits from the Student class and adds:
• Private attributes:
o exam
o coursework
• Overridden method:
o calculateGrade() which calculates the final grade as:
▪ 60% exam
▪ 40% coursework

This class specializes the behavior of the base class for undergraduate students.

3.3 GraduateStudent (Derived Class)
The GraduateStudent class also inherits from Student and includes:
• Private attributes:
o research
o presentation
• Overridden method:
o calculateGrade() which calculates the final grade as:
▪ 70% research
▪ 30% presentation

This design allows different grading logic while reusing the same base structure.

3.4 Main Function
The main() function:
• Displays a menu for selecting student type
• Takes user input for student details and grades
• Creates an object of the selected student type
• Displays student information and final grade

4. Object-Oriented Programming Principles
The program applies several key OOP principles:
4.1 Encapsulation
Data such as grades and student details are stored inside classes. Sensitive data
members are marked as private or protected, and access is controlled through class
methods.
4.2 Inheritance
Both UndergraduateStudent and GraduateStudent inherit from the Student base
class. This reduces code duplication and promotes reusability.
4.3 Polymorphism
The calculateGrade() function is declared as virtual in the base class and overridden
in the derived classes. This allows different implementations of grade calculation
depending on the student type.
4.4 Abstraction
The base Student class provides a general structure, while the specific details of grade
calculation are handled in derived classes.

5. Program Demonstration
5.1 Step-by-Step Execution
1. The program starts and displays a menu:
a. Undergraduate Student
b. Graduate Student
2. The user selects the student type.
3. The program asks for:
a. Name
b. Student ID
4. Depending on the choice:
a. Undergraduate: exam and coursework grades
b. Graduate: research and presentation grades
5. The program calculates the final grade.
6. Student information and final grade are displayed.
