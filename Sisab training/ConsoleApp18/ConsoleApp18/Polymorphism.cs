using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Csharp_Oop
{
    //OVERWRITE;
    //VIRTUAL;
    public class Polymorphism
    {
        public virtual void Display()
        {
            Console.WriteLine("main class polymorphism");
        }
        public int Sum(int a, int b)
        {
            return a + b;
        }
    }
    public class Polymorphism2 : Polymorphism
    {
        public void Display() //OVERWRITE
        {
            // base.Display();


            Console.WriteLine("derived class polymorphism2");
        }
        public int Sum(int c, int d)
        {
            return c + d;
        }

    }

}