using System;
using ProjectA;


namespace @namespace
//namespace =
{
    internal class Program
    {
        static void Main(string[] args)
        {
            teamA.print();
            teamB.print();
            Console.ReadLine();
        }
    }
}
namespace ProjectA
{
    public class teamA
    {
        public static void print()
        {
            Console.WriteLine("this is pproject 0f team a");
        }
    }
}
namespace ProjectA
{
    public class teamB
    {
        public static void print()
        {
            Console.WriteLine("this is pproject of  teamb");
        }
    }
}