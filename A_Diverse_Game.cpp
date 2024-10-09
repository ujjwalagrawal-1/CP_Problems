from collections import defaultdict, Counter

def count_good_edges(n, k, values, edges):
    adj_list = defaultdict(list)
    for src, dest in edges:
        adj_list[src].append(dest)
        adj_list[dest].append(src)

    freq_counter = [Counter() for _ in range(n + 1)]

    def traverse(node, parent):
        freq_counter[node][values[node - 1]] += 1
        for neighbor in adj_list[node]:
            if neighbor != parent:
                traverse(neighbor, node)
                for val, count in freq_counter[neighbor].items():
                    freq_counter[node][val] += count

    traverse(1, -1)

    valid_edge_count = 0

    for src, dest in edges:
        if freq_counter[dest][values[dest - 1]] > freq_counter[src][values[src - 1]]:
            src, dest = dest, src
        subtree_freqs = freq_counter[dest]
        complement_freqs = freq_counter[1] - subtree_freqs
        if all(count <= k for count in subtree_freqs.values()) and all(count <= k for count in complement_freqs.values()):
            valid_edge_count += 1

    return valid_edge_count