#pragma once
#include <vector>

inline static constexpr short WIDTH = 800;
inline static constexpr short HEIGHT = 600;

inline static short BAR_WIDTH = 30;
inline static constexpr short BAR_HEIGHT = 30;
inline static constexpr short BAR_PADDING = 5;

inline static constexpr float POS_X = 100.f;
inline static constexpr float POS_Y = HEIGHT - BAR_PADDING;


void print(std::vector<int> &nums);