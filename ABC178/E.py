from scipy.spatial.distance import minkowski

a = [ 5, 9, 6, 3 ]

print( minkowski( a, b, 1 ) )
print( minkowski( b, c, 1 ) )
print( minkowski( c, a, 1 ) )