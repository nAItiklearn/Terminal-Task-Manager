#include <stdio.h>
#include <stdbool.h>
#include <string.h>
typedef struct{
    int id;
    char title[100];
    int completed;

}task;

task createTask(int id, char title[], int completed){
    task newTask;
    newTask.id= id;
    strcpy(newTask.title, title); // newTask.title =title would not work
    newTask.completed=completed;

    return newTask;
}

void printTask(task t){
    printf("ID: %d\n", t.id);
    printf("Title: %s\n",t.title);
    if(t.completed ==0){
        printf("completed: No\n");
    }
    else{
        printf("completed: yes\n");
    }
}

void addTask(task tasks[], int *size){
    tasks[*size] = createTask(*size + 1 , "new task", 0);
    (*size)++;

}

int main(){
    task tasks[10];
    int size =3;

    tasks[0]= createTask(1, "code for 3 hours", true);
    tasks[1]= createTask(2, "play valo", false);
    tasks[2]= createTask(3, "larp", true);
    addTask(tasks, &size);

    for(int i=0; i<size; i++)
    {
        printTask(tasks[i]);
    }
    return 0;
}
    
    



