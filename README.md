# Smart Traffic-Aware Shortest Path Algorithm for Dynamic Road Networks

## Overview
This project implements a modified shortest path algorithm that considers
dynamic factors such as traffic conditions in addition to distance.
The goal is to compute more realistic routes in road networks.

## Motivation
Traditional shortest path algorithms such as Dijkstra's algorithm
optimize routes based only on distance. However, real-world navigation
must consider traffic congestion, accidents, and other conditions.

## Proposed Approach
The proposed algorithm modifies edge weights using:

Weight = Distance + Traffic Factor

This allows the algorithm to avoid heavily congested routes and
select more efficient paths.

## Features
- Graph-based road network representation
- Traffic-aware edge weights
- Modified Dijkstra shortest path computation
- C implementation

## Algorithm Complexity
Time Complexity:  
O((V + E) log V)

Where:
V = number of vertices  
E = number of edges

## Implementation
The algorithm is implemented in C and demonstrates the calculation
of shortest paths in a simulated road network.

## Author
Debaditya Malakar (RA2411028010034)
Monish Ravibalaji  (RA2411028010013)
Syed Gaffar Mohammed (RA2411028010047)
Department of Networking and Communication  
SRM Institute of Science and Technology
