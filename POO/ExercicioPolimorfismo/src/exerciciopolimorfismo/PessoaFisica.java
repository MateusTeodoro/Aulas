package exerciciopolimorfismo;

public class PessoaFisica extends Pessoa
{
    private String cpf;

    public String getCpf() 
    {
        return cpf;
    }

    public void setCpf(String cpf) 
    {
        this.cpf = cpf;
    }
    
    public void cadastro()
    {
        if (cpf.length() == 11)
        {
            System.out.println("CPF válido!");
        }
        else
        {
            System.out.println("CPF inválido!");    
        }
    }
}
