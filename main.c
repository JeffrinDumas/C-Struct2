#include <stdio.h>
#include <stdlib.h>


struct Person {

   char  Name[50];

   char  Address[50];

   char  Street[100];

   char   StreetNumber[100];

   char Age[21];
};


int main()
{

   char  Name[50];

   char  Address[50];

   char  Street[100];

   char   StreetNumber[100];

   char   Age[21];

   struct Person Person1;

   struct Person Person2;

    printf("Enter your name: ");
    gets(Name);
    strcpy(Person1.Name, Name);

    printf("Enter your address: ");
    gets(Address);
    strcpy( Person1.Address, Address);

    printf("Enter your street-name: ");
    gets(Street);
    strcpy( Person1.Street, Street);

    printf("Enter your street-number: ");
    gets(StreetNumber);
    strcpy( Person1.StreetNumber, StreetNumber);

    printf("Enter your age: ");
    gets(Age);
    strcpy( Person1.Age, Age);

    printf("Enter your name: ");
    gets(Name);
    strcpy(Person2.Name, Name);

    printf("Enter your address: ");
    gets(Address);
    strcpy( Person2.Address, Address);

    printf("Enter your street-name: ");
    gets(Street);
    strcpy( Person2.Street, Street);

    printf("Enter your street-number: ");
    gets(StreetNumber);
    strcpy( Person2.StreetNumber, StreetNumber);

    printf("Enter your age: ");
    gets(Age);
    strcpy( Person2.Age, Age);


   printf( "The first persons name is : %s\n", Person1.Name);

   printf( "And his Address is %s\n", Person1.Address);

   printf( "He lives at  : %s\n", Person1.Street);

   printf( "On number : %s\n", Person1.StreetNumber);

   printf( "And he is : %s\n", Person1.Age);


   printf( "The Second persons name is : %s\n", Person2.Name);

   printf( "And his Address is %s\n", Person2.Address);

   printf( "He lives at  : %s\n", Person2.Street);

   printf( "On number : %s\n", Person2.StreetNumber);

   printf( "And he is : %s\n", Person2.Age);


    getchar();
    return 0;

}
