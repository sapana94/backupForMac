using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace methodparameters
{
    internal class Program
    {
        //method parameters
        //pass by value
        static void cal(ref int j)
        {
             j = 50;
        }
        //static void calculate(int a,int b,out int sum, out int product)
        static void ParamMethods(params int[] i)
        {
            foreach(var m in i)
            {
                Console.WriteLine("this is {0}",m);
            }
            //sum = a + b;
            //product = a * b;
            //foreach(var m in i)
        }
        static void Main(string[] args)
        {
            //method parameters
            //pass by value
            //pass by reference
            //out
            //params arrays
            //int i = 0;
            //cal(ref i);
            //int a = 0;
            //int b = 0;
            //calculate(4, 5, out a, out b);
            //Console.WriteLine($"the sum is{a} and the product is{b}");
            //Console.WriteLine(i);
            //Console.ReadLine();
            int[] ints = new int[2];
            ints[0]= 1;
            ints[1] = 2;
            ParamMethods();
            ParamMethods(1,2);
            //ParamMethods(ints);
            Console.ReadLine();

        }
    }
}

        
    
