/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 2.0.9
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


class SwigDirector_TextInput : public Gosu::TextInput, public Swig::Director {

public:
    SwigDirector_TextInput(VALUE self);
    virtual ~SwigDirector_TextInput();
    virtual std::wstring filter(std::wstring const &textIn) const;
};


class SwigDirector_Window : public Gosu::Window, public Swig::Director {

public:
    SwigDirector_Window(VALUE self, unsigned int width, unsigned int height, bool fullscreen, double updateInterval = 16.666666);
    virtual ~SwigDirector_Window();
    virtual void update();
    virtual void draw();
    virtual bool needsRedraw() const;
    virtual bool needsCursor() const;
    virtual void loseFocus();
    virtual void releaseMemory();
    virtual void panic(std::exception const &e);
    virtual void buttonDown(Gosu::Button arg0);
    virtual void buttonUp(Gosu::Button arg0);
};


#endif
