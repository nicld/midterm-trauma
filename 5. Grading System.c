/*
5. Grading System

Its the end of the semester and to help the admin see who has garnered passing remarks this semester, they have decided to get a system built to check who has 
passed or failed this semester. The system will ask how many subjects the student is taking as well as how many exams per subject, after which the user will input the scores of each exam of the subject. To help the student as well, the system will also determine which subject the student performed the best and worst in.

Create a program that will ask the user for the number of subjects as well as number of exams, the user will then input the scores of each exam per subject 
(e.g Score of Subject 1 - Exam 1 then Subject 1 - Exam 2, etc). The Program will then average the scores of all the exams, and display the average. 
The Program should also determine which subject the student performed the best and worst in. After all of these, finally display if the student was able to 
pass the semester, the basis for passing the semester is if the students Average Grade is greater than 75.

In the event the student has a grade of O in all of his exam, then the student will not have a best subject and will instead display "No Best Subject"
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int sub, exam, grade, total = 0, avg, max = INT_MIN, min = INT_MAX, i, j, best, worst;

    printf("Input number of Subjects: ");
    scanf("%d", &sub);
    printf("Input number of Exams: ");
    scanf("%d", &exam);

    for(i = 1; i <= sub; i++){
        for(j = 1; j <= exam; j++){
            printf("Input Grade for Subject %d - Exam %d : ", i, j);
            scanf("%d", &grade);

            total += grade;
            
            if (grade >= max){
                max = grade;
                best = i;
            }
			
			if (grade <= min){
                min = grade;
                worst = i;
			} 
        }
    }

    avg = total / (sub*exam);
    printf("\n\nAverage Grade for %d Exams : %d\n", sub*exam, avg);

    if(total > 0){
        printf("\nBest Subject: Subject %d", best);
        printf("\nWorst Subject: Subject %d", worst);
    } else {
        printf("\nNo Best Subject");
        printf("\nWorst Subject: Subject %d", worst);
    }

    if(avg>75){
        printf("\n\nPassed this Semester");
    } else {
        printf("\n\nFailed this Semester");
    }

    return 0;
}
