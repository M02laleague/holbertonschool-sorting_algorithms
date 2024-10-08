# C - Sorting algorithms & Big O

![C Programming](https://img.shields.io/badge/C-Programming-blue.svg)
![Holberton School](https://img.shields.io/badge/Holberton-School-red.svg)

In this project, I implemented several different sorting algorithms.

* **Team:** Project to be done in teams of 2 people
  - Fassih Belmokhtar
  - Salomon Diallo
* **Due time** 1 week 

## Ojectives to assimilate 

Understand Sorting Algorithms:
* Learn at least four different sorting algorithms:
Bubble Sort
Insertion Sort
Selection Sort
Quick Sort
* Master Big O Notation:
Understand what Big O notation is.
Evaluate the time complexity of algorithms using Big O notation.
* Select Appropriate Sorting Algorithms:
Determine the best sorting algorithm for a given input based on characteristics like size and order.
* Recognize Stable Sorting Algorithms:
Understand what a stable sorting algorithm is and why it matters.
* Code Style and Documentation:
Follow Betty style guidelines for code formatting.
Document code properly using Betty documentation standards.
* Work with Data Structures:
Implement sorting algorithms using arrays and doubly linked lists.
Use provided functions like print_array and print_list for output.
* Compile and Test:
Compile code using specified flags (-Wall -Wextra -Werror -pedantic -std=gnu89).
Test sorting algorithms with various datasets to ensure correctness.
* Collaborative Programming:
Work effectively in pairs, practicing pair programming techniques.

## Helper Files :raised_hands:

* [print_array.c](./print_array.c): C function that prints an array of integers. 
* [print_list.c](./print_list.c): C function that prints a `listint_t` doubly-linked list. 

## Header Files :file_folder:

* [sort.h](./sort.h): Header file containing definitions and prototypes for all types and functions written for the project.

Data Structure:
```
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
```

Function Prototypes:

| File                       | Prototype                                         |
| -------------------------- | ------------------------------------------------- |
| `print_array.c`            | `void print_array(const int *array, size_t size)` |
| `print_list.c`             | `void print_list(const listint_t *list)`          |
| `0-bubble_sort.c`          | `void bubble_sort(int *array, size_t size);`      |
| `1-insertion_sort_list.c`  | `void insertion_sort_list(listint_t **list);`     |
| `2-selection-sort.c`       | `void selection_sort(int *array, size_t size);`   |
| `3-quick_sort.c`           | `void quick_sort(int *array, size_t size);`       |

Data Structures:
```
typedef enum kind_e
{
	SPADE = 0,
	HEART,
	CLUB,
	DIAMOND
} kind_t;

typedef struct card_s
{
	const char *value;
	const kind_t kind;
} card_t;

typedef struct deck_node_s
{
	const card_t *card;
	struct deck_node_s *prev;
	struct deck_node_s *next;
} deck_node_t;
```
## Tasks :page_with_curl:

* **0. Bubble sort**
  * [0-bubble_sort.c](./0-bubble_sort.c): C function that sorts an array of integers in ascending order using the Bubble Sort algorithm.
  * Prints the array after each swap.
  * [0-O](./0-O): Text file containing the best, average, and worst case time complexities of the Bubble Sort algorithm, one per line.

* **1. Insertion sort**
  * [1-insertion_sort_list.c](./1-insertion_sort_list.c): C function that sorts a `listint_t` doubly-linked list of integers in ascending order using the
  Insertion Sort algorithm.
  * Prints the list after each swap.
  * [1-O](./1-O): Text file containing the best, average, and worst case time complexities of the Insertion Sort algorithm, one per line.

* **2. Selection sort**
  * [2-selection_sort.c](./2-selection_sort.c): C function that sorts an array of integers in ascending order using the Selection Sort algorithm.
  * Prints the array after each swap.
  * [2-O](./2-O): Text file containing the best, average, and worst case time complexities of the Selection Sort algorithm, one per line.

* **3. Quick sort**
  * [3-quick_sort.c](./3-quick_sort.c): C function that sorts an array of integers in ascending order using the Quick Sort algorithm.
  * Implements the Lomuto partition scheme.
  * Always uses the last element of the partition being sorted as the pivot.
  * Prints the array after each swap.
  * [3-O](./3-O): Text file containing the best, average, and worst case time complexities of the Quick Sort Lomuto Partition scheme algorithm, one per line.

  * **Holberton School** - providing the opportunity to learn and grow as a software engineer

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


<p align="center">
  <img
   src="https://cdn.prod.website-files.com/64107f65f30b69371e3d6bfa/65c6179aa44b63fa4f31e7ad_Holberton-Logo-Cherry.svg"
   alt="Holberton School logo">
</p>