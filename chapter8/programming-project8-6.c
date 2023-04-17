#include <ctype.h>
#include <stdio.h>

/* The prototypical Internet newbie is a fellow named B1FF, who has a unique way of writing messages. here's a typical
 * B1FF comunique: H3Y DUD3, C15 R1LLY C00L!!!!!!!!!!! Write a "B1FF filter" that reads a message entered by the user
 * and translates it into B1FF-speak: Enter message: Hey dude, C is rilly cool In B1FF-speak: H3Y DUD3, C 15 R1LLY
 * C00L!!!!!!!!!!
 */

#define MAXLEN 1000
int main()
{
    int i;
    char c, message[MAXLEN], b1ffed[MAXLEN];
    printf("Enter message: ");
    /* conversion specifier below makes scanf read up until newline character and include whitespace */
    scanf("%[^\n]", message);

    i = 0;
    while ((c = toupper(message[i])) != '\0') {
        switch (c) {
            case 'A':
                c = '4';
                break;
            case 'B':
                c = '8';
                break;
            case 'E':
                c = '3';
                break;
            case 'I':
                c = '1';
                break;
            case 'O':
                c = '0';
                break;
            case 'S':
                c = '5';
                break;
            default:
                break;
        }

        b1ffed[i++] = c;
    }

    b1ffed[i] = '\0';
    printf("In B1FF-speak: %s!!!!!!!!!!!!\n", b1ffed);
}
