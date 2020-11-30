/* imprimir a tabela de conversão Fahreinth-Celsius para f=0,20,300, ...
*/

main()
{
    int inicio, fim, incr;
    float fahr, celsius;

    inicio = 0;
    fim = 300;
    incr = 20;

    fahr = inicio;
    printf("Conversão de Fahrenheit in Celsius\n");
    
    while (fahr <= fim) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%4.0f %6.1f\n", fahr, celsius);
        fahr = fahr + incr;
        
    }
}
