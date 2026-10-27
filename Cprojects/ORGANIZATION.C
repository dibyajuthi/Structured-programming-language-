
#include <stdio.h>

struct Organization
{
    char name[50];
    char location[50];
    int employees;
    char workField[50];
};

int compareIgnoreCase(char a[], char b[])
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0')
    {
        char x = a[i];
        char y = b[i];

        if (x >= 'A' && x <= 'Z')
            x = x + 32;

        if (y >= 'A' && y <= 'Z')
            y = y + 32;

        if (x != y)
            return 0;

        i++;
    }

    return a[i] == '\0' && b[i] == '\0';
}

void searchOrganization(struct Organization org[], int n)
{
    char search[50];
    int found = 0;

    printf("\nEnter organization name: ");

    if (fgets(search, sizeof(search), stdin) == NULL)
        return;

    int i = 0;

    while (search[i] != '\0' && search[i] != '\n')
        i++;

    if (search[i] == '\n')
        search[i] = '\0';

    if (search[0] == '\0')
    {
        printf("Please enter a name!\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (compareIgnoreCase(org[i].name, search))
        {
            printf("\n--- Organization Found ---\n");
            printf("Name       : %s\n", org[i].name);
            printf("Location   : %s\n", org[i].location);
            printf("Employees  : %d\n", org[i].employees);
            printf("Work Field : %s\n", org[i].workField);

            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nOrganization not found!\n");
}

void showAllOrganizations(struct Organization org[], int n)
{
    printf("\n===== All Organizations =====\n");

    for (int i = 0; i < n; i++)
    {
        printf("\nOrganization %d\n", i + 1);
        printf("Name       : %s\n", org[i].name);
        printf("Location   : %s\n", org[i].location);
        printf("Employees  : %d\n", org[i].employees);
        printf("Work Field : %s\n", org[i].workField);
    }
}

int main()
{
    struct Organization org[4] = {
        {"Google", "USA", 180000, "Technology"},
        {"Microsoft", "USA", 220000 , "Software"},
        {"Samsung", "South Korea", 260000, "Electronics"},
        {"Grameenphone", "Bangladesh", 5000,
         "Telecommunications"}};

    int choice;

    do
    {
        printf("\n========================================\n");
        printf("    ORGANIZATION INFORMATION SYSTEM\n");
        printf("========================================\n");
        printf("1. Search Organization\n");
        printf("2. Show All Organizations\n");
        printf("3. Exit\n");
        printf("----------------------------------------\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("\nInvalid input! Enter 1, 2 or 3.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF)
            {
            }

            continue;
        }

        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
        {
        }

        switch (choice)
        {
        case 1:
            searchOrganization(org, 4);
            break;

        case 2:
            showAllOrganizations(org, 4);
            break;

        case 3:
            printf("\nThank you for using our system!\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
