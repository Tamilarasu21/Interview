/*
FULLY AUTOMATIC VENDING MACHINE dispenses your cup on just press of button. A vending machine can serve range of products as follows:

Coffee
1. Espresso Coffee
2. Cappuccino Coffee
3. Latte Coffee

Tea
1.Plain Tea
2.Assam Tea
3.Ginger Tea
4.Cardamom Tea
5.Masala Tea
6.Lemon Tea
7.Green Tea
8.Organic Darjeeling Tea

Soups
1.Hot and Sour Soup
2.Veg Corn Soup
3.Tomato Soup
4.Spicy Tomato Soup

Beverages
1.Hot Chocolate
2.Badam Drink
3.Badam-Pista Drink

Write a program to take input for main menu & sub menu and display the name of sub manu selected in following format(Enter the first letter to select main menu):

Welcome to CCD
Enjoy your < name of sub menu >

Test Case 1

Input :
c
1

Output :
Welcome to CCD!
Enjoy your Espresso Coffee!

Test Case 2

Input :
t
9

Output :
INVALID OPTION!
*/
#include <stdio.h>
int coffee(){
    int opt;
    scanf("%d",&opt);
    switch(opt){
        case 1:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Espresso Coffee!");
                break;
        case 2:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Cappuccino Coffee!");
                break;
        case 3:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Latte Coffee!");
                break;
        default:
                printf("INVALID OPTION!");
                break;
    }
}
int tea(){
    int opt;
    scanf("%d",&opt);
    switch(opt){
        case 1:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Plain Tea!");
                break;
        case 2:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Assam Tea!");
                break;
        case 3:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Ginger Tea!");
                break;
        case 4:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Cardamom Tea!");
                break;
        case 5:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Masala Tea!");
                break;
        case 6:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Ginger Tea!");
                break;
        case 7:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Lemon Tea!");
                break;
        case 8:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Organic Darjeeling Tea!");
                break;
        default:
                printf("INVALID OPTION!");
                break;
    }
}
int soups(){
    int opt;
    scanf("%d",&opt);
    switch(opt){
        case 1:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Hot and Sour Soup!");
                break;
        case 2:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Veg Corn Soup!");
                break;
        case 3:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Tomato Soup!");
                break;
        case 4:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Spicy Tomato Soup!");
                break;
        default:
                printf("INVALID OPTION!");
                break;
    }
}
int beverages(){
    int opt;
    scanf("%d",&opt);
    switch(opt){
        case 1:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Hot Chocolate!");
                break;
        case 2:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Badam Drink!");
                break;
        case 3:
                printf("Welcome to CCD!\n");
                printf("Enjoy your Badam-Pista Drink!");
                break;
        default:
                printf("INVALID OPTION!");
                break;
    }
}
int main(){
    char c;
    printf("Welcome to our Cafe\n");
    scanf("%c",&c);
    switch(c){
        case 'c':
                coffee();
                break;
        case 't':
                tea();
                break;
        case 's':
                soups();
                break;
        case 'b':
                beverages();
                break;
        default:
                printf("INVALID OPTION");
                break;
    }
    return 0;
}
