#Common subexpression elimination
import re
import sys


inFile = open(sys.argv[1],"r")

outFile = open("result_of_cse.txt", "w")

content = inFile.readlines()
subexpr_table=dict()



#Maintain 3 order tuple(op,op1,op2) in table. Store the temporary in temporaries list.
#if any of op1 or op2 is defined again later, remove the tuple from table.

for i in range(len(content)):
	if '=' in content[i] and not '==' in content[i]: #For cases like L1: t1=10
		Assignexpr = content[i].strip().split('=')
		variable=Assignexpr[0]	#variable holds the LHS value of assignment
		if ':' in Assignexpr[0]:
			subexpr_table=dict() 
			lhs=Assignexpr[0].replace(" ","").split(":")
			variable=lhs[1]

		var_list=re.split('\+|-|\*|/|%|>|<|>=|<=', Assignexpr[1]) 
		if len(var_list)==1:
			found=0
			temp=""
			for key,value in subexpr_table.items():
				for j in value:
					
					#one of the operands got redefined, so remove that expression
					if variable==j: 
						found=1
						temp=key
						break
			if(found==1):
				subexpr_table.pop(temp)
			outFile.write(content[i].strip() + '\n')

		if len(var_list)==2:
			tup=[]
			op1 = var_list[0]
			op2 = var_list[1]
			op=""
			flag=0
			line=content[i]
			if '+' in line:
				op='+'
			if '-' in line:
				op='-'
			if '*' in line:
				op='*'
			if '/' in line:
				op='/'
			if '<' in line:
				op='<'
			if '>' in line:
				op='>'
			if '<=' in line:
				op='<='
			if '>=' in line:
				op='>='
			if '%' in line:
				op='%'
			tup=[op,op1,op2]

			for key,value in subexpr_table.items():
				if tup==value: #common subexpression found
					#Assignment[1] is RHS of assignment, so replace it with intermediate value holding the value of CS
					Assignexpr[1]=key 
					flag=1
			if(flag==0):
				#unique RHS,insert into subexpr table
				subexpr_table[variable]=tup 
				
			outFile.write(str(Assignexpr[0])+'='+str(Assignexpr[1]) + '\n')
	
	elif '==' in content[i]:
		spl=content[i].strip().split('==')
		if '=' in spl[0]:
			tup=[]
			#Assignexpr[0] is lhs, assignexpr[1] is first operand
			Assignexpr=spl[0].split('=') 
			variable=Assignexpr[0]
			if ':' in Assignexpr[0]:
				lhs=Assignexpr[0].replace(" ","").split(":")
				variable=lhs[1]
			
			op1=Assignexpr[1]
			op2=spl[1]
			op="=="
			flag=0
			tup=[op,op1,op2]
			rhs=str(Assignexpr[1])+'=='+str(spl[1])

			for key,value in subexpr_table.items():
				if tup==value:  #Common subexpression found
					rhs=key
					flag=1
			if(flag==0):
				subexpr_table[variable]=tup #unique expression, so insert into subexpr table
			outFile.write(str(Assignexpr[0])+'='+rhs +'\n')
	else:
		outFile.write(content[i].strip() + '\n')

print("Optimized with Common Subexpression Elimination...\nCheck the result in result_of_cse.txt file :)\n")