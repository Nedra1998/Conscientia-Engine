#include <iostream>
#include <vector>
#include <ncurses.h>
using namespace std;

namespace Conscientia
{
  /*=====>>>>>-----FUNCTIONS-----<<<<<=====*/
  /*=====>>>>>-----Initilization-----<<<<<=====*/
  void initilizeConscientia();
  void advancedInit(bool cursor, bool echo, bool raw);
  /*>>>>>-----SETTINGS-----<<<<<*/
  void setAutoRefresh(bool setting);
  /*>>>>>-----NCURSES INITILIZATION-----<<<<<*/
  void initilizeColors();
  void setCursor(bool setting);
  void setEcho(bool setting);
  void setRaw(bool setting);
  /*=====>>>>>-----Run Time-----<<<<<=====*/
  /*>>>>>-----WINDOW-----<<<<<*/
  /*>>>>>-----Initilization-----<<<<<*/
  void createWindow(string name, int posX, int posY, int sizeX, int sizeY, bool border);
  /*>>>>>-----Management-----<<<<<*/
  void drawAllBorders();
  void drawBorder(int pointer);
  void clearAllWindows();
  void clearWindow(int pointer);
  int findWindowPointer(string name);
  void setWindowColor(int pointer, int text, int background);
  void clearWindowColor(int pointer);
  /*>>>>>-----Termination-----<<<<<*/
  void terminateAllWindows();
  void terminateWindow(int pointer);
  /*>>>>>-----USER INTERFACE-----<<<<<*/
  /*>>>>>-----Input-----<<<<<*/
  char gchar();
  char cchar();
  int gint();
  int cint();
  string cstr();
  float gfloat();
  /*>>>>>-----Output-----<<<<<*/
  void print(int pointer, string str);
  void cprint(string str);
  void fprint(string name, string str);
  void mprint(int pointer, int x, int y, string str);
  void cmprint(int x, int y, string str);
  void fmprint(string name, int x, int y, string str);
  /*>>>>>-----SYSTEM-----<<<<<*/
  /*>>>>>-----Update-----<<<<<*/
  void update();
  /*-----NCURSES-----*/
  void updateAllWindows();
  void updateWindow(int pointer);
  /*=====>>>>>-----Termination-----<<<<<=====*/
  void terminateConscientia();
};
