## From Schach, chapter 11

2. What three things must be specified in the specification document?
	2. Functional Requirements
	3. Constraints
	4. Acceptance Criteria
3. **List the steps of the analysis workflow, as given in the book and augmented in class.**
	- Iterate  
	- Functional Modeling  
	- Entity Class Modeling  
	- Dynamic Modeling  
	- Extract Boundary Classes  
	- Refine Use Cases - do use-case realization  
	- Draw up an SPMP
4. Explain the connection between functional modeling and use case scenarios.
	- A Use case scenario is a specific instantiation of a use case, Functional modeling presents the scenarios of all use cases
5. **Explain each of the following and give a brief example (i.e. draw and label a small example):**
	- ERD (easy rectangle diamond)
	- Statechart (lollipop, flow)
	- CRC Cards (class-responsibility-collaboration)
	- Communication diagram 
	- Sequence diagram

## From notes on Wiegers, chapter 11

6. **Explain each of the following and give a brief example (i.e. draw and label a small example):**
	- DFD (circles for methods, rectangles for actors, arrows for data)
	- STD (Rectangles for states, arrows for actions)
	- Dialog map
	- Class diagram
	- Decision tree

**Three of the 10 diagrams will be on the test**

- Know these:
	- What does it do?
	- What are the symbols?
	- Draw the diagram

Example for ERD:

- It models long-lived data (ex. Database)
- Symbols are rectangle for class ,diamond for relationship, line for connection, tri-branch for "many-to" relation ("Person" can have multiple "jobs", for example)
- Diagram using these symbols

Notes:
- 5b and 6b are the **same thing**
- Class Diagram and ERD do the same thing (Long-Lived Data, but in different ways)
- Communication vs. DFD

| Comm                                | DFD                                    |
| ----------------------------------- | -------------------------------------- |
| Models one instance of one use case | Models data flow through entire system, disregarding sequence, uses hierarchy to facilitate top-down design | 
| Different Symbols                   | Different Symbols                      |


## From MMM chapters 4, 5, 9

7. **What is conceptual integrity? Why is it so important? How is it achieved?** **(very likely on the test)**
	- Conceptual integrity is the maintaining of the original design and architecture when you're adding features. It is important in order to maintain ease of use, maintainability, and construction. Achieved by having a small team of architects (or ideally one).
8. What is the second system effect? Why does it happen? How can it be avoided?
	- The second system effect is where a system designer, after making a successful first system, tries to add too many extra features to the second system, usually leading to failure. It happens due to inflated confidence. It can be avoided by self-discipline, being mindful, and assigning value to functions
9. How do program space and “size control” affect time and complexity in programming?
	- More functionality makes it more complex, and more functionality also means more space, with speed being constant
	- Time/Space/Complexity, improving one hurts the other two

## From Schach, chapter 8

10. List and define the two types of reuse.
	- Opportunistic Reuse - reuse of a component previously designed for a previous project 
	- Deliberate Reuse - Specifically designing components to be reused
11. **What are the major impediments to software reuse?**
	- NIH (Not invented here) syndrome  
	- Fear that component will introduce faults  
	- Storing the reusable components  
	- Reuse can be expensive  
	- Legal Issues  
	- Lack of Source Code
12. Explain why reuse saves more on maintenance than on development.
	- Reusable components are well tested and documented which simplifies maintenance, but development is the same because the component still needs to be integrated
13. Explain the difference between a framework, a library, and a design pattern.
	- Framework - a set of cooperating classes that make a reusable design for a specific class of software  
	- Library - a set of related reusable routines  
	- Design Pattern - a set of interacting classes which must be customized to create a specific design
14. Give the author’s definition of a “portable” system.
	- A product is portable if it is significantly less expensive to adapt it to run on a new computer than to write it from scratch
15. Why is portability so important for software systems?
	- Saves money on development of the adaptation  
	- Software has a longer life cycle than hardware, so software will have to be ported an average of 4 times

## From notes on Bass, chapters 1 and 2

16. **Define software architecture. **
	- The Software Architecture of a program or computing system is the structure or structures of the system which comprise software elements, the externally visible properties of those elements, and the relationships among them
	- structures system software elements visible properties relationships
1. Give three reasons why software architecture is important.
	- It allows for communication among the stakeholders
	- It manifests the earliest design decisions and it defines the constraints  
	- It is a transferable abstraction of a system
2. Briefly describe each of the following types of structures: module, component & connector, allocation.
	- Module Structure - units of implementation; code based  
	- Component & Connector Structures - run-time components and connectors which allow communication among the components  
	- Allocation Structures - answer questions about assignments, deployments, and implementation
3. Describe the parts of the “four plus 1” standard for architecture.
	- Logical - module class view  
	- Process - component and connector view of concurrency and functionality distribution  
	- Development - Allocation view mapping software to development environment  
	- Physical - Allocation view mapping processes onto processors and communication nodes  
	- +1 - Check all of them against the use cases

## From notes on Tsui, chapter 7

20. Describe the relationship between the functional and non-functional requirements, as related to architecture and design.
	- Architecture is the high-level of the system and driven by the non-functional requirements
	- Design is much finer detailed, and is driven by the architecture plus the functional requirements
21. List five examples of architecture patterns.
	- Pipes & Filters  
	- Layered  
	- Event-Driven  
	- Client-Server  
	- Three Tier

## From Schach, chapter 7

23. Give several reasons why good modular design is important.
	- Reduces cost of maintenance  
	- Makes it easier to read and understand  
	- Easier to Debug  
	- Easier to Extend/Add Features
24. **Define cohesion.**
	- Strength within a module - how well the code belongs together
25. **List (in order) and briefly describe seven levels of cohesion.**
	1. Informational - Operations on the same data  
	2. Functional - one operation  
	3. Communicational - multiple operations by sequence on the same data  
	4. Procedural - related by algorithm  
	5. Temporal - time relation  
	6. Logical - multiple operations selected by the flag variable  
	7. Coincidental - unrelated
26. **Define coupling.**
	- Bond between two modules
27. **List (in order) and briefly describe five levels of coupling**
	1. Data - simple localized data passed  
	2. Stamp - pass structure but only use a portion of it  
	3. Control - pass flags  
	4. Common - global data  
	5. Content - reference memory
28. Briefly describe the steps in the evolution from modules to objects.
	- Modules 
	- Good modules (coupling/cohesion)
	- Data encapsulated modules
	- ADTs
	- Info hiding (public/private sections)
	- Object (inheritance)
29. Explain the concept and benefits of polymorphism, along with any other important closely related concepts.
	- Use of a base class that is inherited to make multiple versions of a function, called with dynamic binding

## From Schach, chapter 12

30. Explain what is involved in completing the class diagrams.
	- Determine the format of attributes, and then assign methods to the relevant classes.
31. Explain what is involved in performing the detailed design.
	- Data structures are chosen, and specific algorithms are selected
32. Explain cyclomatic complexity and fan-in/out and compare their effectiveness.
	- Cyclomatic complexity - number of binary decisions + 1
	- Fan-in - number of flows into a class plus global data accessed  
	- Fan-out - number of flows out of a class plus number of data structures updated by the class
	- They are all equally effective

## From McConnell, chapter 5

33. **What is the Primary Technical Imperative? Why is it so important?**
	- It is to manage complexity. Complexity is a major reason as to why projects fail
35. Define abstraction and encapsulation and explain how they are related.
	- Abstraction - engagement while safely ignoring some details  
	- Encapsulation - Forbidding Details
	- Abstraction allows high level, encapsulation requires high level
36. Give some reasons as to why information hiding is important.
	- Decreases Complexity  
	- Increases Modularity  
	- Useful at all levels

## From McConnell, chapter 6

37. Define ADT and class and explain how they are related.
	- ADT - Abstract Data Type, collection of data and operations that work on that data
	- Class - collection of routines and data that share responsibility
38. Explain the concept of class inheritance and explain why it is important.
	- The purpose of class inheritance is to create simpler code by defining a base class that specifies common elements of two or more derived classes.  
	- It's important because it helps us to avoid the need to repeat code and data in multiple locations.
39. What are the pros and the cons of using class inheritance?
	- Pros - Avoids repeating code and data in multiple locations (reuse code without rewriting it)
	- Cons - Increases Complexity
	- **Reduces redundant code, increases complexity**
40. What are two things to avoid, related to using inheritance? Why?
	- Deep Inheritance, because it is easy to lose track of.
	- Multiple Inheritance, because it can be dangerous to your system.
	- TL;DR: **Multiple, Deep, Complexity**