{
  numbers[NR - 1] = $1
}

END {
  for (i in numbers) {
    n = numbers[i]
    for (j in numbers) {
      m = numbers[j]
      for (k in numbers) {
        p = numbers[k]
        if (n + m + p == 2020) {
          print n * m * p
          exit
        }
      }
    }
  }
}
