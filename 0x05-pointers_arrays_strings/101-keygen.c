#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random valid password for the program.
 * @length: The length of the password to generate.
 *
 * Return: A dynamically allocated string containing the generated password.
 *         The caller is responsible for freeing the memory.
 */
char *generate_password(int length)
{
    static const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_length = sizeof(charset) - 1;
    int i;
    char *password;
    int random_index;

    srand(time(NULL)); /* Seed the random number generator */

     password = (char *)malloc((length + 1) * sizeof(char));
    if (password == NULL)
    {
        fprintf(stderr, "Memory allocation error\n");
        exit(1);
    }

    for (i = 0; i < length; i++)
    {
        random_index = rand() % charset_length;
        password[i] = charset[random_index];
    }
    password[length] = '\0';

    return password;
}

int main(void)
{
    int password_length = 10; /* You can change the password length as needed */
    char *password;

    password = generate_password(password_length);
    printf("Generated password: %s\n", password);

    free(password);

    return 0;
}
