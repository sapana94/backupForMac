
using System;

namespace Methods
{
    internal class Program
    {

        void print()
        {
            Console.WriteLine("hello world");
        }
        static int sum(int a, int b)
        {
            return a + b;
        }
        static void Main(string[] args)
        {
            Program program = new Program();
            Program program1 = new Program();
            program.print();
            program1.print();
            //program.sum(5,6);
            Console.Write("enter first number");
            int n1 = Convert.ToInt32(Console.ReadLine());
            Console.Write("enter second number");
            int n2 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine(sum(n1, n2));
            Console.ReadLine();
        }                       
    }
 }