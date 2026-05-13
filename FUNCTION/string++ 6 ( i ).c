/*
6. Write a C Program to store the following information about international athletes and find
the “Athlete of the Year”:

i) Create a structure named Athlete with the following members:
● name (string of length 50)
● country (string of length 50)
● sport (string of length 30)
● events_participated (in an array for the last 30 events)
● medals_won (in an array indicating the count of each type of medal won in the last 30
events, e.g., gold, silver, bronze)
● total_events (int for the last year)
● overall_performance_score (float)

*/


#include <stdio.h>
#include <string.h>

#define MAX_ATHLETES 5
#define MAX_EVENTS 30

// i) Structure Definition
struct Athlete {
    char name[50];
    char country[50];
    char sport[30];
    int events_participated[MAX_EVENTS];     // event numbers or IDs
    int medals_won[MAX_EVENTS][3];           // [i][0]=gold, [i][1]=silver, [i][2]=bronze
    int total_events;
    float overall_performance_score;
};

// Function to calculate performance score
float calculate_score(struct Athlete *a) {
    int total_gold = 0, total_silver = 0, total_bronze = 0;

    for (int i = 0; i < a->total_events; i++) {
        total_gold += a->medals_won[i][0];
        total_silver += a->medals_won[i][1];
        total_bronze += a->medals_won[i][2];
    }

    // Weighted score: gold = 3 pts, silver = 2 pts, bronze = 1 pt
    return (total_gold * 3.0f + total_silver * 2.0f + total_bronze * 1.0f);
}

int main()
{
    struct Athlete athletes[MAX_ATHLETES];
    int n;

    printf("Enter number of athletes (max %d): ", MAX_ATHLETES);
    scanf("%d", &n);
    getchar(); // flush newline

    if (n <= 0 || n > MAX_ATHLETES) {
        printf("Invalid number of athletes.\n");
        return 1;
    }

    // Input for each athlete
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Athlete %d:\n", i + 1);

        printf("Name: ");
        fgets(athletes[i].name, sizeof(athletes[i].name), stdin);
        athletes[i].name[strcspn(athletes[i].name, "\n")] = '\0';

        printf("Country: ");
        fgets(athletes[i].country, sizeof(athletes[i].country), stdin);
        athletes[i].country[strcspn(athletes[i].country, "\n")] = '\0';

        printf("Sport: ");
        fgets(athletes[i].sport, sizeof(athletes[i].sport), stdin);
        athletes[i].sport[strcspn(athletes[i].sport, "\n")] = '\0';

        printf("Enter number of events participated (max %d): ", MAX_EVENTS);
        scanf("%d", &athletes[i].total_events);

        if (athletes[i].total_events <= 0 || athletes[i].total_events > MAX_EVENTS) {
            printf("Invalid number of events.\n");
            return 1;
        }

        for (int j = 0; j < athletes[i].total_events; j++) {
            printf("Event %d - Enter medals (gold silver bronze): ", j + 1);
            scanf("%d %d %d",
                  &athletes[i].medals_won[j][0],
                  &athletes[i].medals_won[j][1],
                  &athletes[i].medals_won[j][2]);
            athletes[i].events_participated[j] = j + 1;
        }

        // Calculate score
        athletes[i].overall_performance_score = calculate_score(&athletes[i]);
    }

    // Determine Athlete of the Year
    int best_index = 0;
    for (int i = 1; i < n; i++) {
        if (athletes[i].overall_performance_score > athletes[best_index].overall_performance_score) {
            best_index = i;
        }
    }

    // Display Athlete of the Year
    printf("\n🏆 Athlete of the Year:\n");
    printf("Name: %s\n", athletes[best_index].name);
    printf("Country: %s\n", athletes[best_index].country);
    printf("Sport: %s\n", athletes[best_index].sport);
    printf("Total Events: %d\n", athletes[best_index].total_events);
    printf("Overall Performance Score: %.2f\n", athletes[best_index].overall_performance_score);

    return 0;
}
