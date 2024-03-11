#pragma once
#include <vector>

inline constexpr short WINDOW_WIDTH = 800;
inline constexpr short WINDOW_HEIGHT = 600;

// default values
inline float BAR_WIDTH_SCALER  = 10;
inline float BAR_HEIGHT_SCALER = 20;

inline constexpr short BAR_PADDING = 5;

inline constexpr float POS_X = 0 + BAR_PADDING;
inline constexpr float POS_Y = WINDOW_HEIGHT - BAR_PADDING;

// print vector values
void print(std::vector<int> &nums);

static constexpr float DELAY_TIME = 0.1f;
// timer to pause the execution
void Wait_For_Seconds(float delayTime);