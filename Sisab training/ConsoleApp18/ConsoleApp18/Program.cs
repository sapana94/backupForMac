using CSharpOOP;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static CSharpOOP.Structure;

namespace Csharp_Oop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            //Polymorphism2 p2 = new Polymorphism2();
            //p2.Display();
            //p2.Sum(4,5);

            //Polymorphism p1=new Polymorphism2();
            //p1.Display();
            //Console.ReadLine();

            //abstractclass
            //Abstract @abstract = new Abstract();//abstract ma obj banauna mildeyna
            //DerivedAbstract db = new DerivedAbstract();
            //db.Display();
            //db.Draw();
            //Console.WriteLine("----------------");
            //((Abstract)db).Draw();
            //Abstract A = new DerivedAbstract();
            //A.Display();
            //A.Draw();

            Structure st;
            st.B = 4;
            st.A = 5;

            Structure structure = new Structure();
            structure.B = 6;
            structure.Name = "Shyam";
            structure.A = 7;
            
            structure.Print();

            Student student;
            student.age = 23;

            Student student1 = new Student();
            student1.age = 21;

            Student student2 = student1;
            student2.age = 22;

            Console.WriteLine(student1.age + " std1");
            Console.WriteLine(student2.age + " std2");



            Console.ReadLine();
        }
    }
}
