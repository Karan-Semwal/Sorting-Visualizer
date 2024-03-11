# Sorting-Visualizer

- [X] Bubble Sort
- [X] Selection Sort
- [X] Insertion Sort
- [ ] Cycle Sort
- [ ] Quick Sort
- [ ] Merge Sort

---

### Video

<!-- ![screenshot-sorting-visualizer](https://github.com/Karan-Semwal/Sorting-Visualizer/assets/96228962/b287e483-45c4-420d-8641-b330034d62d1) -->

https://github.com/Karan-Semwal/Sorting-Visualizer/assets/96228962/82c33daf-d42b-42c6-b31f-71ecf075d152

---

### Usage

Edit **Config.hpp** to change *algorithm* and *data* in following way

```cpp
// Config.hpp

...

inline std::vector<int> data_to_be_sorted = 
{
    // ... Data you want to visualize
};

// change sorting algorithm here
inline SORT algorithm_for_sorting = SORT::<CHOOSE_SORTING_ALGORITHM>;
```

---

### Build

```bash
$ git clone https://github.com/Karan-Semwal/Sorting-Visualizer
$ cd Sorting-Visualizer
$ mkdir build
$ cmake -S . -B build
$ cmake --build build
$ ./sv_app
```
