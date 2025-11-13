#include <stdio.h>
#include <string.h>
#define MAX_TEAMS 50



struct Coach {
    char name[100];
    int age;
    int experience;
};



struct Team {
    char team_name[100];
    char sport_type[50];
    struct Coach coach_info;
};

struct Team teams[MAX_TEAMS];
int team_count = 0;
void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


void add_team() {
    if (team_count >= MAX_TEAMS) {
        printf("Error: Maximum number of teams (%d) reached.\n", MAX_TEAMS);
        return;
    }

    printf("\n--- Add New Team ---\n");
    printf("Enter details for Team %d:\n", team_count + 1);

    printf("  Enter Team Name: ");
    scanf("%99[^\n]", teams[team_count].team_name);
    clear_input_buffer();

    printf("  Enter Sport Type (e.g., Football, Basketball): ");
    scanf("%49[^\n]", teams[team_count].sport_type);
    clear_input_buffer();

    printf("\n  --- Enter Coach Details ---\n");
    printf("    Enter Coach's Name: ");
    scanf("%99[^\n]", teams[team_count].coach_info.name);
    clear_input_buffer();

    printf("    Enter Coach's Age: ");
    scanf("%d", &teams[team_count].coach_info.age);
    clear_input_buffer();

    printf("    Enter Coach's Experience (in years): ");
    scanf("%d", &teams[team_count].coach_info.experience);
    clear_input_buffer();

    team_count++;
    printf("\nTeam added successfully!\n");
}


void search_team() {
    char search_name[100];
    int found = 0;
    if (team_count == 0) {
        printf("\nNo teams to search. Please add a team first.\n");
        return;
    }

    printf("\n--- Search for a Team ---\n");
    printf("Enter Team Name to search: ");
    scanf("%99[^\n]", search_name);
    clear_input_buffer();


    for (int i = 0; i < team_count; i++) {

        if (strcmp(teams[i].team_name, search_name) == 0) {
            printf("\n--- Team Found! ---\n");
            printf("  Team Name: %s\n", teams[i].team_name);
            printf("  Sport Type: %s\n", teams[i].sport_type);
            printf("  --- Coach Info ---\n");
            printf("    Name: %s\n", teams[i].coach_info.name);
            printf("    Age: %d\n", teams[i].coach_info.age);
            printf("    Experience: %d years\n", teams[i].coach_info.experience);
            printf("-----------------------\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nSorry, team '%s' not found.\n", search_name);
    }
}


void display_all_teams() {
    if (team_count == 0) {
        printf("\nNo teams to display. Please add a team first.\n");
        return;
    }

    printf("\n--- Displaying All Teams (%d) ---\n", team_count);

    for (int i = 0; i < team_count; i++) {
        printf("\n--- Team %d ---\n", i + 1);
        printf("  Team Name: %s\n", teams[i].team_name);
        printf("  Sport Type: %s\n", teams[i].sport_type);
        printf("  --- Coach Info ---\n");
        printf("    Name: %s\n", teams[i].coach_info.name);
        printf("    Age: %d\n", teams[i].coach_info.age);
        printf("    Experience: %d years\n", teams[i].coach_info.experience);
        printf("-----------------------\n");
    }
}


int main() {
    int choice;

    do {
        printf("\n\n--- CHARUSAT Sports Team Management System ---\n");
        printf("1. Add a New Team\n");
        printf("2. Search for a Team\n");
        printf("3. Display All Teams\n");
        printf("4. Exit\n");
        printf("--------------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &choice);
        clear_input_buffer();

        switch (choice) {
            case 1:
                add_team();
                break;
            case 2:
                search_team();
                break;
            case 3:
                display_all_teams();
                break;
            case 4:
                printf("\nExiting program. Goodbye!\n");
                break;
            default:
                printf("\nInvalid choice. Please enter a number between 1 and 4.\n");
        }
    } while (choice != 4);

    return 0;
}
