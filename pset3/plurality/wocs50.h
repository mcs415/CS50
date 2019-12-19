// #include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    //replaced string with char
    char name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
//replaced this with with char instead of cs50 string. Help below!
// Bool vote(char *name);
void print_winner(void);

int main(int argc, char * * argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n Please Provide command line arguments");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        //replaced this with with char instead of cs50 string. Help below!
        printf("Argument: #%d = %c\n", i, candidates[i].name);
    }
    //string name = get_string("Vote: ");
    //replaced this with with char instead of cs50 library: string. Help below!
    int voter_count;
    scanf("%i", &voter_count);
    // Loop over all voters

    for (int i = 0; i < voter_count; i++)
    {
        //string name = get_string("Vote: ");
        //replaced this with with char instead of cs50 string. Help below!
        char name[64];
        printf("Vote\n");
        fgets(name, 64, stdin);
        // Check for invalid vote
        // if (!vote(name))
        // {
        //     printf("Invalid vote.\n");
        // }
        printf("%s", name);
    }

    return 0;
}
