using System;
using System.Collections.Generic;
using System.Linq;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace ooops
{
//{
//    public class bikeclass
//    {
//         public string Name; //fields
//            public string _model;
//        public bikeclass(string Name, string model)
//        {
//            this.Name = Name;
//            _model = model;
//        }

//        public void PrintInfo()//methods
//        {
//            Console.WriteLine($"bike name is{Name} and model is {_model}");
//        }

        public class Bike
        {
            public string Name; //fields
            public string _model;

            //static constructor
            public Bike()
        {
            Console.WriteLine("this is instance contructor called");
        }
        static Bike()
        {
            Console.WriteLine("this is instance contructor called");
        }
       
        }
    }


