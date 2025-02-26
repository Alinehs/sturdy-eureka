using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace joguinho
{
    class Program
    {
        static void Main()
        {
            Random random = new Random();
            int numeroSecreto = random.Next(1, 102);
            int tentativas = 0;
            bool acertou = false;

            Console.WriteLine("Bem Vindo ao jogo de Adivinhação!");
            Console.WriteLine("Tente adivinhar o número entre 1 e 100.");

            while (!acertou)
            {
                Console.Write("Digite seu palpite: ");
                string entrada = Console.ReadLine();

                if (int.TryParse(entrada,out int palpite))
                {
                    tentativas++;

                    if (palpite <numeroSecreto)
                    {
                        Console.WriteLine("Muito baixo! Tente novamente.");
                    }
                    else if (palpite > numeroSecreto)
                    {
                        Console.WriteLine("Muito alto! Tente novamente.");
                    }
                    else
                    {
                        Console.WriteLine($"Parabéns! Você acertou o número{numeroSecreto} em {tentativas} tentativas.");
                        acertou = true;
                    }
                }
                else
                {
                    Console.WriteLine("Entrada inválida. Digite um número válido.");
                }
            }
        }
    }
}
