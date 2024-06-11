import matplotlib.pyplot as plt

# Define the control flow graph as a dictionary
cfg = {
    'BB1': {'successors': ['BB2'], 'edge_label': ''},
    'BB2': {'successors': ['BB3', 'BB4'], 'edge_label': 'if( not t5)	goto L2'},
    'BB3': {'successors': ['BB1'], 'edge_label': 'if( not t5)	goto L2'},
    'BB4': {'successors': [], 'edge_label': ''}
}

# Define node labels
labels = {
    'BB1': '''Basic Block 1:
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
    i=0''',
    'BB2': '''Basic Block 2:
L1:
    t5=i<5
    if( not t5)	goto L2''',
    'BB3': '''Basic Block 3:
    if( not t5)	goto L2
    t1=a+b
    c=t1
    t1=a+b
    d=t1
    goto L1''',
    'BB4': '''Basic Block 4:
L2: 
    t3=c*d
    i=t3
    t3=c*d
    j=t3
    t3=c*d
    k=t3
    t4=c+e
    result=t4'''
}

# Draw the control flow graph
plt.figure(figsize=(10, 6))
positions = {'BB1': 0, 'BB2': 1, 'BB3': 2, 'BB4': 3}
for node, data in cfg.items():
    for successor in data['successors']:
        plt.arrow(positions[node], 1, positions[successor] - positions[node], 0, length_includes_head=True, head_width=0.15)
        plt.text((positions[node] + positions[successor]) * 0.5, 1, data['edge_label'], horizontalalignment='center')
    plt.text(positions[node], 1, labels[node], horizontalalignment='center', verticalalignment='top', fontsize=9)
plt.ylim(0, 2)
plt.title("Control Flow Graph")
plt.axis('off')
plt.show()

