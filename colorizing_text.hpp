/**
 * @file colorizing_text.hpp
 * @author SAMAKAKI
 * @brief 
 * @version 0.1
 * @date 2023-06-19
 * 
 */

#pragma once

#ifndef __COLORIZING_TEXT_
#define __COLORIZING_TEXT_

#include <iostream>

namespace clt{
    /**
     * @brief Add to text fet style
     * 
     * @param text get text which will be has fet style
     * @return std::string 
     */
    std::string fet(std::string text){
        return "\033[1m" + text + "\033[0m";
    }

    /**
     * @brief Add to text italic style
     * 
     * @param text get text which will be has italic style
     * @return std::string 
     */
    std::string italic(std::string text){
        return "\033[3m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to black (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_black(std::string text){
        return "\x1B[30m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to black (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_black(std::string text){
        return "\x1B[40m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to red (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_red(std::string text){
        return "\x1B[31m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to red (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_red(std::string text){
        return "\x1B[41m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to green (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_green(std::string text){
        return "\x1B[32m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to green (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_green(std::string text){
        return "\x1B[42m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to yellow (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_yellow(std::string text){
        return "\x1B[33m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to yellow (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_yellow(std::string text){
        return "\x1B[43m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to blue (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_blue(std::string text){
        return "\x1B[34m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to blue (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_blue(std::string text){
        return "\x1B[44m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to magenta (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_magenta(std::string text){
        return "\x1B[35m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to magenta (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_magenta(std::string text){
        return "\x1B[45m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to cyan (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_cyan(std::string text){
        return "\x1B[36m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to cyan (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_cyan(std::string text){
        return "\x1B[46m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to white (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_white(std::string text){
        return "\x1B[37m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to white (black ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_white(std::string text){
        return "\x1B[47m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright black (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_black(std::string text){
        return "\x1B[90m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright black (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_black(std::string text){
        return "\x1B[100m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright red (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_red(std::string text){
        return "\x1B[91m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright red (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_red(std::string text){
        return "\x1B[101m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright green (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_green(std::string text){
        return "\x1B[92m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright green (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_green(std::string text){
        return "\x1B[102m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright yellow (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_yellow(std::string text){
        return "\x1B[93m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright yellow (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_yellow(std::string text){
        return "\x1B[103m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright blue (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_blue(std::string text){
        return "\x1B[94m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright blue (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_blue(std::string text){
        return "\x1B[104m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright magenta (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_magenta(std::string text){
        return "\x1B[95m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright magenta (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_magenta(std::string text){
        return "\x1B[105m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright cyan (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_cyan(std::string text){
        return "\x1B[96m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright cyan (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_cyan(std::string text){
        return "\x1B[106m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright white (front ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string fg_bright_white(std::string text){
        return "\x1B[97m" + text + "\033[0m";
    }

    /**
     * @brief Coloring text to bright white (back ground)
     * 
     * @param text get text which will be coloring
     * @return std::string 
     */
    std::string bg_bright_white(std::string text){
        return "\x1B[107m" + text + "\033[0m";
    }
}

#endif