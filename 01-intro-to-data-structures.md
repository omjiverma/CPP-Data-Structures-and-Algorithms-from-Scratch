# Data Structures

## What is a Data Structure?
* A **data structure** is a way of organizing, managing, and storing data so that it can be accessed and modified efficiently. It defines the relationship between the data and the operations that can be performed on it.
* Data structures are essential in computer science because they provide a systematic way to handle data, allowing for the efficient performance of tasks such as searching, sorting, and updating.

## Key Aspects Specified by a Data Structure

A data structure mainly specifies four key aspects:

1. **Organization of Data**: 
   - It defines how data elements are arranged in memory or storage. This includes the layout or sequence in which data is stored, such as in a linear fashion (arrays, linked lists) or a hierarchical structure (trees, graphs).

2. **Data Storage**:
   - It determines the method of storing data elements. For instance, data can be stored contiguously (like in arrays) or linked via pointers (like in linked lists).

3. **Access Methods**:
   - It specifies the operations and methods to access, retrieve, or manipulate the data. This includes how efficiently data can be inserted, deleted, searched, or sorted. Examples include indexing in arrays, push/pop in stacks, and enqueue/dequeue in queues.

4. **Data Relationships**:
   - It defines the relationships between different data elements, illustrating how they are connected. For example, in graphs, nodes are connected via edges; in trees, parent-child relationships define the hierarchy.

## Types of Data Structures
Data structures can be broadly categorized into two types:

### 1. Primitive Data Structures
**Definition**: These are the basic data types provided by a programming language. They are the building blocks for more complex data structures.

**Examples**:
- **Integer**: Numeric values without decimal points.
- **Float**: Numeric values with decimal points.
- **Character**: Single alphabet or symbol.
- **Boolean**: Values representing `true` or `false`.

**Table: Space Occupied and Value Range of Basic Data Types**

| Type     | Symbol  | Space Occupied | Minimum Value       | Maximum Value       | Default Value |
|----------|---------|----------------|---------------------|---------------------|---------------|
| Integer  | `byte`  | 1 byte         | −2<sup>7</sup> (−128)   | 2<sup>7</sup> − 1 (127)   | 0             |
|          | `short` | 2 bytes        | −2<sup>15</sup>         | 2<sup>15</sup> − 1       | 0             |
|          | `int`   | 4 bytes        | −2<sup>31</sup>         | 2<sup>31</sup> − 1       | 0             |
|          | `long`  | 8 bytes        | −2<sup>63</sup>         | 2<sup>63</sup> − 1       | 0             |
| Float    | `float` | 4 bytes        | 1.175 × 10<sup>−38</sup> | 3.403 × 10<sup>38</sup>  | 0.0f          |
|          | `double`| 8 bytes        | 2.225 × 10<sup>−308</sup>| 1.798 × 10<sup>308</sup> | 0.0           |
| Char     | `char`  | 2 bytes        | 0                   | 2<sup>16</sup> − 1       | 0             |
| Boolean  | `bool`  | 1 byte         | `false`             | `true`              | `false`       |

### 2. Non-Primitive Data Structures
**Definition**: These are more complex data structures derived from primitive data types. They can be used to store multiple values and have a more defined structure.

**Types**:

#### Linear Data Structures:
- **Array**: A collection of elements of the same type, stored in contiguous memory locations. Supports indexing.
- **Linked List**: A sequence of elements where each element points to the next, forming a chain. Types include singly linked lists, doubly linked lists, and circular linked lists.
- **Stack**: Follows Last In, First Out (LIFO) principle. Elements can be added or removed from the top only.
- **Queue**: Follows First In, First Out (FIFO) principle. Elements are added at the rear and removed from the front.

#### Non-Linear Data Structures:
- **Tree**: A hierarchical structure with a root node and child nodes. Common types include binary trees, binary search trees (BST), AVL trees, and heaps.
- **Graph**: Consists of nodes (vertices) and edges (connections between nodes). Can be directed or undirected.
- **Trie**: A tree-like structure that stores strings efficiently, often used in dictionaries or auto-complete features.

#### Hash-Based Data Structures:
- **Hash Table**: Uses a hash function to map keys to values for fast data retrieval. Helps to manage key-value pairs efficiently.
