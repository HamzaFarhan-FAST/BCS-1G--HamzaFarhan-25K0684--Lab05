#include <stdio.h>

int main() {
   
    char room, action;
    printf("Which room you have to select: ");
    scanf(" %c", &room);
    printf("Which action you want to happen: ");
    scanf(" %c", &action);

    switch (room)
    {
    case 'l':
        switch (action)
        {
        case 'l':
            printf("Adjusting ambient lighting");
            break;
        case 't':
            printf("Setting living room temperature");
            break;
        default:
            break;
        }
        break;
    case 'k':
        switch (action)
        {
        case 'l':
            printf("Turning on bright task lighting");
            break;
        case 't':
            printf("Setting kitchen temperature");
            break;
        default:
            break;
        }
        break;

    default:
        break;
    }

}
