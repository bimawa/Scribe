require_relative 'core'

module Scribe
  class ImportDefinition < NONTERMINAL_CLASS
    def value
      self.text_value
    end

    def to_s
      self.value
    end
  end
end