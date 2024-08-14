using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp10
{
    internal class Program
    {
        static int calculate(int a, int b)
        {
            return a + b;
        }
        static double calculate1(double a, double b)
        {
            return a * b;
        }
        static void Main(string[] args)
        {
            int sum = calculate(1, 2);
            double product = calculate1(3.3, 42.4);
            Console.WriteLine($"the sum is{sum}");
            Console.WriteLine($"this product is{product}");
            Console.ReadLine();
        }
    }
}
