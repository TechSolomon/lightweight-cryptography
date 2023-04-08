require "lwc"

RSpec.describe LWC do
  describe "#hash_string" do
    it "returns a SHA-2 hash of the string" do
      string = "Lightweight Cryptography"
      lwc = LWC.new
      expect(lwc.hash_string(string)).to eq("f7efb0761ca6f93f7c88c53a063eafbe021b5c2f4e86f4075159957455806528")
    end
  end
end
