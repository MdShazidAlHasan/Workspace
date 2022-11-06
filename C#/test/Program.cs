using System.Text;
namespace MyApp // Note: actual namespace depends on the project name.
{
    internal class Program
    {
        public static void Main(string[] args)
        {   
            string password = "Hello World!"; //I95ORWB1A7
            string result = CreateMD5(password, args[0]);
            Console.WriteLine("After salting: " + result);
        }
        public static string CreateMD5(string input, string salt)
        {
            // Use input string to calculate MD5 hash
            using (System.Security.Cryptography.MD5 md5 = System.Security.Cryptography.MD5.Create())
            {
                
                byte[] outputBytes = System.Text.Encoding.ASCII.GetBytes(salt);
                byte[] inputBytes = System.Text.Encoding.ASCII.GetBytes(input);
                // forloop through each element in inputBytes
                System.Console.WriteLine("Before hashing: " + Convert.ToHexString(inputBytes));
                byte[] hashBytes = md5.ComputeHash(inputBytes);
                System.Console.WriteLine("After hashing: " + Convert.ToHexString(hashBytes));
                System.Console.WriteLine("Before salting: "+Convert.ToHexString(inputBytes)+ salt);

                byte[] inputBytes2 = System.Text.Encoding.ASCII.GetBytes(Convert.ToHexString(inputBytes) + salt);

                byte[] hashBytes2 = md5.ComputeHash(inputBytes2);
                return Convert.ToHexString(hashBytes2); // .NET 5 +

            }
        }


        
    }
}