class MyHashSet:

    def __init__(self):
        self.size = 1000
        self.table = [[] for _ in range(self.size)]
        
    def hash_func(self, key: int):
        return hash(key)%self.size

    def add(self, key: int) -> None:
        hash_value = self.hash_func(key)
        if key not in self.table[hash_value]:
            self.table[hash_value].append(key)


    def remove(self, key: int) -> None:
        hash_value = self.hash_func(key)
        if key in self.table[hash_value]:
            self.table[hash_value].remove(key)

    def contains(self, key: int) -> bool:
        hash_value = self.hash_func(key)
        if key in self.table[hash_value]:
            return True
        else:
            return False 


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)