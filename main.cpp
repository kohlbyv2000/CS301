// main.cpp
// Kohlby Vierthaler
// 2024/11/19
// Evil Autocorrect main implementation

//#include "words.hpp"
#include "fltk/FL/Fl.H"
#include "fltk/FL/Fl_Window.H"
#include "fltk/FL/Fl_Button.H"

void button_callback(Fl_Widget* widget, void*) {
    Fl::warning("Button Clicked!");
}

int main() {
    Fl_Window *window = new Fl_Window(400, 300, "My FLTK Application");
    Fl_Button *button = new Fl_Button(160, 120, 80, 40, "Click Me");
    button->callback(button_callback);
    window->end();
    window->show();
    return Fl::run();
}