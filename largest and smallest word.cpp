#include <stdio.h>
#include <string.h>
void findLargestAndSmallestWords(char sentence[]) 
{
    char largestWord[100], smallestWord[100];
    int largestLen = 0, smallestLen = 100;
    char *token = strtok(sentence, " ");
    while (token != NULL) 
	{
        int len = strlen(token);
        if (len > largestLen) 
		{
            strcpy(largestWord, token);
            largestLen = len;
        }
        if (len < smallestLen) 
		{
            strcpy(smallestWord, token);
            smallestLen = len;
        }
        token = strtok(NULL, " ");
    }
    printf("Largest word: %s\n", largestWord);
    printf("Smallest word: %s\n", smallestWord);
}
int main() {
    char sentence[500];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strlen(sentence) - 1] = '\0'; 
    findLargestAndSmallestWords(sentence);
    return 0;
}