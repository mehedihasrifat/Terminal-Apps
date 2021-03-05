// "Curious Converter" (PN)--> Project Name
// Created by Mehedi Hasan Rifat on March 4, 2021
// Thanks!;)
/*
    KMs to Miles (km2mil)<-- function
    Inches to Feet (in2fe)<-- function
    CMs to Inches (cm2in)<-- function
    Pounds to KGs (po2kg)<-- function
    Inches to Meters (in2met)<-- function
*/
#include <stdio.h>

float km2mil(float km) {
    float mil = 0.621427;
    float result = km * mil;
    return result;
}

float in2fe(float in) {
    float fe = 0.083333;
    float result = in * fe;
    return result;
}

float cm2in(float cm) {
    float in = 0.393701;
    float result = cm * in;
    return result;
}

float po2kg(float po) {
    float kg = 0.453592;
    float result = po * kg;
}

float in2met(float in) {
    float met = 0.0254;
    float result = in * met;
    return result;
}

int main() {
    int op_no, attempt = 0;
    float ans, km, in, cm, po;
    char ch;
    printf("\nYou want to convert something right?:D\n");
    printf("We have 5 options to convert!:D\n\n");
        
    AGAIN:    
        printf("\nType 1 to convert--> 'KMs to Miles\'\n");
        printf("Type 2 to convert--> 'Inches to Feet\'\n");
        printf("Type 3 to convert--> 'CMs to Inches\'\n");
        printf("Type 4 to convert--> 'Pounds to KGs\'\n");
        printf("Type 5 to convert--> 'Inches to Meters\'\n\n");

        ON: 
            printf("Option No: ");
            scanf("%d", &op_no);
            if (op_no == 1) {
                attempt = 0;
                printf("\nKMs: ");
                scanf("%f", &km);
                ans = km2mil(km);
                printf("Miles: %f\n\n", ans);
            } else if (op_no == 2) {
                attempt = 0;
                printf("\nInches: ");
                scanf("%f", &in);
                ans = in2fe(in);
                printf("Feet: %f\n\n", ans);
            } else if (op_no == 3) {
                attempt = 0;
                printf("\nCMs: ");
                scanf("%f", &cm);
                ans = cm2in(cm);
                printf("Inches: %f\n\n", ans);
            } else if (op_no == 4) {
                attempt = 0;
                printf("\nPounds: ");
                scanf("%f", &po);
                ans = po2kg(po);
                printf("KGs: %f\n\n", ans);
            } else if (op_no == 5) {
                attempt = 0;
                printf("\nInches: ");
                scanf("%f", &in);
                ans = in2met(in);
                printf("Meters: %f\n\n", ans);
            } else {
                printf("\nWrong input!\n");
                printf("Type again!\n\n");
                attempt++;
                if (attempt == 3) {
                    printf("\nYou did 3 wrong attempts!:(\n\n");
                    printf("BTW, Thanks for using this software!;) @MehediHasanRifat\n");
                    return 0;
                }
                goto ON;
            }
    printf("Again want to convert something?\n");
    printf("(y/n): ");
    scanf(" %c", &ch);
    if (ch == 'y') {
        goto AGAIN;
    } else if (ch == 'n') {
        printf("\nThanks for using this software!;) @MehediHasanRifat\n");
        return 0;
    } else {
        printf("\nThanks for using this software!;) @MehediHasanRifat\n");
        return 0;
    }
    return 0;
}