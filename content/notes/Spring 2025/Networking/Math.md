---
title: Math
enableToc: false
enableLinkPreview: true
---

# Nyquist and Shannon's Theorems

- Nyquist wrote a theorem for expressing the max data rate for a finite-bandwidth noiseless signal
	- Max = (2B log<sub>2</sub> V) bits/sec
- Shannon expanded this theorem, accounting for noise in the signal
	- Max = (B log<sub>2</sub>(1 + S/N)) bits/sec
- B is how fast signal can change
- S/N (signal to noise ratio) represents how many levels can be seen
- SNR can be expressed as a decibel

| SNR  | dB  |
| ---- | --- | 
| 1    | 0   |
| 10   | 10  |
| 100  | 20  |
| 1000 | 30  |

# Multiplexing

- Modulation: sending bits as signals
- Multiplexing: sharing a channel among users
- Multiplexing methods
	- Frequency division (everyone gets a dedicated freq channel)
	- Time division (full frequency range is passed around on a schedule)
	- Code division multiple access (CDMA)
		- Codes are given to users, and can be sent at the same time
		- Widely used as a part of 3G networks

[[EMFs]]