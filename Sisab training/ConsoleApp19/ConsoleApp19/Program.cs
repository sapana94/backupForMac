u    using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static Csharp_Oop.Student;

namespace Csharp_Oop
{
    public delegate int AdditionDelegates(int a, int b);
    internal class Program
    {
        public static bool IsStudentRank(Student std)
        {
            if (std.rank >= 5)
            {
                return true;
            }
            else
            {
                return false;
            };
        }
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

            //structure
            //    structure st;
            //    st.B = 4;
            //    st.A = 5;

            //    structure structure=new structure();
            //    structure.A = 4;
            //    structure.B = 6;
            //    structure.Name = "sauravi";
            //    structure.Print();

            //    student student;
            //    student.name="sauravii";
            //    student.age = 18;

            //    student std=new student();
            //   // std.name = "aaya";
            //    std.age = 21;
            ////    std.id = 320;

            //    student std2 = std;
            //    std2.age = 18;

            //    Console.WriteLine(std.age);
            //    Console.WriteLine(std2.age);


            //DELEGATE
            AdditionDelegates additionaDelegates = new AdditionDelegates(Delegates.sum);
            Console.WriteLine(additionaDelegates(5, 3));

            List<Student> studentList = new List<Student>();
            studentList.Add(new Student() { id = 1, name = "sauravi", age = 25, rank = 1 });
            studentList.Add(new Student() { id = 2, name = "sapana", age = 22, rank = 2 });
            studentList.Add(new Student() { id = 3, name = "sanjiata", age = 23, rank = 6 });
            studentList.Add(new Student() { id = 4, name = "aashma", age = 6, rank = 5 });

            //int[] nums = new int[4];
            //nums[0] = 1;
            //nums[1] = 2;
            RankDelegates rankDelegates = new RankDelegates(IsStudentRank);

            Student student = new Student();
            student.StudentRank(studentList, rankDelegates);


            Console.ReadLine();

        }
    }
}