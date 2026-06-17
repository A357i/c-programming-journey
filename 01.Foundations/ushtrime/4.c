
    // 1. Lexo emrin dhe moshën
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // char name[50];
    // int age;

    // printf("Shkruaj emrin: ");
    // // scanf("%s", name);
    // fgets(name, 50, stdin);
    // name[strlen(name) - 1] = '\0';

    // printf("Mosha: ");
    // scanf("%d", &age); // Pse

    // printf("Pershendetje %s, Mosha juaj eshte %d vjec", name, age);


    // 2. Numër çift apo tek
    // int numer;

    // printf("Shkruaj nje numer: ");
    // scanf("%d", &numer);

    // if (numer % 2 == 0)
    // {
    //     printf("%d eshte cift\n", numer);
    // } else {
    //     printf("%d eshte tek\n", numer);
    // }
    
    // 3. Login System
    // char login[20];
    // char password[20];

    // printf("\nLogin: ");
    // fgets(login, 20, stdin);
    // login[strlen(login) - 1] = '\n';
    
    // printf("\nPassword: ");
    // fgets(password, 20, stdin);
    // password[strlen(password) - 1] = '\n';

    // if (strcmp(login, "admin") == 1 && strcmp(password, "1234") == 1)
    // {
    //     printf("Login Success\n");
    // } else {
    //     printf("Login Failed\n");
    // }    


    // 4. ATM i thjeshtë = bilansi,deposit,terhiq,  shfaq menu-n
    double balance;
    double deposit;
    int Terhiq;
    int option;

    printf("***Menu***");
    printf("\nbilansi: ");
    scanf("%lf", &balance);
    printf("\n1.Deposit: ");
    printf("\n2.Terhiq: ");
    printf("\noption: ");
    scanf("%d", &option);


    if (balance > 0)
    {
        if (option == 1)
        {
            printf("\nDeposit: ");
            scanf("%lf", &deposit);
            balance += deposit;
            printf("Bilansi i ri: %.2lf\n", balance);
        } else if (option == 2)
        {
            printf("\nTerhiq: ");
            scanf("%d", &Terhiq);
            if (Terhiq <= balance)
            {
                balance -= Terhiq;
            } else {
                printf("Nuk ke mjete te mjaftueshme per ta kryer kete transaksion.\n");
            }
            printf("Bilansi i ri: %.2lf\n", balance);
        } else {
            printf("\nZgjidhe njeren prej numrave 1-2");
        }
    }
    
    // 5. Nota e studentit
    // 6. Kontrollo moshën për patentë
    // 7. Username + Age (kombinim me &&)
}