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
        }
    }



















            Console.WriteLine("");



        }
    }
}
