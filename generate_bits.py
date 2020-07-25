def generate_bits(n):
    bits = []
    def go(i, curr):
        if i == n:
            bits.append("".join(curr))
            return
        curr[i] = "0"
        go(i+1, curr)
        curr[i] = "1"
        go(i+1, curr)

    go(0, [0] * n)
    return bits




def main():
    print(generate_bits(3))
    print(generate_bits(4))

main()
