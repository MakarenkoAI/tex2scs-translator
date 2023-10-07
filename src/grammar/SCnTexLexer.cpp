
// Generated from ./src/grammar/SCnTex.g4 by ANTLR 4.7.1


#include "SCnTexLexer.h"


using namespace antlr4;


SCnTexLexer::SCnTexLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

SCnTexLexer::~SCnTexLexer() {
  delete _interpreter;
}

std::string SCnTexLexer::getGrammarFileName() const {
  return "SCnTex.g4";
}

const std::vector<std::string>& SCnTexLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& SCnTexLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& SCnTexLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& SCnTexLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& SCnTexLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> SCnTexLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& SCnTexLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> SCnTexLexer::_decisionToDFA;
atn::PredictionContextCache SCnTexLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN SCnTexLexer::_atn;
std::vector<uint16_t> SCnTexLexer::_serializedATN;

std::vector<std::string> SCnTexLexer::_ruleNames = {
  u8"T__0", u8"T__1", u8"T__2", u8"T__3", u8"T__4", u8"T__5", u8"TEXT", 
  u8"NAME", u8"WS", u8"COMMENT"
};

std::vector<std::string> SCnTexLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> SCnTexLexer::_modeNames = {
  u8"DEFAULT_MODE"
};

std::vector<std::string> SCnTexLexer::_literalNames = {
  "", u8"'$'", u8"'{'", u8"'['", u8"'~'", u8"'}'", u8"']'"
};

std::vector<std::string> SCnTexLexer::_symbolicNames = {
  "", "", "", "", "", "", "", u8"TEXT", u8"NAME", u8"WS", u8"COMMENT"
};

dfa::Vocabulary SCnTexLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> SCnTexLexer::_tokenNames;

SCnTexLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x2, 0xc, 0x41, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 
    0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
    0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 
    0xb, 0x9, 0xb, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 
    0x8, 0x6, 0x8, 0x25, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x26, 0x3, 0x9, 0x3, 
    0x9, 0x7, 0x9, 0x2b, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x2e, 0xb, 0x9, 0x3, 
    0xa, 0x6, 0xa, 0x31, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x32, 0x3, 0xb, 0x7, 
    0xb, 0x36, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x39, 0xb, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x7, 0xb, 0x3d, 0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x40, 0xb, 0xb, 0x2, 
    0x2, 0xc, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 0x6, 0xb, 0x7, 0xd, 0x8, 
    0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 0x3, 0x2, 0x7, 0xb, 0x2, 
    0x22, 0x23, 0x25, 0x25, 0x27, 0x28, 0x2a, 0x5c, 0x60, 0x7c, 0x7e, 0x7e, 
    0x403, 0x403, 0x412, 0x451, 0x453, 0x453, 0x5, 0x2, 0x32, 0x3b, 0x43, 
    0x5c, 0x63, 0x7c, 0x6, 0x2, 0xb, 0xc, 0xf, 0xf, 0x22, 0x22, 0x202a, 
    0x202b, 0x3, 0x2, 0x22, 0x22, 0x3, 0x2, 0x5e, 0x5e, 0x2, 0x45, 0x2, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x3, 0x17, 0x3, 0x2, 0x2, 0x2, 0x5, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x7, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x9, 0x1d, 0x3, 0x2, 0x2, 0x2, 
    0xb, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd, 0x21, 0x3, 0x2, 0x2, 0x2, 0xf, 0x24, 
    0x3, 0x2, 0x2, 0x2, 0x11, 0x28, 0x3, 0x2, 0x2, 0x2, 0x13, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x15, 0x37, 0x3, 0x2, 0x2, 0x2, 0x17, 0x18, 0x7, 0x26, 
    0x2, 0x2, 0x18, 0x4, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x7, 0x7d, 0x2, 
    0x2, 0x1a, 0x6, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x7, 0x5d, 0x2, 0x2, 
    0x1c, 0x8, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x80, 0x2, 0x2, 0x1e, 
    0xa, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x7f, 0x2, 0x2, 0x20, 0xc, 
    0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 0x7, 0x5f, 0x2, 0x2, 0x22, 0xe, 0x3, 
    0x2, 0x2, 0x2, 0x23, 0x25, 0x9, 0x2, 0x2, 0x2, 0x24, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0x25, 0x26, 0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x10, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0x2c, 0x7, 0x5e, 0x2, 0x2, 0x29, 0x2b, 0x9, 0x3, 0x2, 0x2, 0x2a, 
    0x29, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2a, 
    0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x12, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x31, 0x9, 0x4, 
    0x2, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x3, 0x2, 0x2, 
    0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 
    0x33, 0x14, 0x3, 0x2, 0x2, 0x2, 0x34, 0x36, 0x9, 0x5, 0x2, 0x2, 0x35, 
    0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x39, 0x3, 0x2, 0x2, 0x2, 0x37, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x37, 0x38, 0x3, 0x2, 0x2, 0x2, 0x38, 0x3a, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3e, 0x7, 0x27, 
    0x2, 0x2, 0x3b, 0x3d, 0xa, 0x6, 0x2, 0x2, 0x3c, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x3d, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x16, 0x3, 0x2, 0x2, 0x2, 0x40, 
    0x3e, 0x3, 0x2, 0x2, 0x2, 0x9, 0x2, 0x24, 0x26, 0x2c, 0x32, 0x37, 0x3e, 
    0x2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

SCnTexLexer::Initializer SCnTexLexer::_init;
