#ifndef UI_INFO_H
#define UI_INFO_H

#include "..\CMUgraphicsLib\CMUgraphics.h"

//User Interface information file.
//This file contains info that is needed by Input and Output classes to
//handle the user interface

enum GUI_MODE	//Graphical user interface mode
{
	MODE_DRAW,	//Drawing mode (startup mode)
	MODE_PLAY,	//Playing mode
	
};

enum CLR_MODE
{
	MODE_CLR,
	MODE_RESIZE,
	MODE_TOOL,
};

enum VOICE_MODE
{
	MODE_VOICE,
	MODE_MUTE,
};


enum DrawMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_RECT,		//Recangle item in menu
	ITM_LINE,
	ITM_TRI,
	ITM_RHOMBUS,
	ITM_ELIPSE,
	ITM_CHNG_DRAW,
	ITM_CHNG_FILL,
	ITM_RESIZE,	
	ITM_SWITCH,

	ITM_VOICE,      //Voice On or MUTE
	ITM_EXIT,		//Exit item
	
	DRAW_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};
enum ToolsMenuItem //The items of the Draw menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	ITM_SELECT,
	ITM_TOFRONT,
	ITM_TOBACK,
	ITM_COPY,
	ITM_CUT,
	ITM_PASTE,
	ITM_DELETE,
	ITM_SAVE,
	ITM_SAVETYPE,
	ITM_LOAD,
	



	
	TOOLS_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
	
};

enum PlayMenuItem //The items of the Play menu (you should add more items)
{
	//Note: Items are ordered here as they appear in menu
	//If you want to change the menu items order, change the order here
	
	BY_TYPE,   //by type enum
	BY_COLOR,  //by color enum
	ITM_TODRAW, 
	PLY_ITM_EXIT,
	PLAY_ITM_COUNT		//no. of menu items ==> This should be the last line in this enum
};


enum ColorBar //The items of the color bar
{
	CLR_BLACK,
	CLR_WHITE,
	CLR_RED,
	CLR_GREEN,
	CLR_BLUE,

	COLOR_ITM_COUNT
};


enum ResizeBar //The items of the resize bar
{
	FRAC_QUARTER,
	FRAC_HALF,
	FRAC_TWO,
	FRAC_FOUR,

	RESIZE_ITM_COUNT
};



__declspec(selectany) //This line to prevent "redefinition error"

struct UI_Info	//User Interface Info.
{
	GUI_MODE InterfaceMode;
	CLR_MODE ToolBarMode;
	VOICE_MODE VoiceMode;
	int	width, height,	    //Window width and height
		wx , wy,			//Window starting coordinates
		StatusBarHeight,	//Status Bar Height
		ToolBarHeight,		//Tool Bar Height (distance from top of window to bottom line of toolbar)
		MenuItemWidth,		//Width of each item in toolbar menu
	    ToolsItemHeight;	

	color DrawColor;		//Drawing color
	color FillColor;		//Filling color
	color HighlightColor;	//Highlighting color
	color MsgColor;			//Messages color
	color BkGrndColor;		//Background color
	color ToolBarColor;	    //Toolbar color
	color StatusBarColor;	//Status bar color
	int PenWidth;			//width of the pen that draws shapes

	/// Add more members if needed
	
}UI;	//create a global object UI

#endif