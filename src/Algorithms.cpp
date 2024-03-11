#include "Sort.h"
#include "Timer.h"
#include "Global.h"

// Bubble Sort
void Sort::bubble_sort(sf::RenderWindow &window, std::vector<int> &data)
{
    drawData(data, window);
    printf("Bubble Sort.\n");

    int n = data.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (data[j] > data[j + 1])
            {
                std::swap(data[j], data[j + 1]);
                swapped = true;

                Wait_For_Seconds(DELAY_TIME);
                drawData(data, window);
            }
        }
        if (!swapped)
            break;
    }
}

// Selection Sort
void Sort::selection_sort(sf::RenderWindow &window, std::vector<int> &data)
{
    drawData(data, window);
    printf("Selection Sort.\n");

    int n = data.size();
    for (int i = 0; i < n - 1; ++i)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (data[j] < data[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            std::swap(data[i], data[minIndex]);
            
            Wait_For_Seconds(DELAY_TIME);
            drawData(data, window);
        }
    }
}

// Insertion Sort
void Sort::insertion_sort(sf::RenderWindow &window, std::vector<int> &data)
{
    drawData(data, window);
    printf("Insertion Sort.\n");

    for (size_t i = 1; i < data.size(); i++)
    {
        for (size_t j = i; j > 0 && data.at(j) < data.at(j - 1); j--)
        {
            std::swap(data.at(j), data.at(j - 1));

            Wait_For_Seconds(DELAY_TIME);
            drawData(data, window);
        }
    }
}
