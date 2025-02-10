# Highlights

- Gaining momentum with Godot
	- Raycasting to allow interaction with 2D boards in a 3D envirionment
- Decided on an MVVM architecture with a GDExtension ViewModel (C++ Model, Godot View)
	- MVVM vs. MVC: MVC seems impractical with codebases that are not (easily) interoperable
		- V talks to VM, M talks to VM, VM talks back to both

# Drawbacks

- Messing with interops before switching to GDExtensions