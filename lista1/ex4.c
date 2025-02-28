#include <stdio.h>
#include <string.h>

#define MAX_PROJECTS 100

// Define a structure to represent a project
typedef struct {
    char name[50];
    char area[20];
    float total_value;
    char start_date[11];
    int duration_months;
} Project;

// Function to register a new project
void register_project(Project projects[], int *count) {
    if (*count >= MAX_PROJECTS) {
        printf("Maximum number of projects reached.\n");
        return;
    }

    // Input project details from the user
    printf("Enter project name: ");
    scanf(" %[^\n]", projects[*count].name);
    printf("Enter project area (marketing, operational, innovation): ");
    scanf(" %[^\n]", projects[*count].area);
    printf("Enter total value: ");
    scanf("%f", &projects[*count].total_value);
    printf("Enter start date (YYYY-MM-DD): ");
    scanf(" %[^\n]", projects[*count].start_date);
    printf("Enter duration in months: ");
    scanf("%d", &projects[*count].duration_months);

    (*count)++;
}

// Function to consult and display all registered projects
void consult_projects(Project projects[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Project %d:\n", i + 1);
        printf("Name: %s\n", projects[i].name);
        printf("Area: %s\n", projects[i].area);
        printf("Total Value: %.2f\n", projects[i].total_value);
        printf("Start Date: %s\n", projects[i].start_date);
        printf("Duration: %d months\n", projects[i].duration_months);
        printf("\n");
    }
}

int main() {
    Project projects[MAX_PROJECTS];
    int count = 0;
    int choice;

    // Main loop to display menu and handle user choices
    while (1) {
        printf("1. Register Project\n");
        printf("2. Consult Projects\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                register_project(projects, &count);
                break;
            case 2:
                consult_projects(projects, count);
                break;
            case 3:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}