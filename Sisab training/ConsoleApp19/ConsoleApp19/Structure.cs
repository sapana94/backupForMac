using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Csharp_Oop
{
    public struct structure
    {
        //structure is like a class
        //structure is a value type  whereas class reference type 
        public int A;
        public int B;
        private string _name;
        public string Name { get; set; }
        public structure(int a, int b, string Name1, string Name2)
        {
            this.A = a;
            this.B = b;
            this._name = Name1;
            this.Name = Name2;

        }
        public void Print()
        {
            Console.WriteLine($"print {A} {B} {_name} {Name}");

        }
    }
    public struct student
    {
        public int age;
        public string name;
        public int id;
        public string address;
    }
}
