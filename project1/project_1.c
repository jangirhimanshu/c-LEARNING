#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 1;
    int guessed_number;
    // Print the generated random number
    printf("Random Number: %d\n", randomNumber);
    printf("Guesse the number between 1 and 100 \n");  
    scanf("%d", &guessed_number);
    do
    {

        if (guessed_number < randomNumber)
        {
            printf("guesse the higher number please!\n");
            scanf("%d", &guessed_number);
        }
        else if (guessed_number > randomNumber)
        {
            printf("guesse lower number please!\n");
            scanf("%d", &guessed_number);
        }

        no_of_guesses++;
    } while (guessed_number != randomNumber);
    printf("congrats!!!\n");
    printf("you guessed the number in %d guesses\n", no_of_guesses);
    printf("AND THE NUMBER IS %d", randomNumber);

    return 0;
}

/*
explain of genrate random between 1 to 100
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    // Print the generated random number
    printf("Random Number: %d\n", randomNumber);

    return 0;
}

Explanation:
srand(time(0)) initializes the random number generator with the current time to ensure different outputs on each run.
rand() % 100 + 1 generates a number in the range [1, 100]. The % 100 ensures the number is between 0 and 99, and adding 1 shifts it to [1, 100].
Let me know if you need modifications! 🚀
AND FOR MORE INFORMATION DO CHATGPT

*/
/*
Explanation of all above code do chatgpt in hindi...
*/