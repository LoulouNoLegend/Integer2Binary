def main():
    while True:
        int_bits = ""
        integer = int(input("Enter an integer:\n"))
        while integer >= 1:
            r = integer%2
            integer = int((integer-r)/2)
            int_bits += str(r)
        print(f"\nThe binary equivalent is:\n{int_bits[::-1]}\n")
        user_choice = str(input("N: Convert an other number\nQ: Quit the app\n"))
        if user_choice.lower() == 'q':
            break

if __name__ == "__main__":
    main()