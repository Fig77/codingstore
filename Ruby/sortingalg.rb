
# Bubble sort

def bubble_sort(array = [])
  sorted = false
  while !sorted
    sorted = true
    i = 0
    while i < sorted.length - 1
      array[i], array[i + 1] = array[i + 1], array[i] if array[i] > array[i + 1]
      sorted = false
      i += 1     
    end
  end
end


