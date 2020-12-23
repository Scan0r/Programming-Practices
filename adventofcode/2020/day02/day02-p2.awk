BEGIN {
  valid_passwords=0
  total_passwords=0
}

{
  total_passwords+=1

  idx_minus = index($1, "-")
  idx_space = index($0, " ")
  first = substr($1, 0, idx_minus - 1)
  second = substr($1, idx_minus + 1, idx_space)
  char = substr($2, 0, 1)
  pwd = $3
  pwd_len = length(pwd)

  split(pwd, pwd_arr, "")

  at_first = 0
  at_second = 0

  if (pwd_arr[first] == char)
    at_first = 1

  if (pwd_arr[second] == char)
    at_second = 1

  if (xor(at_first, at_second) == 1) {
    valid_passwords = valid_passwords + 1
  }
}

END {
  print "Total passwords: " total_passwords
  print "Valid passwords: " valid_passwords
}
