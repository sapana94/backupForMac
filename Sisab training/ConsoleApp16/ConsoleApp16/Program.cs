using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;
using AccessModifier1;
namespace AccessModifier
{
    internal class program
    {
        static void Main(string[] args)
        {
            program2 program2 = new program2();
            program2.num = 1;
            program2.num = 2;
            //program2.address = "sdfsd;
            //program2.name = "name";
            program4 program = new program4();
            program. = 3;

        }
    }
     public class program1
    {
        public int num;
        private string name;
        protected string address;
        internal int num2;
        //public:
        //private
        //protected
        //internal
    }
    public class program2 : program1
    {
        public void print()
        {
            Console.WriteLine("hello" + num + name + address + num2);
        }
    }
}
namespace AccessModifier1
{
    public class program4
    {
        public int num;
        private string name;
        protected string address;
        internal int num2;

    }
    public class Program5
    {
        public int num5;
        private string name5;
        private string address5;
        private int num;
        public void showinternal()
        {
            Console.WriteLine("hii internal");
        }
    }
    public class Pro
    {
        public void ProMethod()
        {
            Program5 prog5 = new Program5();
            prog5.showinternal();
        }
    }
}
