/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.31
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_Gosu_WRAP_H_
#define SWIG_Gosu_WRAP_H_

namespace Swig {
  class Director;
}


class SwigDirector_Window : public Gosu::Window, public Swig::Director {

public:
    SwigDirector_Window(VALUE self, unsigned int width, unsigned int height, bool fullscreen, unsigned int updateInterval);
    virtual ~SwigDirector_Window();
    virtual void update();
    virtual void draw();
    virtual void buttonDown(Gosu::Button btn);
    virtual void buttonUp(Gosu::Button btn);
};


#endif
