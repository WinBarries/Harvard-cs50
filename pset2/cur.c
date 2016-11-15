#include "gevents.h"
#include "gobjects.h"
#include "gwindow.h"

int main(void)
{
    GWindow window = newwindow(320, 240);
    GEvent event = newevent(0, 0, 50, 50);
    
    add (window,circle);
    
    while(true)
    {
        GEvents event = getNextEvent(MOUSEEVENT);
        if(event!=NULL)
        {
            
        }
    }    
}
