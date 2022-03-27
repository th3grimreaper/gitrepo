dict_1={1:"sex", 2:"bad", 3:True}
print(dict_1)
print(dict_1[1])
print(len(dict_1))
dic2=dict({'a': 1, 'b': 3})
print(dic2)
i="a"
if dic2['b']==3:
    print("yes")
else:
    print("no")
print(dict_1.keys())
print(dict_1.values())
print(dic2.keys())
print(dic2.values())
info=dict(name="Sai", age=22, height=167)
print(info.items())
print(info.keys())
print(info.values())
for key,val in info.items():
    print(f'{key} : {val}')