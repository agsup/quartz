## Cohesion

### Myers' 7 levels of Cohesion (adapted by Schach)

From bad to good:

1. Coincidental Cohesion (worst)
2. Logical Cohesion
3. Temporal Cohesion
4. Procedural Cohesion
5. Communicational Cohesion
6. Functional Cohesion
7. Informational Cohesion (best)

#### 1. Coincidental Cohesion

- This module performs multiple, completely unrelated operations, thrown together *by coincidence*
- This type of module often results from from strictly enforcing size minimums and maximums on modules
	- This is because functionally ideal modules might be "too big" or "too small", and thus are broken up into sub-modules that are useless unless used together, or joined into a "mega-module" that is only useful when a portion of it is used at once
- These are bad as modules because they *lack reusability*
- These types of modules are easily fixed as they can be joined or broken up into more useful modules

#### 2. Logical Cohesion

- 