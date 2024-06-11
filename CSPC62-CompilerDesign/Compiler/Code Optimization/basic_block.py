import re

def identify_basic_blocks(tac):
    # Split the code into lines
    lines = tac.split('\n')

    # Initialize basic blocks
    basic_blocks = []

    # Initialize current basic block
    current_block = []

    # Regex pattern to match labels and branch instructions
    label_pattern = r'^L\d+:$'
    branch_pattern = r'^\s*if.*goto L\d+$'

    # Iterate through each line
    for line in lines:
        # Check if the line is a label
        if re.match(label_pattern, line.strip()):
            # If the current basic block is not empty, add it to the list of basic blocks
            if current_block:
                basic_blocks.append(current_block)
                current_block = []
        
        # Check if the line is a branch instruction
        elif re.match(branch_pattern, line.strip()):
            # Add the current line to the current basic block
            current_block.append(line)
            # Add the current basic block to the list of basic blocks
            basic_blocks.append(current_block)
            # Start a new basic block
            current_block = []
        
        # Add the line to the current basic block
        current_block.append(line)

    # If the current basic block is not empty, add it to the list of basic blocks
    if current_block:
        basic_blocks.append(current_block)

    return basic_blocks

# Given TAC
tac_code = """
    t0=10+10
    a=t0
    t0=a+10
    b=t0
    t1=20*3
    c=t1
    t2=25-10
    d=t2
    t3=c+d
    e=t3
    i=0
L1:
    t5=i<5
    if( not t5)	goto L2
    t1=a+b
    c=t1
    t1=a+b
    d=t1
    goto L1
L2: 
    t3=c*d
    i=t3
    t3=c*d
    j=t3
    t3=c*d
    k=t3
    t4=c+e
    result=t4
"""

# Identify basic blocks
basic_blocks = identify_basic_blocks(tac_code)

# Print basic blocks
for i, block in enumerate(basic_blocks):
    print(f"Basic Block {i + 1}:")
    print('\n'.join(block))
    print()

