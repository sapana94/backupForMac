////Ques1
//using System;

//namespace FINDMAX
//{
//    class Program
//    {
//        static int FindMax(params int[] numbers)
//        {
//            int max = numbers[0];
//            for (int i = 1; i < numbers.Length; i++)
//            {
//                if (numbers[i] > max)
//                {
//                    max = numbers[i];
//                }
//            }
//            return max;
//        }

//        static void Main(string[] args)
//        {
//            int[] numbers = { 3, 5, 7, 2, 8 };
//            int maxNumber = FindMax(numbers);
//            Console.WriteLine("The maximum number is: " + maxNumber);
//        }
//    }
//}

//Ques2
//using System;
//namespace qns2
//{
//    internal class program
//    {
//        static void calculate(int x, int y, out int sum)
//        {
//            sum = x + y;
//            Console.WriteLine($"SUM OF {x} AND {y} is {sum}");
//        }
//        static void Main(string[] args)
//        {
//            int a = 0;
//            calculate(5, 10, out a);
//            Console.ReadLine();
//        }
//    }
//}

//Ques3
//using System;
//namespace qns3
//{
//    internal class program
//    {
//        static void swap(ref int x,ref int y)
//        {
//            int c = x;
//            x = y;
//            y = c;

//        }
//        static void Main(string[] args)
//        {
//            int a = 3;
//            int b = 7;
//            Console.WriteLine($"before swap {a} and {b}");
//            swap(ref a,ref b);


//            Console.WriteLine($"after swap {a} and {b}");
//            Console.Read(); 

//        }
//    }
//}
