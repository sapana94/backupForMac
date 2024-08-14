using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharpOOP
{
    public struct Structure
    {
        //structure is like a class
        //structure is value type whereas class reference type
        public int A;
        public int B;
        private string _name;

        public string Name { get; set; }
        
        public Structure(int a,int b,string Name1,string Name2)
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

        public struct Student
        {
            public int id;
            public string name;
            public int age;
            public string address;
        }
    }

}
