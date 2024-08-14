using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Web;

namespace ConsoleApp3
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = 4;
            int x = 6;
            Console.WriteLine(n - x);

            double a = 64;
            double sqrta = Math.Sqrt(a);
            Console.WriteLine(a);
            Console.WriteLine(sqrta);
            Console.ReadLine();
            string name = "hello";
            Console.ReadLine();
            string name2 = "misss";
            Console.WriteLine(name2.IndexOf("i"));
            Console.WriteLine("this is{0} {1}", name, name2);
            Console.WriteLine(name[0]);
            Console.WriteLine(name.ToUpper());
            string d = "this is c sharp string";
            Console.WriteLine(d);
            int index = d.IndexOf("c");
            Console.WriteLine(d.Substring(index));
            Console.WriteLine(d.Replace("c", "c#"));
            Console.WriteLine(d.Length);
            Console.ReadLine();


            //            //array
            //            int[] num = { 1, 2, 3, 4, 5 };
            //            int[] num1 = new int[] { 1, 2, 3, 4 };
            //            int[] num2 = new int[3] { 1, 2, 3 };
            //            string[] s3 = new string[] { "hello", "world", "C#" };
            //            for (int i = 0; i < 5; i++)
            //            {

            //                Console.WriteLine(num[i]);
            //                //  }
            //                // foreach (int i in num)
            //                // {
            //                // Console.WriteLine(num1[i]);
            //                // }
            //                //ask a user input multiple time in array
            //                Console.WriteLine("enter 4 number");
            //                int[] num4 = new int[4];
            //                for(int i=0;i<num4.Length;i++)
            //                {

            //                }

            //            Console.ReadLine();


            //        }
            //    }
            //}

            //array
            int[] num = { 1, 2, 3, 4, 5 };
            int[] num1 = new int[] { 1, 2, 3, 4 };
            int[] num2 = new int[3] { 1, 2, 3 };
            string[] s3 = new string[] { "hello", "world", "C#" };
            for (int i = 0; i < 5; i++)
            {

                Console.WriteLine(num[i]);
            }
            foreach (int i in num)
            {
                Console.WriteLine(num1[i]);
            }

            Console.ReadLine();



        }
    }
}




























