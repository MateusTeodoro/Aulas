package jogodavelha;

import javax.swing.*;
import static javax.swing.JFrame.EXIT_ON_CLOSE;

public class JogoDaVelha extends JFrame {

    
    public static void main(String[] args) {
        
        Jogo janela = new Jogo(); //cria objeto Jogo
        janela.setDefaultCloseOperation(EXIT_ON_CLOSE); // encerra a aplicação quando a janeça for fechada
        janela.setResizable(false); // faz com que a janela não seja maximizada 
        
    }
    
}
