//You just DO WHAT THE FUCK YOU WANT TO.
#include<X11/Xlib.h>
#define V e.xbutton
int main(){Display*d;XEvent e;size_t w,p=GrabModeAsync;if(d=XOpenDisplay(0)){XGrabButton(d,1,Mod1Mask,XRootWindow(d,0),1,ButtonPressMask,p,p,0,0);for(;;){XNextEvent(d,&e);if(w=V.subwindow){XMoveWindow(d,w,V.x-9,V.y-9);}}}}