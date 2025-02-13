---
title: Intro
enableToc: false
enableLinkPreview: true
---

- Protocol layering
	- Divides network functionality
	- Protocol instances (between hosts) talk virtually to their *peers* (same layer)
	- Layers communicate with each other
		- Comms occur via an *interface*
		- Through the interface lower layers provide *services*
	- At the bottom layer (layer 1), messages are carried via/sent over a medium (cables, OTA, etc.)
	- Example: [philosopher-translator-secretary architecture](https://www.google.com/search?client=firefox-b-1-d&q=philosopher-translator-secretary)
	- Higher layers may require less information than is required in lower layers (layers can add/discard information when performing services)
	- A layer can change without affecting other layers (ex. translator language can change without affecting philosophers or secretaries)
	- Layers can split/join messages to/from smaller pieces to send it over the medium
- Connection-Oriented vs Connectionless
	- Conn-Oriented: reliable, slower (requires setup/teardown)
	- Connectionless: less reliable, faster (no/less setup/teardown, but less guarantee)
- Service Primitives
	- Client connects, server accepts
	- Data is sent between client and server
	- Client and server agree to disconnect (disconnect only happens if both agree)
- OSI Reference Model
	- Application
	- Presentation
	- Session
	- Transport
	- Network
	- Data Link
	- Physical
- Propagation delay: how long does it take to get from the sender the the reciever
- Transmission rate: how fast can the bits be loaded onto the sender (to be sent) (bits/sec, bps)
- Link terms
	- full-duplex (bi-directional)
	- half-duplex (bi-directional, one direction at a time)
	- simplex (uni-directional)
	- coax (could be any, chunky guys)
	- fiber (could be any, are fast as fricc)
[[Math]]
