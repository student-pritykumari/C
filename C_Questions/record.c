#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 5

struct Student {
    char name[50];
    char address[100];
    int rollNumber;
    int marks[MAX_SUBJECTS];
    int totalMarks;
};

void inputStudentDetails(struct Student *student, int numSubjects) {
    printf("Enter name: ");
    scanf(" %[^\n]", student->name);
    printf("Enter address: ");
    scanf(" %[^\n]", student->address);
    printf("Enter roll number: ");
    scanf("%d", &student->rollNumber);
    
    student->totalMarks = 0;
    for (int i = 0; i < numSubjects; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &student->marks[i]);
        student->totalMarks += student->marks[i];
    }
}

void printStudentDetails(struct Student student, int numSubjects) {
    printf("\nName: %s\n", student.name);
    printf("Address: %s\n", student.address);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks:\n");
    for (int i = 0; i < numSubjects; i++) {
        printf(" Subject %d: %d\n", i + 1, student.marks[i]);
    }
    printf("Total Marks: %d\n", student.totalMarks);
}

int main() {
    int numStudents, numSubjects;
    
    printf("Enter number of students: ");
    scanf("%d", &numStudents);
    printf("Enter number of subjects: ");
    scanf("%d", &numSubjects);
    
    struct Student students[MAX_STUDENTS];
    
    for (int i = 0; i < numStudents; i++) {
        printf("\nEntering details for student %d\n", i + 1);
        inputStudentDetails(&students[i], numSubjects);
    }
    
    struct Student topStudent = students[0];
    for (int i = 1; i < numStudents; i++) {
        if (students[i].totalMarks > topStudent.totalMarks) {
            topStudent = students[i];
        }
    }
    
    printf("\nStudent who stood first in the class:\n");
    printStudentDetails(topStudent, numSubjects);
    
    return 0;
}
