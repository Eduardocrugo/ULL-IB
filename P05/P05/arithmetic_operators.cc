#include <iostream>
#include <string>

int main()
{
    int numero1 = 7;
    int numero2 = 3;
    int resultadosuma = numero1 + numero2;
    int resultadoresta = numero1 - numero2;
    int rusultadodivision = numero1 / numero2;
    int rusultadomult = numero1 * numero2;
    int rusultadomodulo = numero1 % numero2;
    bool resultadoigual = numero1 == numero2;
    bool resultadodistinto = numero1 != numero2;
    bool resultadomayor = numero1 > numero2;
    bool resultadomayorigual = numero1 >= numero2;
    bool resultadomenor = numero1 < numero2;
    bool resultadomenorigual = numero1 <= numero2;
    std::string resultado1 = "Resultado suma: " + std::to_string(resultadosuma) + '\n';
    std::string resultado2 = "Resultado resta: " + std::to_string(resultadoresta) + '\n';
    std::string resultado3 = "Resultado div: " + std::to_string(rusultadodivision) + '\n';
    std::string resultado4 = "Resultado mult: " + std::to_string(rusultadomult) + '\n';
    std::string resultado5 = "Resultado modulo: " + std::to_string(rusultadomodulo) + '\n';
    std::string resultado_final = resultado1 + resultado2 + resultado3 + resultado4 + resultado5;
    std::string comparar1 = "¿Es numero1 = numero2?: " + std::to_string(resultadoigual) + '\n';
    std::string comparar2 = "¿Es numero1 distinto de numero2?: " + std::to_string(resultadodistinto) + '\n';
    std::string comparar3 = "¿Es numero1 mayor que numero2?: " + std::to_string(resultadomayor) + '\n';
    std::string comparar4 = "¿Es numero1 mayor o igual que numero2?: " + std::to_string(resultadomayorigual) + '\n';
    std::string comparar5 = "¿Es numero1 menor que numero2?: " + std::to_string(resultadomenor) + '\n';
    std::string comparar6 = "¿Es numero1 menor o igual que de numero2?: " + std::to_string(resultadomenorigual) + '\n';
    std::string resultado_comparar = comparar1 + comparar2 + comparar3 + comparar4 + comparar5 + comparar6 ;
    std::cout << resultado_final << resultado_comparar;
}