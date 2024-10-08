import heapq
from typing import List

def dijkstra(graph: List[List[int]], start: int) -> List[int]:
    n = len(graph)
    dist = [float('inf')] * n
    dist[start] = 0
    heap = [(0, start)]
    while heap:
        d, u = heapq.heappop(heap)
        if d > dist[u]:
            continue
        for v in graph[u]:
            if v == -1:
                continue
            alt = dist[u] + 1
            if alt < dist[v]:
                dist[v] = alt
                # sauravhathi
                heapq.heappush(heap, (alt, v))
    return dist

def nearest_meeting_cell(n: int, edges: List[int], c1: int, c2: int) -> int:
    graph = [[] for _ in range(n)]
    for i, e in enumerate(edges):
        if e != -1:
            graph[i].append(e)
    a = dijkstra(graph, c1)
    b = dijkstra(graph, c2)
    min_dist = float('inf')
    min_node = -1
    for i in range(n):
        if a[i] != float('inf') and b[i] != float('inf') and a[i] + b[i] < min_dist:
            min_dist = a[i] + b[i]
            min_node = i
    return min_node

n = int(input())
edges = list(map(int, input().split()))
c1, c2 = map(int, input().split())
print(nearest_meeting_cell(n, edges, c1, c2))