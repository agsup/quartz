---
title: 1.3: Maintenance Aspects
enableToc: false
enableLinkPreview: true
---

- Life-Cycle Model
	- A description of steps to take when building a software product
	- Model is broken into phases, the number of which vary between models
- Life-Cycle
	- Steps from concept to retirement of a product
- Until late 70's Waterfall was the leading model
	- ### 6 phases:
		1. Requirements phase
			- Concept exploration/refinement
		2. Analysis (specification) phase
			- Requirements are broken down into specifications, a plan is drawn up
		3. Design phase
			- 2 design processes
				1. Architectural Design
					- Product is broken down into modules
				2. Detailed Design
					- Each module is broken down into more specific instruction/specifications
			- These processes result in design documents. which outline how the product works
		4. Implementation phase
			- The individual modules are coded and tested separately
			- The product is then tested as a whole (Integration)
			- Product is then tested by the client (Acceptance testing)
			- Phase is repeated until client is satisfied
		5. Postdelivery maintenance
			- After completion, changes are occasionally made to the product to keep it up-to-date and functional with new systems
			- Postdelivery Maintenance includes two sub-types:
				- Corrective maintenance
					- Removal of errors while keeping the specifications intact
				- Enhancement (software update)
					- Changes to the specifications/implementation
					- Two types of enhancement:
						- Perfective maintenance (performance benefits)
						- Adaptive maintenance (compatibility maintenance)
		6. Retirement
			- Removed from service, functionality of the product is no longer useful
### 1.3.1: The Modern View Of Maintenance
- 70's: Common knowledge was development before maintenance
	1. Product was developed
	2. Product was installed on client's computer
	3. Any changes made to the product post-installation were considered maintenance
- This is a <u><i>temporal definition</i></u>
	- Pre- or Post- installation determined whether an action was considered development or maintenance
	- This is very inconsistent, as the same action can be considered development or maintenance depending on timing alone
	- This is unrealistic for two other reasons:
		1. Long development timelines can mean that the client's requirements could change
		2. This definition also facilitates building everything from scratch with every product, which is uneconomical
- A more modern approach is a <u><i>operational definition</i></u>
	- Maintenance only occurs when a fault is fixed or the requirements change
	- This definition of maintenance is referred to as *modern maintenance* (or, just maintenance)

### 1.3.2: The Importance of Postdelivery Maintenance
- Only good products deserve maintenance, bad products are thrown out
- Software is supposed to reflect a changing world, therefore adaptation is required for relevance
- More and more of a product's total cost is in postdelivery maintenance (70-80% for many organizations)
- Conversely to how new coding techniques should be considered in development, new (better) coding techniques should certainly be implemented in postdelivery as larger amounts of time/money can be saved