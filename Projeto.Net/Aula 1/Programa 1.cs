// See https://aka.ms/new-console-template for more information

public class Programa{
       
    static void Main()
{

    /*1*/
    Console.WriteLine("Digite a largura do lote:");
    double largura= Convert.ToDouble(Console.ReadLine());

    Console.WriteLine("Digite o comprimento do lote:");
    double comprimento= Convert.ToDouble(Console.ReadLine());

    double area= largura * comprimento;

    Console.WriteLine("A area do terrreno é:"+ area+" mestros quadrados");

    /*2*/

    Console.WriteLine("Digite a quatidade de cavalos:");
    int cavalos=Convert.ToInt16(Console.ReadLine());

    int ferraduras= cavalos *4;
    Console.WriteLine("Serão necessários "+ferraduras+"ferraduras,para ferrar "+cavalos+" cavalos");

    /*3*/
    Console.WriteLine("Digite seu nome");
    string nome= Console.ReadLine();

    Console.WriteLine("Digite a sua idade");
    int idade= Convert.ToInt16(Console.ReadLine());

    int dias= idade*365;

    Console.WriteLine(nome.ToUpper()+" você já viveu "+dias+" dias de vida.");

}
}

