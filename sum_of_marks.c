#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int marks_summation(int* marks, int number_of_students, char gender) {
    int s1=0,s2=0,i;

        for(i=0;i<number_of_students;i++)
        {
          if(gender=='b'){
                s1+=marks[i];
                i++;


        }
        else{
        if(gender=='g'){
                i++;
                s2+=marks[i];


        }
        }
        }
    return (gender=='b'?s1:s2);
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
