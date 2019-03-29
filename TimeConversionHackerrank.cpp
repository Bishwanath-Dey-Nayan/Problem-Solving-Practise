static void Main(string[] args)
        {
            string time = Console.ReadLine();
            string[] arrtime = time.Split(':');
            string AMPM = arrtime[2].Substring(2);
            int h = Convert.ToInt32(arrtime[0]);
            string m = arrtime[1];
            string s = arrtime[2].Substring(0,2);
            if(AMPM=="PM" && h!=12)
            {
                h = h + 12;
            }
            Console.WriteLine(h.ToString() + ":" + m + ":" + s +AMPM);
            Console.ReadKey();

        }
