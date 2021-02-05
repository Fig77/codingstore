
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
  counter_array = Array.new(array.length, 0)
  array.each { |x| counter_array[x] += 1 }
  counter_array.each { |x,i| array[i] = x }
end




