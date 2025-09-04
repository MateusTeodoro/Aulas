package jogodavelha;

/**
 *
 * @author Franciny
 */
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;
import javax.swing.border.EmptyBorder;

public class Jogo extends JFrame{

    JButton cor;        // botão para reinicializar os botões
    JButton [] botoes;  //vetor de botões
    JPanel PainelJogo; // painel onde ficará os botões
    String simbolo;     // aloca X ou 0
    int vezDoJogador;   // verifica a vez do jogador
    int d = 0;
    
    Jogo()
    {
        super ("Jogo da velha");
        ((JComponent) getContentPane()).setBorder(new EmptyBorder(15, 15, 15, 15));// Cria borda
        
        PainelJogo = new JPanel(); // cria uma painel
        PainelJogo.setLayout(new GridLayout(3, 3, 10, 10)); // define um grid para colocar os botões, com linha colunas e o espaçamento entre os botões
        cor = new JButton();
        
        botoes = new JButton[9];
        for (int i = 0; i < 9; i++)
        {
           
            botoes[i] = new JButton(""); //Cria cada botão e os atribui ao vetor
     
        }
        
        //------------- FORMATAÇÃO DOS BOTÕES ---------------//
        
        botoes[0].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[0].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(0);
          
          verificaLinha();
          verificaColuna();
          verificaDiagonais();  
          
            }
        });
        PainelJogo.add(botoes[0]);
        
        botoes[1].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[1].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(1);
            
            verificaLinha();
            verificaColuna();
            }
        });
        PainelJogo.add(botoes[1]);
        
        botoes[2].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[2].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(2);
            
            verificaLinha();
            verificaColuna();
            verificaDiagonais();
            
            }
        });
        PainelJogo.add(botoes[2]);
        
        botoes[3].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[3].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(3);
            
            verificaLinha();
            verificaColuna();
            }
        });
        PainelJogo.add(botoes[3]);
        
        botoes[4].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[4].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(4);
            
            verificaLinha();
            verificaColuna();
            verificaDiagonais();
            
            }
        });
        PainelJogo.add(botoes[4]);
        
        botoes[5].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[5].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(5);
            
            verificaLinha();
            verificaColuna();
            }
        });
        PainelJogo.add(botoes[5]);
        
        botoes[6].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[6].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(6);
            
            verificaLinha();
            verificaColuna();
            verificaDiagonais();
            
            }
        });
        PainelJogo.add(botoes[6]);
        
        botoes[7].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[7].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(7);
            verificaLinha();
            verificaColuna();
            }
            });
        PainelJogo.add(botoes[7]);
        
        botoes[8].setFont(new Font("Calibri", Font.BOLD, 70));
        botoes[8].addActionListener(new ActionListener(){
            @Override
            public void actionPerformed(ActionEvent e){
                jogada(8);
            
            verificaLinha();
            verificaColuna();
            verificaDiagonais();
            }
        });
        
        PainelJogo.add(botoes[8]);
        
        //--------------------- FIM ---------- ---------------//
       
        add(PainelJogo); // adiciona o Painel ao Frame
        setLocation(470, 200); // determina localização da janela
        setSize(400,400); // tamanho da janela
        setVisible(true); // torna visível a janela
        
    }
    
    // Esse método verifica de quem é a vez de jogar e qual o símbolo do jogador
    public void jogada(int simbol)
    {
        //verifica a vez e indica o símbolo do jogador
        if(vezDoJogador == 0)
        {
            simbolo = "X"; // símbolo do jogador 1 é X
            vezDoJogador = 1; // jogador 1 já jogou. Agora é a vez do jogador 2
            d++;
        }else{
            simbolo = "O"; // símbolo do jogador 1 é O
            vezDoJogador = 0; // jogador 2 já jogou. Agora é a vez do jogador 1
            d++;
        
        
        }
        
        botoes[simbol].setText(simbolo);  // atribui o símbolo ao botão de acordo com o valor do tipo
        botoes[simbol].setEnabled(false); //deixa o botão desativo após atribuir o símbolo a ele
        if (d == 9){
            verificaEmpate();
        }
    }
    
    public void verificaLinha(){
        if(botoes[0].getText().equals("X") && botoes[1].getText().equals("X") && botoes[2].getText().equals("X") ){
            JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
            System.exit(0);
        }
            
        if(botoes[3].getText().equals("X") && botoes[4].getText().equals("X") && botoes[5].getText().equals("X") ){
            JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
            System.exit(0);
        }
            
        if(botoes[6].getText().equals("X") && botoes[7].getText().equals("X") && botoes[8].getText().equals("X") ){
            JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
            System.exit(0);
        }
            
        else{
            if(botoes[0].getText().equals("O") && botoes[1].getText().equals("O") && botoes[2].getText().equals("O") ){
                JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                System.exit(0);
            }
            
            if(botoes[3].getText().equals("O") && botoes[4].getText().equals("O") && botoes[5].getText().equals("O") ){
                JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                System.exit(0);
            }
            
            if(botoes[6].getText().equals("O") && botoes[7].getText().equals("O") && botoes[8].getText().equals("O") ){
                JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                System.exit(0);
            }
            
        }
    }
    public void verificaColuna(){
        if(botoes[0].getText().equals("X") && botoes[3].getText().equals("X") && botoes[6].getText().equals("X") ){
            JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
            System.exit(0);
        }
            
        if(botoes[1].getText().equals("X") && botoes[4].getText().equals("X") && botoes[7].getText().equals("X") ){
            JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
            System.exit(0);
        }
            
        if(botoes[2].getText().equals("X") && botoes[5].getText().equals("X") && botoes[8].getText().equals("X") ){
            JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
            System.exit(0);
        }
            
        
        else{
            if(botoes[0].getText().equals("O") && botoes[3].getText().equals("O") && botoes[6].getText().equals("O") ){
                JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                System.exit(0);
            }
            
            if(botoes[1].getText().equals("O") && botoes[4].getText().equals("O") && botoes[7].getText().equals("O") ){
                JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                System.exit(0);
            }
            
            if(botoes[2].getText().equals("O") && botoes[5].getText().equals("O") && botoes[8].getText().equals("O") ){
                JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                System.exit(0);
            }
            
            
        }
    }
    public void verificaDiagonais(){
        if(botoes[0].getText().equals("X") && botoes[4].getText().equals("X") && botoes[8].getText().equals("X") ){
            JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
            System.exit(0);
        }
            
        if(botoes[2].getText().equals("X") && botoes[4].getText().equals("X") && botoes[6].getText().equals("X") ){
             JOptionPane.showMessageDialog(null, "O Jogador X ganhou");
             System.exit(0);
        }
            
        else{
            
            if(botoes[0].getText().equals("O") && botoes[4].getText().equals("O") && botoes[8].getText().equals("O") ){
                JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                System.exit(0);
            }
            
            if(botoes[2].getText().equals("O") && botoes[4].getText().equals("O") && botoes[6].getText().equals("O") ){
                 JOptionPane.showMessageDialog(null, "O Jogador O ganhou");
                 System.exit(0);
            }
            
            }
    
    }

    public void verificaEmpate(){
        JOptionPane.showMessageDialog(null,"O jogo terminou em empate");
        System.exit(0);
    }
    
}


