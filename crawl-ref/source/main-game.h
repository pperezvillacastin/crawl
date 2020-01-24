/**
 * @file
 * @brief UI widget for the main game view
**/

#pragma once

#include "ui.h"
class UIMainGame : public ui::Widget
{
public:
    UIMainGame();
    ~UIMainGame();
    void _render() override;
    void _allocate_region() override;
    bool on_event(const ui::Event& ev) override;

    int getch_ck();

    static UIMainGame* main_game;

private:
    deque<int> m_keys;
};
