////minmax
//using System;

//internal class Program
//{

//    static void Main(String[] args)
//    {
//        int a, b;
//        Console.WriteLine("Enter two numbers to compare: ");
//        a = Convert.ToInt32(Console.ReadLine());
//        b = Convert.ToInt32(Console.ReadLine());
//        Console.WriteLine("The maximum number is: " + Math.Max(a, b));
//        Console.WriteLine("The minimum number is: " + Math.Min(a, b));
//        if (a == b)
//        {
//            Console.WriteLine(a + "  is greater");
//            Console.WriteLine(b + "  is smaller");
//        }
//        else
//        {
//            Console.WriteLine(b + "  is greater");
//            Console.WriteLine(a + "  is smaller");
//        }

//    }
//}



//read
//using System;

//namespace read
//{
//    internal class Program
//    {
//        static void Main(string[] args)
//        {
//            int number = ReadInteger();
//            bool isEven = IsEven(number);
//            Console.WriteLine(isEven);
//        }

//        static int ReadInteger()
//        {
//            Console.Write("Enter an integer: ");
//            int number = Convert.ToInt32(Console.ReadLine());
//            return number;
//        }

//        static bool IsEven(int number)
//        {
//            if (number % 2 == 0)
//            {
//                return true;
//            }
//            else
//            {
//                return false;
//            }
//        }
//    }
//}





//swap
using System;

namespace swap
{
    internal class Program
    {
        static void swap(ref int a, ref int b)
        {
            int temp = a;
            a = b;
            b = temp;
        }
        static void Main(string[] args)
        {
            int a, b;
            Console.WriteLine("Enter the first number: ");
            a = Convert.ToInt32(Console.ReadLine());
            b = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("Before swapping: a = {0}, b = {1}", a, b);
            swap(ref a, ref b);
            Console.WriteLine("After swapping: a = {0}, b = {1}", a, b);

        }
    }
}

