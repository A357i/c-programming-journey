#include <stdio.h>
#include <string.h>

int main(){
    // Project 2: Login system username + password check

    char username[20];
    char password[20];

    printf("Username: ");
    scanf("%s", username);
    printf("Password: ");
    scanf("%s", password);

    if (strcmp(username, "admin") == 0 && strcmp(password, "1234") == 0)
    {
        printf("U kyqet me sukses");
    } else {
        printf("Keni perdorur username/fjalekalim te gabueshem!");
    }
    
}