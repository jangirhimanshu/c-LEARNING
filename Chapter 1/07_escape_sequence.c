#include <stdio.h>

int main(){
    int a;
    char ch = 'a';
    ch = 'c';
    ch = '\n'; // represents a new line
    printf("Hey I am good \\n nice");
    return 0;
    /*
    
    \n – Newline
Moves the cursor to the next line.

\t – Horizontal Tab
Inserts a horizontal tab space.

\\ – Backslash
Represents a backslash (\) character.

\" – Double Quote
Allows a double quote (") to appear inside a string literal.

\r – Carriage Return
Moves the cursor to the beginning of the current line without advancing to the next.

\a – Alert (Bell)
Triggers an alert or bell sound (if supported by the system).

\b – Backspace
Moves the cursor one position back, effectively deleting the previous character.

\f – Form Feed
Advances the cursor to the next page (mainly used in old printers).

\v – Vertical Tab
Moves the cursor to the next vertical tab stop.

\? – Question Mark
Used to escape a question mark, avoiding ambiguity in certain sequences.

\0 – Null Character
Represents the null terminator that marks the end of a string in C.

THIS ALL ARE THE ESCAPES SEQUENCE CHARACTER*/
}