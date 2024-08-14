using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Csharp_Oop
{
    //ABSTRACTION=DATA HIDE GARNU LAI(SENSITIVE)

    interface IClassA
    {


    }
    interface IClassB
    {
    }
    class ClassA
    {

    }

    public abstract class Abstract : IClassA,
    {
        int a;
        public int _b;
        public int b
        {
            get; set;
        }

        public abstract void Display();
        public void Draw()
        {
            Console.WriteLine("parent draw");
        }

    }
    public class DerivedAbstract : Abstract, IClassA, IClassB //classA chai lideyna
    {

        public override void Display()
        {
            Console.WriteLine("derived abstract class called");
        }
    }
}