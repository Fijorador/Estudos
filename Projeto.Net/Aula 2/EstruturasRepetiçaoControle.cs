public class EstruturasRepetiçaoControle{
    static void Main(string[] args){
  
 int[] resultado_mega = {10, 29, 40, 53, 69, 78};

      int[] palpite_mega = new int[6];

      int n=0, numRepetido = 0;

      string entrada_usuario;

        for(int p = 0; p<palpite_mega.Count(); p++)
        {
            Console.WriteLine("Digite o valor do seu " + (p+1) + " palpite: ");
            entrada_usuario = Console.ReadLine();
            n = int.Parse(entrada_usuario);

            if ((n > 0) && (n < 100))//intervalo da mega sena
            {
                palpite_mega[p] = n;
                n = 0;
                entrada_usuario = "";            
            }
            else
            {
                Console.WriteLine("Numero inválido. Repita a operação utilizando numeros maiores que 0 e menores do que 100.");
                break;
            } 
            
        }
        for(int i = 0; i<palpite_mega.Count(); i++)
        {
            for(int j = i+1; j < palpite_mega.Count(); j++)
            {
                if(palpite_mega[i] == palpite_mega[j])
                {
                    numRepetido = 1;
                }
            }
        }
        if(numRepetido == 1)
        {
            Console.WriteLine("NUMEROS IGUAIS DIGITADOS. FAVOR REPETIR A OPERAÇÃO.");
        }else if (palpite_mega[5] == 0)
        {
            Console.WriteLine("REPITA A OPERAÇÃO.");
        }else
        {
            Console.WriteLine("O palpite digitado foi");
            for (int p = 0; p < palpite_mega.Count(); p++)
            {

                Console.Write("\t" + palpite_mega[p]);
            }
        }
    }
    public override bool Equals(object? obj)
    {
        return base.Equals(obj);
    }

    public override int GetHashCode()
    {
        return base.GetHashCode();
    }

    public override string? ToString()
    {
        return base.ToString();
    }
}
