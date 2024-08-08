#!/usr/bin/python3
"""
The Practice for the caching algorithm in python
"""

class Node:
    def __init__(self, key, value):
        self.key, self.value = key, value
        self.prev, self.next = None

class LRUCache:
    """
    The algorithm implementation for Least Recently Used
    """
    def __init__(self, capacity: int):
        self.cap = capacity
        self.cache = {} # map key to node

        self.left, self.right = Node(0, 0), Node(0, 0)
        self.left.next, self.next.right = self.right, self.left

    def remove(self, node):
        prev, nxt = node.prev, node.next
        prev.next, nxt.next = nxt, prev


    def insert(self, node):
        prev, nxt =self.right.prev, self.right
        prev, nxt = node.prev, node.next
        prev.next, nxt.prev = nxt, prev

    def get(self, key: int) -> int:
        if key in self.cache:
            self.remove(self.cache[key])
            self.insert(self.cache[key])
            return self.cache[key].value
        return -1


    def put(self, key: int, value: int) -> None:
        if key in self.cache:
            self.remove(self.cache[key])
        self.cache[key] = Node(key, value)
        slef.insert(self.cache[key])

        if len(self.cache) > self.cap:
            lru = self.left.next
            self.remove(lru)
            del self.cache[lru.key]