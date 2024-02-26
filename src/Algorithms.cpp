#include "Sort.h"

// Bubble Sort
void Sort::bubble_sort(sf::RenderWindow &window, std::vector<int> &data)
{
    drawData(data, window);
    size_t tmp = 0;
    int n = data.size();
    bool swapped;
    for (int i = 0; i < n - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (data[j] > data[j + 1])
            {
                tmp = 0;
                std::swap(data[j], data[j + 1]);
                swapped = true;
                while (tmp < 150000000)
                    tmp++;

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
}

// Insertion Sort
void Sort::insertion_sort(sf::RenderWindow &window, std::vector<int> &data)
{
    drawData(data, window);
    size_t tmp = 0;

    printf("insertion sort.\n");
    for (size_t i = 1; i < data.size(); i++)
    {
        for (size_t j = i; j > 0 && data.at(j) < data.at(j - 1); j--)
        {
            tmp = 0;
            std::swap(data.at(j), data.at(j - 1));
            while (tmp < 150000000)
                tmp++;

            drawData(data, window);
        }
    }
}