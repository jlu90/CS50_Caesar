#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int counter;
int key;

int main(int argc, string argv[])
{
    counter = 0;
    if (argc == 2)
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (isdigit(argv[1][i]))
            {
                counter += 0;
            }
            else
            {
                counter += 1;
                return 1;
            }
        }
        if (counter == 0)
        {
            printf("Success\n");
            printf("%s\n", argv[1]);
            string plaintext = get_string("Please provide a secret message: ");

            key = atoi(argv[1]);
            if (key > 26)
            {
                key = key % 26;
            }

            printf("ciphertext: ");

            for (int i = 0, n = strlen(plaintext); i < n; i++)
            {

                if ((int) plaintext[i] >= 65 && (int) plaintext[i] <= 90)
                {
                    if (plaintext[i] + key > 90)
                    {
                        printf("%c", 64 + (key - (90 - plaintext[i])));
                    }
                    else
                    {
                        printf("%c", plaintext[i] + key);
                    }
                }

                else if ((int) plaintext[i] >= 97 && (int) plaintext[i] <= 122)
                {
                    if (plaintext[i] + key > 122)
                    {
                        printf("%c", 96 + (key - (122 - plaintext[i])));
                    }
                    else
                    {
                        printf("%c", plaintext[i] + key);
                    }
                }

                else
                {
                    printf("%c", plaintext[i]);
                }

            }
            printf("\n");
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}