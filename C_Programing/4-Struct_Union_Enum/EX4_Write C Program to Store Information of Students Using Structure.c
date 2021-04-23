#include <stdio.h>


struct student {
    char name[50];
    float mark;
};

void read_data(struct student *ps);
void print_data(struct student *ps);

int main(){
    struct student s[10];
    int i;
    printf("Enter Information of Students:\n");
    for(i=0;i<10;i++){
        printf("Enter Roll Number %d\n",i+1);
        read_data(&s[i]);
    }
    for(i=0;i<10;i++){
        printf("Information for Roll Number %d",i+1);
        print_data(&s[i]);
    }    
    
    


    return 0;
}

void read_data(struct student *ps){
    printf("Enter Name: ");
    scanf(" %s",ps->name);
    printf("Enter Marks: ");
    scanf(" %f",&ps->mark);
}

void print_data(struct student *ps){
    printf("Name: %s\n",ps->name);
    printf("Marks: %f\n",ps->mark); 
}