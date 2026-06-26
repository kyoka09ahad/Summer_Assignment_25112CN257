//Write a program to Create voting eligibility system.

#include <stdio.h>
#include <string.h>

#define MAX 100

struct Voter
{
    int voterID;
    char name[50];
    int day, month, year;
    int age;
    char citizenship[20];
    int eligible;
};

struct Voter voters[MAX];
int count = 0;
int nextID = 1001;

int calculateAge(int day, int month, int year)
{
    int currentDay = 26;
    int currentMonth = 6;
    int currentYear = 2026;

    int age = currentYear - year;

    if (month > currentMonth || (month == currentMonth && day > currentDay))
        age--;

    return age;
}

void registerVoter()
{
    if(count == MAX)
    {
        printf("Database Full!\n");
        return;
    }

    struct Voter *v = &voters[count];

    v->voterID = nextID++;

    getchar();

    printf("Enter Name: ");
    fgets(v->name, sizeof(v->name), stdin);
    v->name[strcspn(v->name, "\n")] = '\0';

    printf("Enter Date of Birth (DD MM YYYY): ");
    scanf("%d %d %d", &v->day, &v->month, &v->year);

    v->age = calculateAge(v->day, v->month, v->year);

    printf("Enter Citizenship (Indian/Other): ");
    scanf("%s", v->citizenship);

    if(v->age >= 18 && strcmp(v->citizenship, "Indian") == 0)
        v->eligible = 1;
    else
        v->eligible = 0;

    printf("\nRegistration Successful!\n");
    printf("Generated Voter ID: %d\n", v->voterID);

    count++;
}

void searchVoter()
{
    int id;

    printf("Enter Voter ID: ");
    scanf("%d", &id);

    for(int i=0;i<count;i++)
    {
        if(voters[i].voterID==id)
        {
            printf("\nVoter Found\n");
            printf("ID : %d\n", voters[i].voterID);
            printf("Name : %s\n", voters[i].name);
            printf("Age : %d\n", voters[i].age);
            printf("Citizenship : %s\n", voters[i].citizenship);

            if(voters[i].eligible)
                printf("Status : Eligible\n");
            else
                printf("Status : Not Eligible\n");

            return;
        }
    }

    printf("Voter Not Found!\n");
}

void displayAll()
{
    if(count==0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\n---------------------------------------------------------------\n");
    printf("ID\tName\t\tAge\tCitizenship\tStatus\n");
    printf("---------------------------------------------------------------\n");

    for(int i=0;i<count;i++)
    {
        printf("%d\t%-15s%d\t%-10s\t%s\n",
               voters[i].voterID,
               voters[i].name,
               voters[i].age,
               voters[i].citizenship,
               voters[i].eligible ? "Eligible" : "Not Eligible");
    }
}

void updateVoter()
{
    int id;

    printf("Enter Voter ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(voters[i].voterID==id)
        {
            getchar();

            printf("Enter New Name: ");
            fgets(voters[i].name,sizeof(voters[i].name),stdin);
            voters[i].name[strcspn(voters[i].name,"\n")] = '\0';

            printf("Enter New DOB (DD MM YYYY): ");
            scanf("%d%d%d",&voters[i].day,&voters[i].month,&voters[i].year);

            voters[i].age = calculateAge(voters[i].day,voters[i].month,voters[i].year);

            printf("Enter Citizenship: ");
            scanf("%s",voters[i].citizenship);

            voters[i].eligible = (voters[i].age>=18 &&
                                 strcmp(voters[i].citizenship,"Indian")==0);

            printf("Record Updated Successfully!\n");
            return;
        }
    }

    printf("Voter Not Found!\n");
}

void deleteVoter()
{
    int id;

    printf("Enter Voter ID: ");
    scanf("%d",&id);

    for(int i=0;i<count;i++)
    {
        if(voters[i].voterID==id)
        {
            for(int j=i;j<count-1;j++)
                voters[j]=voters[j+1];

            count--;

            printf("Record Deleted Successfully!\n");
            return;
        }
    }

    printf("Voter Not Found!\n");
}

void statistics()
{
    int eligible=0,ineligible=0;

    for(int i=0;i<count;i++)
    {
        if(voters[i].eligible)
            eligible++;
        else
            ineligible++;
    }

    printf("\nTotal Voters      : %d\n",count);
    printf("Eligible Voters   : %d\n",eligible);
    printf("Ineligible Voters : %d\n",ineligible);
}

int main()
{
    int choice;

    do
    {
        printf("\n===== Voting Eligibility System =====\n");
        printf("1. Register Voter\n");
        printf("2. Search Voter\n");
        printf("3. Display All Voters\n");
        printf("4. Update Voter\n");
        printf("5. Delete Voter\n");
        printf("6. Statistics\n");
        printf("7. Exit\n");

        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                registerVoter();
                break;

            case 2:
                searchVoter();
                break;

            case 3:
                displayAll();
                break;

            case 4:
                updateVoter();
                break;

            case 5:
                deleteVoter();
                break;

            case 6:
                statistics();
                break;

            case 7:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=7);

    return 0;
}