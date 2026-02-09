# Student-Grade-Calculator-Using-Object-Oriented-Programming-in-C++-
Student Grade Calculator Using OOP in C++

A C++ console application that calculates student grades using Object-Oriented Programming (OOP) principles such as classes, inheritance, polymorphism, and encapsulation.

1. Introduction

The purpose of this project is to design and implement a Student Grade Calculator using Object-Oriented Programming (OOP) in C++.

The program addresses the problem of calculating final grades for different types of students while maintaining clean, reusable, and structured code.

In many academic systems, undergraduate and graduate students are graded differently. This program simulates such a system by allowing the user to choose the student type and then calculating the final grade based on predefined weightings. The use of OOP helps organize the program efficiently and makes it easy to extend in the future.

2. Code Structure

The program is structured around three main classes:

2.1 Student (Base Class)

Represents a general student.

Attributes (Protected):

name (string)

id (int)

Methods (Public):

Constructor to initialize name and ID

showInfo() – displays student information

calculateGrade() – declared as a virtual function

This class serves as a base class for other student types.

2.2 UndergraduateStudent (Derived Class)

Inherits from the Student class.

Attributes (Private):

exam

coursework

Methods:

Overrides calculateGrade() as:

60% exam

40% coursework

This class specializes the behavior of the base class for undergraduate students.

2.3 GraduateStudent (Derived Class)

Inherits from the Student class.

Attributes (Private):

research

presentation

Methods:

Overrides calculateGrade() as:

70% research

30% presentation

This allows different grading logic while reusing the same base structure.

2.4 Main Function

The main() function:

Displays a menu for selecting student type

Takes user input for student details and grades

Creates an object of the selected student type

Displays student information and final grade

3. Object-Oriented Programming Principles
3.1 Encapsulation

Data such as grades and student details are stored inside classes. Sensitive data members are marked as private or protected, and access is controlled through class methods.

3.2 Inheritance

Both UndergraduateStudent and GraduateStudent inherit from the Student base class. This reduces code duplication and promotes reusability.

3.3 Polymorphism

The calculateGrade() function is declared as virtual in the base class and overridden in derived classes. This allows different implementations of grade calculation depending on the student type.

3.4 Abstraction

The base Student class provides a general structure, while the specific details of grade calculation are handled in derived classes.

4. Program Demonstration
Step-by-Step Execution

The program starts and displays a menu:

Undergraduate Student

Graduate Student

The user selects the student type

The program asks for:

Name

Student ID

Depending on the choice:

Undergraduate: exam and coursework grades

Graduate: research and presentation grades

The program calculates the final grade

Student information and final grade are displayed
