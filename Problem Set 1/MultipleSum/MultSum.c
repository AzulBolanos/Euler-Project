/*
    S1 P1: Multiples of 3 and 5            By: Azul Bolanos
    Program outputs the sum of all natural numbers below x that are multiples of 3 and 5
*/


int main(int argc, cahr *argv []){
    int x; 
    if(argc != 1){
        printf("Enter a range value: ");
        scanf("%d", &x);
    }

    
}

int get3and5MultSum(int range){
    int sum = 0;
    if(range < 0){
        printf("Incorrect range. Program only handles natural numbers.");
        return -1;
    }
    return getMultSum(range, 3) + getMultSum(range, 5) - getMultSum(range, 15)
    
}

int getMultSum(int range, int mult){
    if(mult == 0){
        printf("Err: Multiple value of 0.");
        return -1;
    }
    //formula derived in notes
    return ((range * range) + range * mult) / (2 * mult);
}


