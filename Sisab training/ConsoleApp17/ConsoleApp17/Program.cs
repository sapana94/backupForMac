using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Properties
{
    internal class Program
    {
        static void Main(string[] args)
        {
            student classA = new student();
            classA.num = int.Parse(Console.ReadLine());
            classA.name = Console.ReadLine();
            Console.WriteLine(classA.num);
            Console.ReadLine();

        }
        public class student
        {
            private int _num;
            public int num
            {
                get { return _num; }
                set { _num = value; }
            }
            public string name { get; set; }
        }
    }
}
