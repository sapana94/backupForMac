using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPS
{
    internal class Base
    {
    }
    public class classA
    {
        public string color = "blue";
        public int sum(int a =4 , int b = 6)
        { 
            return a + b; 
        }

    }
    public class classB : classA
    {
        public string color = "red";
        //public int sum(int a = 5, int b = 4)
        //{ 
        //    return a + b;
        //}
        public new int sum(int a = 5, int b = 4)
        {
            base.sum(3, 4);
            return a + b;
        }
        public void printcolor()
        {
            Console.WriteLine(color);
            Console.WriteLine(base.color);
        }

    }
}
