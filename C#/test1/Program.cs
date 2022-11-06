static void Main(string[] args)
{
    byte[] myBytes1 = ReadHexFile("FileA.txt");
    byte[] myBytes2 = ReadHexFile("FileB.txt");

    using (MD5 md5Hash = MD5.Create())
    {
        string hash1 = GetMd5Hash(md5Hash, myBytes1);
        string hash2 = GetMd5Hash(md5Hash, myBytes2);
        Console.WriteLine("The MD5 hash of " + string.Join("", myBytes1.Select(b => b.ToString("x2"))) + " is: " + hash1 + ".");
        Console.WriteLine("The MD5 hash of " + string.Join("", myBytes1.Select(b => b.ToString("x2"))) + " is: " + hash2 + ".");
    }
    Console.ReadLine();
}

static string GetMd5Hash(MD5 md5Hash, byte[] input)
{
    byte[] data = md5Hash.ComputeHash(input);
    return string.Join("", data.Select(b => b.ToString("x2")));
}

static byte[] ReadHexFile(string path)
{
    System.IO.FileStream fs1 = System.IO.File.OpenRead(path);
    System.IO.StreamReader sr1 = new System.IO.StreamReader(fs1);

    string hexString = sr1.ReadToEnd();
    hexString = System.Text.RegularExpressions.Regex.Replace(hexString, @"\W", "", System.Text.RegularExpressions.RegexOptions.Singleline);
    int ix = 0;

    byte[] myBytes1 = new byte[hexString.Length / 2];
    while (ix < hexString.Length)
    {
        string hexByte = hexString.Substring(ix, 2);
        myBytes1[ix / 2] = byte.Parse(hexByte, System.Globalization.NumberStyles.HexNumber);
        ix += 2;
    }

    return myBytes1;
}
