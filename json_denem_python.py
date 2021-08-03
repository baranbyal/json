import json

f=open('stitching.json')
array = f
data = json.load(array)

horizontalLW = data['horizontalLW']
horizontalLW = data['horizontalMW']
verticalLW = data['verticalLW']
verticalMW = data['verticalMW']


print(horizontalLW)
