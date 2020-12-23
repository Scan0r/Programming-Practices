BEGIN {
  valid_passwords=0
  total_passwords=0
}

{
  total_passwords+=1

  idx_minus = index($1, "-")
  idx_space = index($0, " ")
  min = substr($1, 0, idx_minus - 1)
  max = substr($1, idx_minus + 1, idx_space)
  char = substr($2, 0, 1)
  pwd = $3
  pwd_len = length(pwd)

  N = gsub(char, pwd) - 1

  if ((N - min) >= 0 && (max - N) >= 0) {
    valid_passwords = valid_passwords + 1
  }
}

END {
  print "Total passwords: " total_passwords
  print "Valid passwords: " valid_passwords
}
