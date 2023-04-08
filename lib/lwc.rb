# Solomon Himelbloom
# CS 665 (Final Project)
# 2023-04-07
#
# Simple hashing function of a string.

require 'digest'

class LWC
  def initialize
    @hash = Digest::SHA256.new
  end

  def hash_string(string)
    @hash.hexdigest(string)
  end
end

string = "Lightweight Cryptography"

lwc = LWC.new
puts lwc.hash_string(string)
