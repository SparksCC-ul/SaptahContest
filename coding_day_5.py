def BracketValid():
    stack = []
    string = input('Enter the expression:>>>')
    if len(string)>104:
        print("Enter a string less than 104 characters")
        return False
    expr = ["(", "{", "["]
    for char in string:
        if char in expr:
            stack.append(char)
        else:
            if not stack:
                return 0
            popped_item = stack.pop()
            if popped_item == '(':
                if char != ")":
                    return False
            if popped_item == '{':
                if char != "}":
                    return False
            if popped_item == '[':
                if char != "]":
                    return False
    if stack:
        return False
    return True

if BracketValid():
    print("Valid!")
else:
    print("Not Valid!")
