using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

struct Point
{
    public int x;
    public int y;
    public Point(int c1, int c2) {
        x = c1;
        y = c2;
    }
}

class Block
{
    private int hardness;
    private int value; // value == 1 is coal, 2 is iron, 3 is gold, 4 is diamond
    private Point point;
    public Block(int c1 = 0, int c2 = 0, int c3 = 0, int c4 = 0)
    {
        this.hardness = c1;
        this.value = c2;
        this.point = new Point(c3, c4);
    }
    public int getHardness()
    {
        return this.hardness;
    }
    public int getX()
    {
        return this.point.x;
    }
    public int getY()
    {
        return this.point.y;
    }
    public void setPoint(int c1, int c2)
    {
        this.point.x = c1;
        this.point.y = c2;
    }
    public void setHardness(int c1)
    {
        this.hardness = c1;
    }
    public void reduceHardness()
    {
        this.hardness--;
    }
    public void setValue(int c1)
    {
        this.value = c1;
    }
    public void emptyValue()
    {
        this.value = 0;
    }
    public int getValue()
    {
        return this.value;
    }
}

class Player
{
    private Point head;
    private Point body;
    private int turn_count;
    public Player(int c1, int c2, int c3, int c4, int c5)
    {
        this.turn_count = c1;
        this.head.x = c2;
        this.head.y = c3;
        this.body.x = c4;
        this.body.y = c5;
    }
    public int getHeadX()
    {
        return this.head.x;
    }
    public int getHeadY()
    {
        return this.head.y;
    }
    public int getBodyX()
    {
        return this.body.x;
    }
    public int getBodyY()
    {
        return this.body.y;
    }
    public void fallDown()
    {
        this.head.x++;
        this.body.x++;
    }
    public void moveLeft()
    {
        this.head.y--;
        this.body.y--;
    }
    public void moveRight()
    {
        this.head.y++;
        this.body.y++;
    }
    public void reduceTurn() {
        this.turn_count--;
    }
    public int getTurn()
    {
        return this.turn_count;
    }
    public void increseTurn(int c1)
    {
        this.turn_count += c1;
    }
}

class LevelGenerator
{
    
}

class GreedyMiner
{
    const int mapLength = 20;
    const int mapWidth = 11;
    const int coalValue = 1;
    const int ironValue = 2;
    const int goldValue = 3;
    const int diamondValue = 4;
    const int playerStartTurns = 10;
    public static Random rand = new Random();
    public static void generate1(List<Block> c1, int c2, int c3) // c2 + c3 is points ------- 20% value = coal(1) 60% value = 0 hardness = 1 10% value = 0 hardness = 2
    {
        int localRandSet = rand.Next(1, 11);
        if (localRandSet > 0 && localRandSet < 3)
        {
            c1.Add(new Block(1, coalValue, c2, c3));
        }
        else if (localRandSet > 2 && localRandSet < 10)
        {
            c1.Add(new Block(1, 0, c2, c3));
        }
        else if (localRandSet > 9 && localRandSet < 11)
        {
            c1.Add(new Block(2, 0, c2, c3));
        }
    }

    public static void generate2(List<Block> c1, int c2, int c3) // c2 + c3 is points ------- 20% value = coal(1) 20% value = iron(2) 30% value = 0 hardness = 1 30% value = 0 hardness = 2
    {
        int localRandSet = rand.Next(1, 11);
        if (localRandSet > 0 && localRandSet < 3)
        {
            c1.Add(new Block(1, coalValue, c2, c3));
        }
        else if (localRandSet > 2 && localRandSet < 5)
        {
            c1.Add(new Block(1, ironValue, c2, c3));
        }
        else if (localRandSet > 4 && localRandSet < 8)
        {
            c1.Add(new Block(1, 0, c2, c3));
        }
        else if (localRandSet > 7 && localRandSet < 11)
        {
            c1.Add(new Block(2, 0, c2, c3));
        }

    }

    public static void generate3(List<Block> c1, int c2, int c3) // c2 + c3 is points ------- 10% value = coal(1) 15% value = iron(2) 15% value = gold(3) 50% value = 0 hardness = 2
    {
        int localRandSet = rand.Next(1, 21);
        if (localRandSet > 0 && localRandSet < 3)
        {
            c1.Add(new Block(1, coalValue, c2, c3));
        }
        else if (localRandSet > 2 && localRandSet < 6)
        {
            c1.Add(new Block(1, ironValue, c2, c3));
        }
        else if (localRandSet > 5 && localRandSet < 9)
        {
            c1.Add(new Block(1, goldValue, c2, c3));
        }
        else if (localRandSet > 8 && localRandSet < 21)
        {
            c1.Add(new Block(2, 0, c2, c3));
        }
    }

    public static void generate4(List<Block> c1, int c2, int c3) // c2 + c3 is points ------- 15% value = iron(2) 15% value = gold(3) 10% value = diamond(4) 20% value = 0 hardness = 2 40 value = 0 hardness = 3
    {
        int localRandSet = rand.Next(1, 21);
        if (localRandSet > 0 && localRandSet < 4)
        {
            c1.Add(new Block(1, ironValue, c2, c3));
        }
        else if (localRandSet > 3 && localRandSet < 7)
        {
            c1.Add(new Block(1, goldValue, c2, c3));
        }
        else if (localRandSet > 6 && localRandSet < 9)
        {
            c1.Add(new Block(1, diamondValue, c2, c3));
        }
        else if (localRandSet > 8 && localRandSet < 13)
        {
            c1.Add(new Block(2, 0, c2, c3));
        }
        else if (localRandSet > 12 && localRandSet < 21)
        {
            c1.Add(new Block(3, 0, c2, c3));
        }
    }

    static void Main()
    {
        Console.SetWindowSize(25, 22);
        Console.ForegroundColor = ConsoleColor.Gray;
        // Player config
        Player John = new Player(playerStartTurns, 1, 5, 2, 5); // Player name: John
        //
        List<Block> Map = new List<Block>{};
        for(int c1 = 0; c1 < 5; c1++)
        {
            for(int c2 = 0; c2 < mapWidth; c2++)
            {
                generate1(Map, c1, c2);
            }
        }
        for (int c1 = 5; c1 < 10; c1++)
        {
            for (int c2 = 0; c2 < mapWidth; c2++)
            {
                generate2(Map, c1, c2);
            }
        }
        for (int c1 = 10; c1 < 15; c1++)
        {
            for (int c2 = 0; c2 < mapWidth; c2++)
            {
                generate3(Map, c1, c2);
            }
        }
        for (int c1 = 15; c1 < 20; c1++)
        {
            for (int c2 = 0; c2 < mapWidth; c2++)
            {
                generate4(Map, c1, c2);
            }
        }
        // UPDATE MAP
        for(int c1 = 0; c1 < mapLength; c1++)
        {
            for (int c2 = 0; c2 < mapWidth; c2++)
            {
                if(c1 == John.getHeadX() && c2 == John.getHeadY())
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    Console.Write("O ");
                    Console.ForegroundColor = ConsoleColor.DarkGray;
                } else if (c1 == John.getBodyX() && c2 == John.getBodyY())
                {
                    Console.ForegroundColor = ConsoleColor.Green;
                    Console.Write("# ");
                    Console.ForegroundColor = ConsoleColor.DarkGray;
                }
                else if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue() > 0)
                {
                    switch(Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue())
                    {
                        case coalValue:
                            Console.ForegroundColor = ConsoleColor.DarkRed;
                            Console.Write("C ");
                            Console.ForegroundColor = ConsoleColor.DarkGray;
                            break;
                        case ironValue:
                            Console.ForegroundColor = ConsoleColor.Gray;
                            Console.Write("I ");
                            Console.ForegroundColor = ConsoleColor.DarkGray;
                            break;
                        case goldValue:
                            Console.ForegroundColor = ConsoleColor.Yellow;
                            Console.Write("G ");
                            Console.ForegroundColor = ConsoleColor.DarkGray;
                            break;
                        case diamondValue:
                            Console.ForegroundColor = ConsoleColor.Cyan;
                            Console.Write("D ");
                            Console.ForegroundColor = ConsoleColor.DarkGray;
                            break;
                    }
                } else {
                    
                    if(Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 2)
                    {
                        Console.ForegroundColor = ConsoleColor.Red;
                        Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                    } else if(Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 3)
                    {
                        Console.ForegroundColor = ConsoleColor.Magenta;
                        Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                    } else
                    {
                        Console.ForegroundColor = ConsoleColor.DarkGray;
                        Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                    }
                }
                if(c2 == mapWidth - 1)
                {
                    Console.Write(System.Environment.NewLine);
                }
            }
        }
        Console.ForegroundColor = ConsoleColor.DarkGreen;
        Console.Write("Turn left: {0}", John.getTurn());
        //

        Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY()).setHardness(0);
        Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY()).setHardness(0);
        Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY()).setValue(0);
        Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY()).setValue(0);

        // game loop
        while (John.getTurn() > 0)
        {
            ConsoleKey keypress;
            keypress = System.Console.ReadKey(true).Key;
            if (keypress == ConsoleKey.DownArrow)
            {
                if (John.getBodyX() != mapLength - 1)
                {
                    if(Map.Single(p => p.getX() == John.getBodyX() + 1 && p.getY() == John.getBodyY()).getValue() > 0)
                    {
                        John.increseTurn(Map.Single(p => p.getX() == John.getBodyX() + 1 && p.getY() == John.getBodyY()).getValue());
                        Map.Single(p => p.getX() == John.getBodyX() + 1 && p.getY() == John.getBodyY()).setValue(0);
                    }
                    Map.Single(p => p.getX() == John.getBodyX() + 1 && p.getY() == John.getBodyY()).reduceHardness();
                    John.reduceTurn();
                    if (Map.Single(p => p.getX() == John.getBodyX() + 1 && p.getY() == John.getBodyY()).getHardness() == 0) // tim block duoi chan john va xem block do da bi pha vo chua
                    {
                        John.fallDown(); // john roi xuong 1 level
                    }
                    Console.Clear();
                    // UPDATE MAP
                    for (int c1 = 0; c1 < mapLength; c1++)
                    {
                        for (int c2 = 0; c2 < mapWidth; c2++)
                        {
                            if (c1 == John.getHeadX() && c2 == John.getHeadY())
                            {
                                Console.ForegroundColor = ConsoleColor.Green;
                                Console.Write("O ");
                                Console.ForegroundColor = ConsoleColor.DarkGray;
                            }
                            else if (c1 == John.getBodyX() && c2 == John.getBodyY())
                            {
                                Console.ForegroundColor = ConsoleColor.Green;
                                Console.Write("# ");
                                Console.ForegroundColor = ConsoleColor.DarkGray;
                            }
                            else if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue() > 0)
                            {
                                switch (Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue())
                                {
                                    case coalValue:
                                        Console.ForegroundColor = ConsoleColor.DarkRed;
                                        Console.Write("C ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                    case ironValue:
                                        Console.ForegroundColor = ConsoleColor.Gray;
                                        Console.Write("I ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                    case goldValue:
                                        Console.ForegroundColor = ConsoleColor.Yellow;
                                        Console.Write("G ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                    case diamondValue:
                                        Console.ForegroundColor = ConsoleColor.Cyan;
                                        Console.Write("D ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                }
                            }
                            else
                            {

                                if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 2)
                                {
                                    Console.ForegroundColor = ConsoleColor.Red;
                                    Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                }
                                else if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 3)
                                {
                                    Console.ForegroundColor = ConsoleColor.Magenta;
                                    Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                }
                                else
                                {
                                    Console.ForegroundColor = ConsoleColor.DarkGray;
                                    Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                }
                            }
                            if (c2 == mapWidth - 1)
                            {
                                Console.Write(System.Environment.NewLine);
                            }
                        }
                    }
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.Write("Turn left: {0}", John.getTurn());
                    //
                }
                else
                {
                    // for update
                }
            }
            else if (keypress == ConsoleKey.LeftArrow)
            {
                if (John.getHeadY() != 0)
                {
                    if (Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() - 1).getHardness() > 0)
                    {
                        John.reduceTurn();
                        Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() - 1).reduceHardness();
                        if (Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() - 1).getValue() > 0)
                        {
                            John.increseTurn(Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() - 1).getValue());
                            Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() - 1).setValue(0);
                        }
                    }
                    else if (Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() - 1).getHardness() > 0)
                    {
                        John.reduceTurn();
                        Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() - 1).reduceHardness();
                        if (Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() - 1).getValue() > 0)
                        {
                            John.increseTurn(Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() - 1).getValue());
                            Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() - 1).setValue(0);
                        }
                    }
                    else
                    {
                        John.moveLeft();
                    }
                    Console.Clear();
                    // UPDATE MAP
                    for (int c1 = 0; c1 < mapLength; c1++)
                    {
                        for (int c2 = 0; c2 < mapWidth; c2++)
                        {
                            if (c1 == John.getHeadX() && c2 == John.getHeadY())
                            {
                                Console.ForegroundColor = ConsoleColor.Green;
                                Console.Write("O ");
                                Console.ForegroundColor = ConsoleColor.DarkGray;
                            }
                            else if (c1 == John.getBodyX() && c2 == John.getBodyY())
                            {
                                Console.ForegroundColor = ConsoleColor.Green;
                                Console.Write("# ");
                                Console.ForegroundColor = ConsoleColor.DarkGray;
                            }
                            else if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue() > 0)
                            {
                                switch (Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue())
                                {
                                    case coalValue:
                                        Console.ForegroundColor = ConsoleColor.DarkRed;
                                        Console.Write("C ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                    case ironValue:
                                        Console.ForegroundColor = ConsoleColor.Gray;
                                        Console.Write("I ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                    case goldValue:
                                        Console.ForegroundColor = ConsoleColor.Yellow;
                                        Console.Write("G ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                    case diamondValue:
                                        Console.ForegroundColor = ConsoleColor.Cyan;
                                        Console.Write("D ");
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        break;
                                }
                            }
                            else
                            {

                                if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 2)
                                {
                                    Console.ForegroundColor = ConsoleColor.Red;
                                    Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                }
                                else if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 3)
                                {
                                    Console.ForegroundColor = ConsoleColor.Magenta;
                                    Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                }
                                else
                                {
                                    Console.ForegroundColor = ConsoleColor.DarkGray;
                                    Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                }
                            }
                            if (c2 == mapWidth - 1)
                            {
                                Console.Write(System.Environment.NewLine);
                            }
                        }
                    }
                    Console.ForegroundColor = ConsoleColor.DarkGreen;
                    Console.Write("Turn left: {0}", John.getTurn());
                    //
                }
            }
            else if (keypress == ConsoleKey.RightArrow)
            {
                if (John.getHeadY() != mapWidth - 1)
                {
                    {
                        if (Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() + 1).getHardness() > 0)
                        {
                            John.reduceTurn();
                            Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() + 1).reduceHardness();
                            if (Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() + 1).getValue() > 0)
                            {
                                John.increseTurn(Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() + 1).getValue());
                                Map.Single(p => p.getX() == John.getHeadX() && p.getY() == John.getHeadY() + 1).setValue(0);
                            }
                        }
                        else if (Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() + 1).getHardness() > 0)
                        {
                            John.reduceTurn();
                            Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() + 1).reduceHardness();
                            if (Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() + 1).getValue() > 0)
                            {
                                John.increseTurn(Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() + 1).getValue());
                                Map.Single(p => p.getX() == John.getBodyX() && p.getY() == John.getBodyY() + 1).setValue(0);
                            }
                        }
                        else
                        {
                            John.moveRight();
                        }
                        Console.Clear();
                        // UPDATE MAP
                        for (int c1 = 0; c1 < mapLength; c1++)
                        {
                            for (int c2 = 0; c2 < mapWidth; c2++)
                            {
                                if (c1 == John.getHeadX() && c2 == John.getHeadY())
                                {
                                    Console.ForegroundColor = ConsoleColor.Green;
                                    Console.Write("O ");
                                    Console.ForegroundColor = ConsoleColor.DarkGray;
                                }
                                else if (c1 == John.getBodyX() && c2 == John.getBodyY())
                                {
                                    Console.ForegroundColor = ConsoleColor.Green;
                                    Console.Write("# ");
                                    Console.ForegroundColor = ConsoleColor.DarkGray;
                                }
                                else if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue() > 0)
                                {
                                    switch (Map.Single(p => p.getX() == c1 && p.getY() == c2).getValue())
                                    {
                                        case coalValue:
                                            Console.ForegroundColor = ConsoleColor.DarkRed;
                                            Console.Write("C ");
                                            Console.ForegroundColor = ConsoleColor.DarkGray;
                                            break;
                                        case ironValue:
                                            Console.ForegroundColor = ConsoleColor.Gray;
                                            Console.Write("I ");
                                            Console.ForegroundColor = ConsoleColor.DarkGray;
                                            break;
                                        case goldValue:
                                            Console.ForegroundColor = ConsoleColor.Yellow;
                                            Console.Write("G ");
                                            Console.ForegroundColor = ConsoleColor.DarkGray;
                                            break;
                                        case diamondValue:
                                            Console.ForegroundColor = ConsoleColor.Cyan;
                                            Console.Write("D ");
                                            Console.ForegroundColor = ConsoleColor.DarkGray;
                                            break;
                                    }
                                }
                                else
                                {

                                    if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 2)
                                    {
                                        Console.ForegroundColor = ConsoleColor.Red;
                                        Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                    }
                                    else if (Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness() == 3)
                                    {
                                        Console.ForegroundColor = ConsoleColor.Magenta;
                                        Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                    }
                                    else
                                    {
                                        Console.ForegroundColor = ConsoleColor.DarkGray;
                                        Console.Write("{0} ", Map.Single(p => p.getX() == c1 && p.getY() == c2).getHardness());
                                    }
                                }
                                if (c2 == mapWidth - 1)
                                {
                                    Console.Write(System.Environment.NewLine);
                                }
                            }
                        }
                        Console.ForegroundColor = ConsoleColor.DarkGreen;
                        Console.Write("Turn left: {0}", John.getTurn());
                        //
                    }
                }
            }
        }
        // Map config
        Console.ReadLine();
    }
}