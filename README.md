# Programas


Console.WriteLine(" Digite a senha ");
            int senha = int.Parse(Console.ReadLine());

            while (senha != 2167)
            {
                Console.WriteLine("Senha invalída");
                senha = int.Parse(Console.ReadLine());
            }

            Console.WriteLine(" Senha  correta ");
