
# Bubble sort

# def bubble_sort(array: []): Nil ->

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

# def counting_sort(array: []): Nil -> 

def counting_sort(array = [])
  counter_array = Array.new(0, array.length)
  array.each { |x| counter_array[x] += 1 }
  counter_array.each { |x,i| array[i] = x }
end

# def qck_sort(array: [], min: Integer, max: Integer): Array ->

def qck_sort(array = [], min = 0, max = nil)
  return [] if array.empty?
  max = array.length - 1 if max === nil

  if min < max
    pivot = partition(array, min, max)
    quicksort(array, min, pivot - 1)
    quicksort(array, pivot + 1, max)
  end

  return array
end


def partition(array, min, max)
  pivot, i = min, min
  while i < max do
    i, pivot = pivot, i if array[i] <= array[max]   
    i += 1
  end
  max, pivot = pivot, max
  return pivot
end
