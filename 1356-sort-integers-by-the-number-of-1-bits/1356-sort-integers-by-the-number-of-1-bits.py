class Solution:
    def sortByBits(self, arr: List[int]) -> List[int]:

        result = []
        bit_count_map = defaultdict(list)

        for num in arr:
            binary = bin(num)[2:]
            
            one_count = binary.count("1")
            bit_count_map[one_count].append(num)

        sorted_dict = {k: sorted(v) for k, v in sorted(bit_count_map.items())}

        for v in sorted_dict.values():
            result.extend(v)
        # print(bin(10000))
        return result

        