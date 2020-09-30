import random
def gen(n):
	res=""
	for x in range(n):
		res+=chr(random.randrange(127))
	return res
def encrypt(inputFileName,outputFileName,keyFileName):
	ip = open(inputFileName,"r")
	op = open(outputFileName,"w")
	opk = open(keyFileName,"w")
	plaintext = ''.join(i for i in ip.read())
	key = gen(len(plaintext))
	enc = ""
	for x in range(len(plaintext)):
		enc += chr(ord(plaintext[x])^ord(key[x]))
	op.write(enc)
	opk.write(''.join(hex(ord(x))[2:] for x in key))
	ip.close()
	op.close()
	opk.close()
def decrypt(inputFileName,outputFileName,keyFileName):
	ip = open(inputFileName,"r")
	op = open(outputFileName,"w")
	ipk = open(keyFileName,"r")
	ciphertext = ''.join(i for i in ip.read())
	key = ''.join(i for i in ipk.read())
	key = bytearray.fromhex(key).decode()
	dec = ""
	for x in range(len(ciphertext)):
		dec += chr(ord(ciphertext[x])^ord(key[x]))
	op.write(dec)
	ip.close()
	op.close()
	ipk.close()

decrypt("input.txt","output.txt","key.txt")




