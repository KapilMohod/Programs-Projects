import java.awt.*;
import java.awt.event.*;

class GUI5
{
    public static void main(String Arg[])
    {
        MarvellousFrame mobj = new MarvellousFrame("PPA49");
    }
}

class MarvellousFrame
{
    public MarvellousFrame(String title)
    {
        Frame fobj = new Frame(title);
        fobj.setSize(300,600);  // (W,H)
        fobj.setVisible(true);
        fobj.addWindowListener(new MarvellousListener());
    }
}

class MarvellousListener extends WindowAdapter
{
    public void windowClosing(WindowEvent obj)
    {
        System.exit(0);
    }
}

  