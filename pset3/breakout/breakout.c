//
// breakout.c
//
// Computer Science 50
// Problem Set 3
//

// standard libraries
#define _XOPEN_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Stanford Portable Library
#include <spl/gevents.h>
#include <spl/gobjects.h>
#include <spl/gwindow.h>

// height and width of game's window in pixels
#define HEIGHT 600
#define WIDTH 400

// number of rows of bricks
#define ROWS 5

// number of columns of bricks
#define COLS 10

// radius of ball in pixels
#define RADIUS 10

// lives
#define LIVES 3

// prototypes
void initBricks(GWindow window);
GOval initBall(GWindow window);
GRect initPaddle(GWindow window);
GLabel initScoreboard(GWindow window);
void updateScoreboard(GWindow window, GLabel label, int points);
GObject detectCollision(GWindow window, GOval ball);
//The rate at which the ball moves
double velocity;
double speed;

int main(void)
{
    // seed pseudorandom number generator
    srand48(time(NULL));

    // instantiate window
    GWindow window = newGWindow(WIDTH, HEIGHT);

    // instantiate bricks
    initBricks(window);

    // instantiate ball, centered in middle of window
    GOval ball = initBall(window);

    // instantiate paddle, centered at bottom of window
    GRect paddle = initPaddle(window);

    // instantiate scoreboard, centered in middle of window, just above ball
    GLabel label = initScoreboard(window);

    // number of bricks initially
    int bricks = COLS * ROWS;

    // number of lives initially
    int lives = LIVES;

    // number of points initially
    int points = 0;
    
    //Starting
    waitForClick();
    //Ball movement value
    velocity=2.0;
    speed=3.0;

    // keep playing until game over
    while (lives > 0 && bricks > 0)
    {
        //Stating the scoreboard
        updateScoreboard(window,label,points);
        
        //move ball
        move(ball, velocity, speed);

        //Pause interval
        pause(10);
        //Wait for mouse movement
        GEvent event = getNextEvent(MOUSE_EVENT);
         
        if(event!=NULL)
        {
            if(getEventType(event)==MOUSE_MOVED)
            {
                double x=getX(event)-getWidth(paddle)/2;
                double y = 500;
                setLocation(paddle,x,y);
            }
        }
              
        //BALL DETECT ACTION
        GObject object = detectCollision(window, ball);
        if (object != NULL)
        {
            //If the ball touched the paddle
            if(object==paddle)
            {
                //Bounce of after ball touch paddle
                speed = -speed;
            }
            //If the ball touches the Brick
            else if(strcmp(getType(object),"GRect") == 0)
            {
               //Remove touched brick
               removeGWindow(window, object);
               //Bounce off after Brick collision
               speed = -speed;
               //Increase score by 1
               points = points + 1;
               //Remove collided brick
               bricks = bricks - 1;
            }
        }
        //Ball bounces off
        if (getX(ball) + getWidth(ball) >= getWidth(window))
        {
            velocity = -velocity;
        }
        if (getY(ball) <= 0)
        {
            speed = -speed;
        }
        if(getX(ball) <=0)
        {
            velocity = -velocity;
        }
        //If ball bouces the bottom of the window Actions
        if (getY(ball) + getHeight(ball) >= getHeight(window))
        {
            //Reduce live by 1
            lives = lives - 1;
            //Reset ball location to original state
            setLocation(ball, 190, 200);
            //Reset Paddle location to original state
            setLocation(paddle, 160,500);
            //Update scoreboard
            updateScoreboard(window, label,points);
            //Perform action after mouse clicked
            waitForClick(); 
        }  
    }

        // wait for click before exiting
        waitForClick();

        // THE END!!!
        closeGWindow(window);
        printf("THE END!!!\n");
        return 0;
}

/**
 * Initializes window with a grid of bricks.
 */
void initBricks(GWindow window)
{
    int bricky = 50;
    int rowspace = 20;
    
    for(int i = 0; i < ROWS; i++)
    {
        int brickx = 2;
        for(int j = 0; j < COLS; j++)
        {
            GRect brick = newGRect(brickx+5,bricky, 35, 10);
            if(i<2)
        {setColor(brick,"#FF0000");}
            if(i>=2 && i<=3)
        {setColor(brick, "#00FF00");}
            if(i==4)
         {setColor(brick,"YELLOW");}
         
            setFilled(brick,true);
            add(window,brick);
            brickx=brickx+39;
        }
        bricky=bricky+15;
    }
}

/**
 * Instantiates ball in center of window.  Returns ball.
 */
GOval initBall(GWindow window)
{
    // TODO
    //return NULL;
    GOval ball = newGOval(200-20, 200, 20, 20);
       setColor(ball, "BLUE");
    setFilled(ball, true);
    add(window, ball);
    return ball;
}

/**
 * Instantiates paddle in bottom-middle of window.
 */
GRect initPaddle(GWindow window)
{
    // TODO
    //return NULL;
    GRect paddle = newGRect(200-35, 400, 75, 10);
    setColor (paddle, "BLACK");
    setFilled (paddle, true);
    // add circle to window
    add(window, paddle);
    return paddle;
    
}

/**
 * Instantiates, configures, and returns label for scoreboard.
 */
GLabel initScoreboard(GWindow window)
{
    // TODO
   // return NULL;
   GLabel label = newGLabel("");
   setFont(label,"SanSerif-36");
   add(window, label);
   return label;
}

/**
 * Updates scoreboard's label, keeping it centered in window.
 */
void updateScoreboard(GWindow window, GLabel label, int points)
{
    // update label
    char s[12];
    sprintf(s, "%i", points);
    setLabel(label, s);

    // center label in window
    double x = (getWidth(window) - getWidth(label)) / 2;
    double y = (getHeight(window) - getHeight(label)) / 2;
    setLocation(label, x, y);
}

/**
 * Detects whether ball has collided with some object in window
 * by checking the four corners of its bounding box (which are
 * outside the ball's GOval, and so the ball can't collide with
 * itself).  Returns object if so, else NULL.
 */
GObject detectCollision(GWindow window, GOval ball)
{
    // ball's location
    double x = getX(ball);
    double y = getY(ball);

    // for checking for collisions
    GObject object;

    // check for collision at ball's top-left corner
    object = getGObjectAt(window, x, y);
    if (object != NULL)
    {
        return object;
    }

    // check for collision at ball's top-right corner
    object = getGObjectAt(window, x + 2 * RADIUS, y);
    if (object != NULL)
    {
        return object;
    }

    // check for collision at ball's bottom-left corner
    object = getGObjectAt(window, x, y + 2 * RADIUS);
    if (object != NULL)
    {
        return object;
    }

    // check for collision at ball's bottom-right corner
    object = getGObjectAt(window, x + 2 * RADIUS, y + 2 * RADIUS);
    if (object != NULL)
    {
        return object;
    }

    // no collision
    return NULL;
}
