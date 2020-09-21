#!/usr/bin/env ruby

def strike(word)
  return "<strike>#{word}</strike>"
end

def mask_article(str, words)
  words.each do |word|
    str.gsub!(word, strike(word))
  end

  return str
end

