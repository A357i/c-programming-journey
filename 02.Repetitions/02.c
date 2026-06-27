// 📅 Dita 2 – while (kontroll input-i)

// Qëllimi: kontroll i përdoruesit

#include <stdio.h>
#include <string.h>

int main(){
    // 1. Program që nuk pranon input bosh (emër).
    // char name[50] = "";

    // printf("Shkruaj emrin: ");
    // fgets(name, sizeof(name), stdin);
    // name[strcspn(name, "\n")] = '\0';

    // while (strlen(name) == 0)
    // {
    //     printf("Emri yt nuk mund te jete bosh. Ju lutem shenoni emrin: ");
    //     fgets(name, sizeof(name), stdin);
    //     name[strcspn(name, "\n")] = '\0';
    // }
    // printf("Pershendetje %s!", name);

    // 2. Program që kërkon password derisa të jetë i saktë.
    // char username[25] = "";
    // char password[25] = "";

    // printf("Sheno Username: ");
    // fgets(username, sizeof(username), stdin);
    // username[strcspn(username, "\n")] = '\0';

    // printf("Sheno passwordin: ");
    // fgets(password, sizeof(password), stdin);
    // password[strcspn(password, "\n")] = '\0';

    // while (strcmp(password, "123456") != 0)             // Vazhdo loop-in derisa passwordi NUK është i barabartë me ‘123456’.
    // {
    //     printf("Keni shenuar passwordin e pasaktë: ");
    //     fgets(password, sizeof(password), stdin);
    //     password[strcspn(password, "\n")] = '\0';
    // }
    // printf("Welcome to the system, %s", username);

    // 3. Program që përsërit pyetjen “A do të vazhdosh?” derisa përdoruesi të shkruajë “jo”.
    char TextInput[25] = "";

    while ((strcmp(TextInput, "Jo")) != 0 && (strcmp(TextInput, "jo")) != 0)
    {
        printf("A do të vazhdosh: ");
        fgets(TextInput, sizeof(TextInput), stdin);
        TextInput[strcspn(TextInput, "\n")] = '\0';
    }
    printf("Keni mbaruar me sukses :D");
}

// Mendohu: pse këto raste quhen “validation loops”?
// Një loop përdoret për të validuar inputin ,
// derisa ai të përmbushë një set rregullash të vendosura!

// Ma thjesht
// programi nuk pranon input të gabuar
// dhe e kërkon prapë derisa të jetë korrekt !