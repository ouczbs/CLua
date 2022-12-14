// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Login.proto

#include "Login.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace pb {
PROTOBUF_CONSTEXPR LoginAccountCmd::LoginAccountCmd(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.account_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.password_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct LoginAccountCmdDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginAccountCmdDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginAccountCmdDefaultTypeInternal() {}
  union {
    LoginAccountCmd _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginAccountCmdDefaultTypeInternal _LoginAccountCmd_default_instance_;
PROTOBUF_CONSTEXPR LoginAccountAckCmd::LoginAccountAckCmd(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.role_id_list_)*/{}
  , /*decltype(_impl_._role_id_list_cached_byte_size_)*/{0}
  , /*decltype(_impl_.result_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.success_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct LoginAccountAckCmdDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LoginAccountAckCmdDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LoginAccountAckCmdDefaultTypeInternal() {}
  union {
    LoginAccountAckCmd _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LoginAccountAckCmdDefaultTypeInternal _LoginAccountAckCmd_default_instance_;
}  // namespace pb
static ::_pb::Metadata file_level_metadata_Login_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Login_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Login_2eproto = nullptr;

const uint32_t TableStruct_Login_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pb::LoginAccountCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::pb::LoginAccountCmd, _impl_.account_),
  PROTOBUF_FIELD_OFFSET(::pb::LoginAccountCmd, _impl_.password_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::pb::LoginAccountAckCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::pb::LoginAccountAckCmd, _impl_.result_),
  PROTOBUF_FIELD_OFFSET(::pb::LoginAccountAckCmd, _impl_.success_),
  PROTOBUF_FIELD_OFFSET(::pb::LoginAccountAckCmd, _impl_.role_id_list_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::pb::LoginAccountCmd)},
  { 8, -1, -1, sizeof(::pb::LoginAccountAckCmd)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::pb::_LoginAccountCmd_default_instance_._instance,
  &::pb::_LoginAccountAckCmd_default_instance_._instance,
};

const char descriptor_table_protodef_Login_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\013Login.proto\022\002pb\"4\n\017LoginAccountCmd\022\017\n\007"
  "account\030\001 \001(\t\022\020\n\010password\030\002 \001(\t\"K\n\022Login"
  "AccountAckCmd\022\016\n\006result\030\001 \001(\t\022\017\n\007success"
  "\030\002 \001(\010\022\024\n\014role_id_list\030\003 \003(\005B\006Z\004.;pbb\006pr"
  "oto3"
  ;
static ::_pbi::once_flag descriptor_table_Login_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Login_2eproto = {
    false, false, 164, descriptor_table_protodef_Login_2eproto,
    "Login.proto",
    &descriptor_table_Login_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_Login_2eproto::offsets,
    file_level_metadata_Login_2eproto, file_level_enum_descriptors_Login_2eproto,
    file_level_service_descriptors_Login_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Login_2eproto_getter() {
  return &descriptor_table_Login_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Login_2eproto(&descriptor_table_Login_2eproto);
namespace pb {

// ===================================================================

class LoginAccountCmd::_Internal {
 public:
};

LoginAccountCmd::LoginAccountCmd(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:pb.LoginAccountCmd)
}
LoginAccountCmd::LoginAccountCmd(const LoginAccountCmd& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  LoginAccountCmd* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.account_){}
    , decltype(_impl_.password_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.account_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_account().empty()) {
    _this->_impl_.account_.Set(from._internal_account(), 
      _this->GetArenaForAllocation());
  }
  _impl_.password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.password_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_password().empty()) {
    _this->_impl_.password_.Set(from._internal_password(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:pb.LoginAccountCmd)
}

inline void LoginAccountCmd::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.account_){}
    , decltype(_impl_.password_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.account_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.account_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.password_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.password_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

LoginAccountCmd::~LoginAccountCmd() {
  // @@protoc_insertion_point(destructor:pb.LoginAccountCmd)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LoginAccountCmd::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.account_.Destroy();
  _impl_.password_.Destroy();
}

void LoginAccountCmd::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void LoginAccountCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.LoginAccountCmd)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.account_.ClearToEmpty();
  _impl_.password_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginAccountCmd::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string account = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_account();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "pb.LoginAccountCmd.account"));
        } else
          goto handle_unusual;
        continue;
      // string password = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_password();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "pb.LoginAccountCmd.password"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LoginAccountCmd::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.LoginAccountCmd)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string account = 1;
  if (!this->_internal_account().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_account().data(), static_cast<int>(this->_internal_account().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "pb.LoginAccountCmd.account");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_account(), target);
  }

  // string password = 2;
  if (!this->_internal_password().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_password().data(), static_cast<int>(this->_internal_password().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "pb.LoginAccountCmd.password");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_password(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.LoginAccountCmd)
  return target;
}

size_t LoginAccountCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.LoginAccountCmd)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string account = 1;
  if (!this->_internal_account().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_account());
  }

  // string password = 2;
  if (!this->_internal_password().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_password());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LoginAccountCmd::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    LoginAccountCmd::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LoginAccountCmd::GetClassData() const { return &_class_data_; }


void LoginAccountCmd::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<LoginAccountCmd*>(&to_msg);
  auto& from = static_cast<const LoginAccountCmd&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:pb.LoginAccountCmd)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_account().empty()) {
    _this->_internal_set_account(from._internal_account());
  }
  if (!from._internal_password().empty()) {
    _this->_internal_set_password(from._internal_password());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LoginAccountCmd::CopyFrom(const LoginAccountCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.LoginAccountCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginAccountCmd::IsInitialized() const {
  return true;
}

void LoginAccountCmd::InternalSwap(LoginAccountCmd* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.account_, lhs_arena,
      &other->_impl_.account_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.password_, lhs_arena,
      &other->_impl_.password_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginAccountCmd::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Login_2eproto_getter, &descriptor_table_Login_2eproto_once,
      file_level_metadata_Login_2eproto[0]);
}

// ===================================================================

class LoginAccountAckCmd::_Internal {
 public:
};

LoginAccountAckCmd::LoginAccountAckCmd(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:pb.LoginAccountAckCmd)
}
LoginAccountAckCmd::LoginAccountAckCmd(const LoginAccountAckCmd& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  LoginAccountAckCmd* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.role_id_list_){from._impl_.role_id_list_}
    , /*decltype(_impl_._role_id_list_cached_byte_size_)*/{0}
    , decltype(_impl_.result_){}
    , decltype(_impl_.success_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_result().empty()) {
    _this->_impl_.result_.Set(from._internal_result(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.success_ = from._impl_.success_;
  // @@protoc_insertion_point(copy_constructor:pb.LoginAccountAckCmd)
}

inline void LoginAccountAckCmd::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.role_id_list_){arena}
    , /*decltype(_impl_._role_id_list_cached_byte_size_)*/{0}
    , decltype(_impl_.result_){}
    , decltype(_impl_.success_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.result_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.result_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

LoginAccountAckCmd::~LoginAccountAckCmd() {
  // @@protoc_insertion_point(destructor:pb.LoginAccountAckCmd)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LoginAccountAckCmd::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.role_id_list_.~RepeatedField();
  _impl_.result_.Destroy();
}

void LoginAccountAckCmd::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void LoginAccountAckCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:pb.LoginAccountAckCmd)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.role_id_list_.Clear();
  _impl_.result_.ClearToEmpty();
  _impl_.success_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginAccountAckCmd::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_result();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "pb.LoginAccountAckCmd.result"));
        } else
          goto handle_unusual;
        continue;
      // bool success = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.success_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated int32 role_id_list = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_role_id_list(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 24) {
          _internal_add_role_id_list(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* LoginAccountAckCmd::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:pb.LoginAccountAckCmd)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string result = 1;
  if (!this->_internal_result().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_result().data(), static_cast<int>(this->_internal_result().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "pb.LoginAccountAckCmd.result");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_result(), target);
  }

  // bool success = 2;
  if (this->_internal_success() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_success(), target);
  }

  // repeated int32 role_id_list = 3;
  {
    int byte_size = _impl_._role_id_list_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          3, _internal_role_id_list(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:pb.LoginAccountAckCmd)
  return target;
}

size_t LoginAccountAckCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:pb.LoginAccountAckCmd)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 role_id_list = 3;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.role_id_list_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._role_id_list_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string result = 1;
  if (!this->_internal_result().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_result());
  }

  // bool success = 2;
  if (this->_internal_success() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LoginAccountAckCmd::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    LoginAccountAckCmd::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LoginAccountAckCmd::GetClassData() const { return &_class_data_; }


void LoginAccountAckCmd::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<LoginAccountAckCmd*>(&to_msg);
  auto& from = static_cast<const LoginAccountAckCmd&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:pb.LoginAccountAckCmd)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.role_id_list_.MergeFrom(from._impl_.role_id_list_);
  if (!from._internal_result().empty()) {
    _this->_internal_set_result(from._internal_result());
  }
  if (from._internal_success() != 0) {
    _this->_internal_set_success(from._internal_success());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LoginAccountAckCmd::CopyFrom(const LoginAccountAckCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:pb.LoginAccountAckCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginAccountAckCmd::IsInitialized() const {
  return true;
}

void LoginAccountAckCmd::InternalSwap(LoginAccountAckCmd* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.role_id_list_.InternalSwap(&other->_impl_.role_id_list_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.result_, lhs_arena,
      &other->_impl_.result_, rhs_arena
  );
  swap(_impl_.success_, other->_impl_.success_);
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginAccountAckCmd::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Login_2eproto_getter, &descriptor_table_Login_2eproto_once,
      file_level_metadata_Login_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::pb::LoginAccountCmd*
Arena::CreateMaybeMessage< ::pb::LoginAccountCmd >(Arena* arena) {
  return Arena::CreateMessageInternal< ::pb::LoginAccountCmd >(arena);
}
template<> PROTOBUF_NOINLINE ::pb::LoginAccountAckCmd*
Arena::CreateMaybeMessage< ::pb::LoginAccountAckCmd >(Arena* arena) {
  return Arena::CreateMessageInternal< ::pb::LoginAccountAckCmd >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
