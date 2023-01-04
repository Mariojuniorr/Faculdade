/*Fac¸a uma func¸ao que receba uma temperatura em graus Celsius e retorne-a convertida ˜
em graus Fahrenheit. A formula de convers ´ ao˜ e:´ F = C ∗ (9.0/5.0) + 32.0, sendo F a
temperatura em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>
#include <stdlib.h>

float Fahrenheit(float C){
    float F;
    F = C * (9.0/5.0) + 32.0;
    return F;
}

int main(){
    float Celsius;
    printf("Digite uma temperatura em Celsius: ");
    scanf("%f", &Celsius);

    printf("%0.2f°C são %0.2f°F", Celsius, Fahrenheit(Celsius));
}