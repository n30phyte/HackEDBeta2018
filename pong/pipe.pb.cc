// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pipe.proto

#include "pipe.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace pongpipe {
class GameInputDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GameInput>
      _instance;
} _GameInput_default_instance_;
class GameStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GameState>
      _instance;
} _GameState_default_instance_;
}  // namespace pongpipe
namespace protobuf_pipe_2eproto {
void InitDefaultsGameInputImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::pongpipe::_GameInput_default_instance_;
    new (ptr) ::pongpipe::GameInput();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pongpipe::GameInput::InitAsDefaultInstance();
}

void InitDefaultsGameInput() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGameInputImpl);
}

void InitDefaultsGameStateImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::pongpipe::_GameState_default_instance_;
    new (ptr) ::pongpipe::GameState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::pongpipe::GameState::InitAsDefaultInstance();
}

void InitDefaultsGameState() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGameStateImpl);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pongpipe::GameInput, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pongpipe::GameInput, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pongpipe::GameInput, keyup_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pongpipe::GameInput, keydown_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pongpipe::GameState, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pongpipe::GameState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::pongpipe::GameState, board_),
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::pongpipe::GameInput)},
  { 9, 15, sizeof(::pongpipe::GameState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::pongpipe::_GameInput_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::pongpipe::_GameState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "pipe.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\npipe.proto\022\010pongpipe\"+\n\tGameInput\022\r\n\005K"
      "eyUp\030\001 \002(\010\022\017\n\007KeyDown\030\002 \002(\010\"s\n\tGameState"
      "\022-\n\005board\030\001 \003(\0162\032.pongpipe.GameState.Pix"
      "elsB\002\020\001\"7\n\006Pixels\022\t\n\005empty\020\000\022\013\n\007paddle0\020"
      "\001\022\013\n\007paddle1\020\002\022\010\n\004ball\020\003"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 184);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "pipe.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_pipe_2eproto
namespace pongpipe {
const ::google::protobuf::EnumDescriptor* GameState_Pixels_descriptor() {
  protobuf_pipe_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_pipe_2eproto::file_level_enum_descriptors[0];
}
bool GameState_Pixels_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const GameState_Pixels GameState::empty;
const GameState_Pixels GameState::paddle0;
const GameState_Pixels GameState::paddle1;
const GameState_Pixels GameState::ball;
const GameState_Pixels GameState::Pixels_MIN;
const GameState_Pixels GameState::Pixels_MAX;
const int GameState::Pixels_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void GameInput::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GameInput::kKeyUpFieldNumber;
const int GameInput::kKeyDownFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GameInput::GameInput()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_pipe_2eproto::InitDefaultsGameInput();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:pongpipe.GameInput)
}
GameInput::GameInput(const GameInput& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&keyup_, &from.keyup_,
    static_cast<size_t>(reinterpret_cast<char*>(&keydown_) -
    reinterpret_cast<char*>(&keyup_)) + sizeof(keydown_));
  // @@protoc_insertion_point(copy_constructor:pongpipe.GameInput)
}

void GameInput::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&keyup_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&keydown_) -
      reinterpret_cast<char*>(&keyup_)) + sizeof(keydown_));
}

GameInput::~GameInput() {
  // @@protoc_insertion_point(destructor:pongpipe.GameInput)
  SharedDtor();
}

void GameInput::SharedDtor() {
}

void GameInput::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GameInput::descriptor() {
  ::protobuf_pipe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pipe_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GameInput& GameInput::default_instance() {
  ::protobuf_pipe_2eproto::InitDefaultsGameInput();
  return *internal_default_instance();
}

GameInput* GameInput::New(::google::protobuf::Arena* arena) const {
  GameInput* n = new GameInput;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GameInput::Clear() {
// @@protoc_insertion_point(message_clear_start:pongpipe.GameInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&keyup_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&keydown_) -
      reinterpret_cast<char*>(&keyup_)) + sizeof(keydown_));
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool GameInput::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pongpipe.GameInput)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required bool KeyUp = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_keyup();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &keyup_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required bool KeyDown = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_keydown();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &keydown_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pongpipe.GameInput)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pongpipe.GameInput)
  return false;
#undef DO_
}

void GameInput::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pongpipe.GameInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool KeyUp = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->keyup(), output);
  }

  // required bool KeyDown = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->keydown(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pongpipe.GameInput)
}

::google::protobuf::uint8* GameInput::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pongpipe.GameInput)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bool KeyUp = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->keyup(), target);
  }

  // required bool KeyDown = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->keydown(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pongpipe.GameInput)
  return target;
}

size_t GameInput::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:pongpipe.GameInput)
  size_t total_size = 0;

  if (has_keyup()) {
    // required bool KeyUp = 1;
    total_size += 1 + 1;
  }

  if (has_keydown()) {
    // required bool KeyDown = 2;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t GameInput::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pongpipe.GameInput)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required bool KeyUp = 1;
    total_size += 1 + 1;

    // required bool KeyDown = 2;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GameInput::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pongpipe.GameInput)
  GOOGLE_DCHECK_NE(&from, this);
  const GameInput* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GameInput>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pongpipe.GameInput)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pongpipe.GameInput)
    MergeFrom(*source);
  }
}

void GameInput::MergeFrom(const GameInput& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pongpipe.GameInput)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      keyup_ = from.keyup_;
    }
    if (cached_has_bits & 0x00000002u) {
      keydown_ = from.keydown_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void GameInput::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pongpipe.GameInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameInput::CopyFrom(const GameInput& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pongpipe.GameInput)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameInput::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void GameInput::Swap(GameInput* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GameInput::InternalSwap(GameInput* other) {
  using std::swap;
  swap(keyup_, other->keyup_);
  swap(keydown_, other->keydown_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GameInput::GetMetadata() const {
  protobuf_pipe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pipe_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GameState::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GameState::kBoardFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GameState::GameState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_pipe_2eproto::InitDefaultsGameState();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:pongpipe.GameState)
}
GameState::GameState(const GameState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      board_(from.board_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:pongpipe.GameState)
}

void GameState::SharedCtor() {
  _cached_size_ = 0;
}

GameState::~GameState() {
  // @@protoc_insertion_point(destructor:pongpipe.GameState)
  SharedDtor();
}

void GameState::SharedDtor() {
}

void GameState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GameState::descriptor() {
  ::protobuf_pipe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pipe_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GameState& GameState::default_instance() {
  ::protobuf_pipe_2eproto::InitDefaultsGameState();
  return *internal_default_instance();
}

GameState* GameState::New(::google::protobuf::Arena* arena) const {
  GameState* n = new GameState;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GameState::Clear() {
// @@protoc_insertion_point(message_clear_start:pongpipe.GameState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  board_.Clear();
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool GameState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:pongpipe.GameState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .pongpipe.GameState.Pixels board = 1 [packed = true];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          ::google::protobuf::uint32 length;
          DO_(input->ReadVarint32(&length));
          ::google::protobuf::io::CodedInputStream::Limit limit = input->PushLimit(static_cast<int>(length));
          while (input->BytesUntilLimit() > 0) {
            int value;
            DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
            if (::pongpipe::GameState_Pixels_IsValid(value)) {
              add_board(static_cast< ::pongpipe::GameState_Pixels >(value));
            } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
            }
          }
          input->PopLimit(limit);
        } else if (
            static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::pongpipe::GameState_Pixels_IsValid(value)) {
            add_board(static_cast< ::pongpipe::GameState_Pixels >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast< ::google::protobuf::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:pongpipe.GameState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:pongpipe.GameState)
  return false;
#undef DO_
}

void GameState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:pongpipe.GameState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pongpipe.GameState.Pixels board = 1 [packed = true];
  if (this->board_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      output);
    output->WriteVarint32(
        static_cast< ::google::protobuf::uint32>(_board_cached_byte_size_));
  }
  for (int i = 0, n = this->board_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnumNoTag(
      this->board(i), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:pongpipe.GameState)
}

::google::protobuf::uint8* GameState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:pongpipe.GameState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .pongpipe.GameState.Pixels board = 1 [packed = true];
  if (this->board_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(      static_cast< ::google::protobuf::uint32>(
            _board_cached_byte_size_), target);
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumNoTagToArray(
      this->board_, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pongpipe.GameState)
  return target;
}

size_t GameState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pongpipe.GameState)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // repeated .pongpipe.GameState.Pixels board = 1 [packed = true];
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->board_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->board(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
            static_cast< ::google::protobuf::int32>(data_size));
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _board_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GameState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:pongpipe.GameState)
  GOOGLE_DCHECK_NE(&from, this);
  const GameState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GameState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:pongpipe.GameState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:pongpipe.GameState)
    MergeFrom(*source);
  }
}

void GameState::MergeFrom(const GameState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:pongpipe.GameState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  board_.MergeFrom(from.board_);
}

void GameState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:pongpipe.GameState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameState::CopyFrom(const GameState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pongpipe.GameState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameState::IsInitialized() const {
  return true;
}

void GameState::Swap(GameState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GameState::InternalSwap(GameState* other) {
  using std::swap;
  board_.InternalSwap(&other->board_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata GameState::GetMetadata() const {
  protobuf_pipe_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_pipe_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace pongpipe

// @@protoc_insertion_point(global_scope)
