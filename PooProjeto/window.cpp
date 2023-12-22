//
// Created by pmanu on 22/12/2023.
//

#include "window.h"

cWindow::cWindow(int altura, int largura, int w, int h) {
    initscr();
    endwin();
    window = newwin(altura,largura,w,h);
    box(window, 0, 0);
    wrefresh(window);
}

cWindow& cWindow::operator<<(const std::string& str){
    ::wprintw(window, "\n  %s", str.c_str());
    ::wrefresh(window);
    ::box(window,0,0);
    ::wrefresh(window);
    return *this;
}

cWindow& cWindow::operator>>(std::string &str) {
    ::noecho();
    ::cbreak();
    ::keypad(window, TRUE);
    int c = ::wgetch(window);
    bool read = false;
    switch(c) {
        case KEY_UP:
            str = "KEY_UP";
            break;
        case KEY_DOWN:
            str = "KEY_DOWN";
            break;
        case KEY_RIGHT:
            str = "KEY_RIGHT";
            break;
        case KEY_LEFT:
            str = "KEY_LEFT";
            break;
        case KEY_RESIZE:
            str = "KEY_RESIZE";
            break;
        default:
            read = true;
    }
    ::keypad(window, FALSE);
    ::echo();

    if( !read ) {
        return *this;
    }

    ::nocbreak();
    ::ungetch(c);

    char buffer[255];
    ::wgetnstr(window, buffer, 255);
    str = std::string(buffer);
    ::cbreak();
    ::box(window,0,0);
    ::wrefresh(window);
    return *this;
}




void cWindow::setWindow(int altura, int largura, int w, int h, std::string text) {
    initscr();
    endwin();
    Terminal &t = Terminal::instance();
    if(w == 0)
        w = 1;
    if(h == 0)
        h = 1;
    t << move_to(h-1, w-1) <<  "[" << text << "]";
    window = newwin(altura,largura,w,h);
    box(window, 0, 0);
    wrefresh(window);
}