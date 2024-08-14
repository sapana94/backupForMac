using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace OOPS
{
    internal class Getset
    {
    }
    public class color
    {
        private string _color;
        public string colorz
        {
            get { return _color; }
            set { _color = value; }
        }
        public string colorq { get; set; }
    }
    public class color2
    {
        color c = new color();
    }
}
