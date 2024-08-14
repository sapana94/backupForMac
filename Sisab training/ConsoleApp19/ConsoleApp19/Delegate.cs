using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Csharp_Oop
{
    internal class Delegates
    {
        public static int sum(int a, int b)
        {
            return a + b;
        }


    }
    public class Student
    {
        public int id { get; set; }
        public string name { get; set; }
        public int age { get; set; }
        public int rank { get; set; }
        public delegate bool RankDelegates(Student std);
        public void StudentRank(List<Student> students, RankDelegates rankDelegates)
        {
            foreach (Student student in students)
            {
                //if (student.rank >= 5)
                if (rankDelegates(student))
                {
                    Console.WriteLine(student.name + "Promoted");

                }
            }
        }
    }
}