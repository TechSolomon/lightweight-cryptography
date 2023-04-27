# Solomon Himelbloom
# CS 665 (Final Project)
# 2023-04-07
#
# Simple hashing function with demo string.

require 'digest'
require 'openssl'

class LWC
  def initialize
    @hash = Digest::SHA256.new
  end

  def hash_string(plaintext)
    @hash.hexdigest(plaintext)
  end

  # def hash_file(filename)
  #   File.open(filename, 'rb') do |file|
  #     buffer = ''
  #     @hash.update(buffer) until file.eof
  #   end
  #   @hash.hexdigest
  # end

  # Hash-based Message Authentication Code
  # http://en.wikipedia.org/wiki/HMAC
  def generation
    key = 'key'
    data = 'The quick brown fox jumped over the lazy dog.'
    hmac = OpenSSL::HMAC.hexdigest(OpenSSL::Digest.new('sha256'), key, data)
    puts hmac
  end
end

input = "Lightweight Cryptography"

lwc = LWC.new
puts lwc.hash_string(input)
# hash_file = lwc.hash_file('example.txt')
lwc.generation
