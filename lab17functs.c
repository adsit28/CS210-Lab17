/** lab17functs.c
* ===========================================================
* Name: 
* Section:
* Project: Lab 17
* Purpose: 
* ===========================================================
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int loadVals(int array[]){
    int place = 0;
    int userIn = 0;

    while(userIn >= 0){
        printf("Enter a value (negative value to end): ");
        scanf("%d", &userIn);
        if (userIn < 0){
            return place;
        }
        else{
            array[place] = userIn;
            place++;
        }
    }
    return place;
}

void reversePrint(int array[], int size){
    size = size + 2;
    while(size >= 0){
        size = (size - 2);
        if(size >= 0){
            printf("%d\n", array[size]);
        }
        }
        
}

int countVowels(char array[]){
    int sizeStr = strlen(array);
    int numVowels = 0;

    for(int i = 0; i < sizeStr; i++){
        switch (array[i]){
            case 'a':
                numVowels++;
                break;
            case 'e':
                numVowels++;
                break;
            case 'i':
                numVowels++;
                break;
            case 'o':
                numVowels++;
                break;
            case 'u':
                numVowels++;
                break;
            case 'y':
                numVowels++;
                break;
            default:
            numVowels = numVowels;

        }
    }
    return numVowels;

}

int analyzeValues(double array[], int size){
    double average = 0.0;
    double squared = 0.0;
    double temp = 0.0;
    double std = 0.0;
    int numIn = 0;

    for(int i = 0; i < size; i++){
        average = average + array[i];
    }
    average = average/size;

    for(int i = 0; i < size; i++){
        temp = pow((array[i] - average), 2);
        squared = squared + temp;
    }
    std = sqrt(squared/size);

    for(int i = 0; i < size; i++){
        if(array[i] > average - std && array[i] < average + std){
            numIn++;
        }
    }
    return numIn;
}

int performOperation(char sym, int first, int second){
    int outcome = 0;
    switch (sym){
        case '+':
            outcome = first + second;
            break;
        case '-':
            outcome = first - second;
            break;
        case '*':
            outcome = first * second;
            break;
        case '/':
            outcome = first / second;
            break;
        default:
            break;
    }
    return outcome;
}

void getMinMax(int array[], int size, int* min, int* max){
    int tempMin = 1000000;
    int tempMax = -1000000;
    for(int i = 0; i < size; i++){
        if(array[i] > tempMax){
            tempMax = array[i];
        }
        if(array[i] < tempMin){
            tempMin = array[i];
        }
    }
    *min = tempMin;
    *max = tempMax;

}