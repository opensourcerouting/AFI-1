// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: qpb/qpb.proto

#ifndef PROTOBUF_qpb_2fqpb_2eproto__INCLUDED
#define PROTOBUF_qpb_2fqpb_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace qpb {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_qpb_2fqpb_2eproto();
void protobuf_AssignDesc_qpb_2fqpb_2eproto();
void protobuf_ShutdownFile_qpb_2fqpb_2eproto();

class IfIdentifier;
class Ipv4Address;
class Ipv6Address;
class L3Address;
class L3Prefix;

enum AddressFamily {
  UNKNOWN_AF = 0,
  IPV4 = 1,
  IPV6 = 2
};
bool AddressFamily_IsValid(int value);
const AddressFamily AddressFamily_MIN = UNKNOWN_AF;
const AddressFamily AddressFamily_MAX = IPV6;
const int AddressFamily_ARRAYSIZE = AddressFamily_MAX + 1;

const ::google::protobuf::EnumDescriptor* AddressFamily_descriptor();
inline const ::std::string& AddressFamily_Name(AddressFamily value) {
  return ::google::protobuf::internal::NameOfEnum(
    AddressFamily_descriptor(), value);
}
inline bool AddressFamily_Parse(
    const ::std::string& name, AddressFamily* value) {
  return ::google::protobuf::internal::ParseNamedEnum<AddressFamily>(
    AddressFamily_descriptor(), name, value);
}
enum SubAddressFamily {
  UNKNOWN_SAF = 0,
  UNICAST = 1,
  MULTICAST = 2
};
bool SubAddressFamily_IsValid(int value);
const SubAddressFamily SubAddressFamily_MIN = UNKNOWN_SAF;
const SubAddressFamily SubAddressFamily_MAX = MULTICAST;
const int SubAddressFamily_ARRAYSIZE = SubAddressFamily_MAX + 1;

const ::google::protobuf::EnumDescriptor* SubAddressFamily_descriptor();
inline const ::std::string& SubAddressFamily_Name(SubAddressFamily value) {
  return ::google::protobuf::internal::NameOfEnum(
    SubAddressFamily_descriptor(), value);
}
inline bool SubAddressFamily_Parse(
    const ::std::string& name, SubAddressFamily* value) {
  return ::google::protobuf::internal::ParseNamedEnum<SubAddressFamily>(
    SubAddressFamily_descriptor(), name, value);
}
enum Protocol {
  UNKNOWN_PROTO = 0,
  LOCAL = 1,
  CONNECTED = 2,
  KERNEL = 3,
  STATIC = 4,
  RIP = 5,
  RIPNG = 6,
  OSPF = 7,
  ISIS = 8,
  BGP = 9,
  OTHER = 10
};
bool Protocol_IsValid(int value);
const Protocol Protocol_MIN = UNKNOWN_PROTO;
const Protocol Protocol_MAX = OTHER;
const int Protocol_ARRAYSIZE = Protocol_MAX + 1;

const ::google::protobuf::EnumDescriptor* Protocol_descriptor();
inline const ::std::string& Protocol_Name(Protocol value) {
  return ::google::protobuf::internal::NameOfEnum(
    Protocol_descriptor(), value);
}
inline bool Protocol_Parse(
    const ::std::string& name, Protocol* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Protocol>(
    Protocol_descriptor(), name, value);
}
// ===================================================================

class Ipv4Address : public ::google::protobuf::Message {
 public:
  Ipv4Address();
  virtual ~Ipv4Address();

  Ipv4Address(const Ipv4Address& from);

  inline Ipv4Address& operator=(const Ipv4Address& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Ipv4Address& default_instance();

  void Swap(Ipv4Address* other);

  // implements Message ----------------------------------------------

  inline Ipv4Address* New() const { return New(NULL); }

  Ipv4Address* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Ipv4Address& from);
  void MergeFrom(const Ipv4Address& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Ipv4Address* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required fixed32 value = 1;
  bool has_value() const;
  void clear_value();
  static const int kValueFieldNumber = 1;
  ::google::protobuf::uint32 value() const;
  void set_value(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:qpb.Ipv4Address)
 private:
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 value_;
  friend void  protobuf_AddDesc_qpb_2fqpb_2eproto();
  friend void protobuf_AssignDesc_qpb_2fqpb_2eproto();
  friend void protobuf_ShutdownFile_qpb_2fqpb_2eproto();

  void InitAsDefaultInstance();
  static Ipv4Address* default_instance_;
};
// -------------------------------------------------------------------

class Ipv6Address : public ::google::protobuf::Message {
 public:
  Ipv6Address();
  virtual ~Ipv6Address();

  Ipv6Address(const Ipv6Address& from);

  inline Ipv6Address& operator=(const Ipv6Address& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Ipv6Address& default_instance();

  void Swap(Ipv6Address* other);

  // implements Message ----------------------------------------------

  inline Ipv6Address* New() const { return New(NULL); }

  Ipv6Address* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Ipv6Address& from);
  void MergeFrom(const Ipv6Address& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Ipv6Address* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required bytes bytes = 1;
  bool has_bytes() const;
  void clear_bytes();
  static const int kBytesFieldNumber = 1;
  const ::std::string& bytes() const;
  void set_bytes(const ::std::string& value);
  void set_bytes(const char* value);
  void set_bytes(const void* value, size_t size);
  ::std::string* mutable_bytes();
  ::std::string* release_bytes();
  void set_allocated_bytes(::std::string* bytes);

  // @@protoc_insertion_point(class_scope:qpb.Ipv6Address)
 private:
  inline void set_has_bytes();
  inline void clear_has_bytes();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr bytes_;
  friend void  protobuf_AddDesc_qpb_2fqpb_2eproto();
  friend void protobuf_AssignDesc_qpb_2fqpb_2eproto();
  friend void protobuf_ShutdownFile_qpb_2fqpb_2eproto();

  void InitAsDefaultInstance();
  static Ipv6Address* default_instance_;
};
// -------------------------------------------------------------------

class L3Address : public ::google::protobuf::Message {
 public:
  L3Address();
  virtual ~L3Address();

  L3Address(const L3Address& from);

  inline L3Address& operator=(const L3Address& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const L3Address& default_instance();

  void Swap(L3Address* other);

  // implements Message ----------------------------------------------

  inline L3Address* New() const { return New(NULL); }

  L3Address* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const L3Address& from);
  void MergeFrom(const L3Address& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(L3Address* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .qpb.Ipv4Address v4 = 1;
  bool has_v4() const;
  void clear_v4();
  static const int kV4FieldNumber = 1;
  const ::qpb::Ipv4Address& v4() const;
  ::qpb::Ipv4Address* mutable_v4();
  ::qpb::Ipv4Address* release_v4();
  void set_allocated_v4(::qpb::Ipv4Address* v4);

  // optional .qpb.Ipv6Address v6 = 2;
  bool has_v6() const;
  void clear_v6();
  static const int kV6FieldNumber = 2;
  const ::qpb::Ipv6Address& v6() const;
  ::qpb::Ipv6Address* mutable_v6();
  ::qpb::Ipv6Address* release_v6();
  void set_allocated_v6(::qpb::Ipv6Address* v6);

  // @@protoc_insertion_point(class_scope:qpb.L3Address)
 private:
  inline void set_has_v4();
  inline void clear_has_v4();
  inline void set_has_v6();
  inline void clear_has_v6();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::qpb::Ipv4Address* v4_;
  ::qpb::Ipv6Address* v6_;
  friend void  protobuf_AddDesc_qpb_2fqpb_2eproto();
  friend void protobuf_AssignDesc_qpb_2fqpb_2eproto();
  friend void protobuf_ShutdownFile_qpb_2fqpb_2eproto();

  void InitAsDefaultInstance();
  static L3Address* default_instance_;
};
// -------------------------------------------------------------------

class L3Prefix : public ::google::protobuf::Message {
 public:
  L3Prefix();
  virtual ~L3Prefix();

  L3Prefix(const L3Prefix& from);

  inline L3Prefix& operator=(const L3Prefix& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const L3Prefix& default_instance();

  void Swap(L3Prefix* other);

  // implements Message ----------------------------------------------

  inline L3Prefix* New() const { return New(NULL); }

  L3Prefix* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const L3Prefix& from);
  void MergeFrom(const L3Prefix& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(L3Prefix* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required uint32 length = 1;
  bool has_length() const;
  void clear_length();
  static const int kLengthFieldNumber = 1;
  ::google::protobuf::uint32 length() const;
  void set_length(::google::protobuf::uint32 value);

  // required bytes bytes = 2;
  bool has_bytes() const;
  void clear_bytes();
  static const int kBytesFieldNumber = 2;
  const ::std::string& bytes() const;
  void set_bytes(const ::std::string& value);
  void set_bytes(const char* value);
  void set_bytes(const void* value, size_t size);
  ::std::string* mutable_bytes();
  ::std::string* release_bytes();
  void set_allocated_bytes(::std::string* bytes);

  // @@protoc_insertion_point(class_scope:qpb.L3Prefix)
 private:
  inline void set_has_length();
  inline void clear_has_length();
  inline void set_has_bytes();
  inline void clear_has_bytes();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr bytes_;
  ::google::protobuf::uint32 length_;
  friend void  protobuf_AddDesc_qpb_2fqpb_2eproto();
  friend void protobuf_AssignDesc_qpb_2fqpb_2eproto();
  friend void protobuf_ShutdownFile_qpb_2fqpb_2eproto();

  void InitAsDefaultInstance();
  static L3Prefix* default_instance_;
};
// -------------------------------------------------------------------

class IfIdentifier : public ::google::protobuf::Message {
 public:
  IfIdentifier();
  virtual ~IfIdentifier();

  IfIdentifier(const IfIdentifier& from);

  inline IfIdentifier& operator=(const IfIdentifier& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const IfIdentifier& default_instance();

  void Swap(IfIdentifier* other);

  // implements Message ----------------------------------------------

  inline IfIdentifier* New() const { return New(NULL); }

  IfIdentifier* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IfIdentifier& from);
  void MergeFrom(const IfIdentifier& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(IfIdentifier* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 index = 1;
  bool has_index() const;
  void clear_index();
  static const int kIndexFieldNumber = 1;
  ::google::protobuf::uint32 index() const;
  void set_index(::google::protobuf::uint32 value);

  // optional string name = 2;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 2;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:qpb.IfIdentifier)
 private:
  inline void set_has_index();
  inline void clear_has_index();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::uint32 index_;
  friend void  protobuf_AddDesc_qpb_2fqpb_2eproto();
  friend void protobuf_AssignDesc_qpb_2fqpb_2eproto();
  friend void protobuf_ShutdownFile_qpb_2fqpb_2eproto();

  void InitAsDefaultInstance();
  static IfIdentifier* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Ipv4Address

// required fixed32 value = 1;
inline bool Ipv4Address::has_value() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Ipv4Address::set_has_value() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Ipv4Address::clear_has_value() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Ipv4Address::clear_value() {
  value_ = 0u;
  clear_has_value();
}
inline ::google::protobuf::uint32 Ipv4Address::value() const {
  // @@protoc_insertion_point(field_get:qpb.Ipv4Address.value)
  return value_;
}
inline void Ipv4Address::set_value(::google::protobuf::uint32 value) {
  set_has_value();
  value_ = value;
  // @@protoc_insertion_point(field_set:qpb.Ipv4Address.value)
}

// -------------------------------------------------------------------

// Ipv6Address

// required bytes bytes = 1;
inline bool Ipv6Address::has_bytes() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Ipv6Address::set_has_bytes() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Ipv6Address::clear_has_bytes() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Ipv6Address::clear_bytes() {
  bytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_bytes();
}
inline const ::std::string& Ipv6Address::bytes() const {
  // @@protoc_insertion_point(field_get:qpb.Ipv6Address.bytes)
  return bytes_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Ipv6Address::set_bytes(const ::std::string& value) {
  set_has_bytes();
  bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qpb.Ipv6Address.bytes)
}
inline void Ipv6Address::set_bytes(const char* value) {
  set_has_bytes();
  bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qpb.Ipv6Address.bytes)
}
inline void Ipv6Address::set_bytes(const void* value, size_t size) {
  set_has_bytes();
  bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qpb.Ipv6Address.bytes)
}
inline ::std::string* Ipv6Address::mutable_bytes() {
  set_has_bytes();
  // @@protoc_insertion_point(field_mutable:qpb.Ipv6Address.bytes)
  return bytes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Ipv6Address::release_bytes() {
  // @@protoc_insertion_point(field_release:qpb.Ipv6Address.bytes)
  clear_has_bytes();
  return bytes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Ipv6Address::set_allocated_bytes(::std::string* bytes) {
  if (bytes != NULL) {
    set_has_bytes();
  } else {
    clear_has_bytes();
  }
  bytes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bytes);
  // @@protoc_insertion_point(field_set_allocated:qpb.Ipv6Address.bytes)
}

// -------------------------------------------------------------------

// L3Address

// optional .qpb.Ipv4Address v4 = 1;
inline bool L3Address::has_v4() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void L3Address::set_has_v4() {
  _has_bits_[0] |= 0x00000001u;
}
inline void L3Address::clear_has_v4() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void L3Address::clear_v4() {
  if (v4_ != NULL) v4_->::qpb::Ipv4Address::Clear();
  clear_has_v4();
}
inline const ::qpb::Ipv4Address& L3Address::v4() const {
  // @@protoc_insertion_point(field_get:qpb.L3Address.v4)
  return v4_ != NULL ? *v4_ : *default_instance_->v4_;
}
inline ::qpb::Ipv4Address* L3Address::mutable_v4() {
  set_has_v4();
  if (v4_ == NULL) {
    v4_ = new ::qpb::Ipv4Address;
  }
  // @@protoc_insertion_point(field_mutable:qpb.L3Address.v4)
  return v4_;
}
inline ::qpb::Ipv4Address* L3Address::release_v4() {
  // @@protoc_insertion_point(field_release:qpb.L3Address.v4)
  clear_has_v4();
  ::qpb::Ipv4Address* temp = v4_;
  v4_ = NULL;
  return temp;
}
inline void L3Address::set_allocated_v4(::qpb::Ipv4Address* v4) {
  delete v4_;
  v4_ = v4;
  if (v4) {
    set_has_v4();
  } else {
    clear_has_v4();
  }
  // @@protoc_insertion_point(field_set_allocated:qpb.L3Address.v4)
}

// optional .qpb.Ipv6Address v6 = 2;
inline bool L3Address::has_v6() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void L3Address::set_has_v6() {
  _has_bits_[0] |= 0x00000002u;
}
inline void L3Address::clear_has_v6() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void L3Address::clear_v6() {
  if (v6_ != NULL) v6_->::qpb::Ipv6Address::Clear();
  clear_has_v6();
}
inline const ::qpb::Ipv6Address& L3Address::v6() const {
  // @@protoc_insertion_point(field_get:qpb.L3Address.v6)
  return v6_ != NULL ? *v6_ : *default_instance_->v6_;
}
inline ::qpb::Ipv6Address* L3Address::mutable_v6() {
  set_has_v6();
  if (v6_ == NULL) {
    v6_ = new ::qpb::Ipv6Address;
  }
  // @@protoc_insertion_point(field_mutable:qpb.L3Address.v6)
  return v6_;
}
inline ::qpb::Ipv6Address* L3Address::release_v6() {
  // @@protoc_insertion_point(field_release:qpb.L3Address.v6)
  clear_has_v6();
  ::qpb::Ipv6Address* temp = v6_;
  v6_ = NULL;
  return temp;
}
inline void L3Address::set_allocated_v6(::qpb::Ipv6Address* v6) {
  delete v6_;
  v6_ = v6;
  if (v6) {
    set_has_v6();
  } else {
    clear_has_v6();
  }
  // @@protoc_insertion_point(field_set_allocated:qpb.L3Address.v6)
}

// -------------------------------------------------------------------

// L3Prefix

// required uint32 length = 1;
inline bool L3Prefix::has_length() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void L3Prefix::set_has_length() {
  _has_bits_[0] |= 0x00000001u;
}
inline void L3Prefix::clear_has_length() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void L3Prefix::clear_length() {
  length_ = 0u;
  clear_has_length();
}
inline ::google::protobuf::uint32 L3Prefix::length() const {
  // @@protoc_insertion_point(field_get:qpb.L3Prefix.length)
  return length_;
}
inline void L3Prefix::set_length(::google::protobuf::uint32 value) {
  set_has_length();
  length_ = value;
  // @@protoc_insertion_point(field_set:qpb.L3Prefix.length)
}

// required bytes bytes = 2;
inline bool L3Prefix::has_bytes() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void L3Prefix::set_has_bytes() {
  _has_bits_[0] |= 0x00000002u;
}
inline void L3Prefix::clear_has_bytes() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void L3Prefix::clear_bytes() {
  bytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_bytes();
}
inline const ::std::string& L3Prefix::bytes() const {
  // @@protoc_insertion_point(field_get:qpb.L3Prefix.bytes)
  return bytes_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void L3Prefix::set_bytes(const ::std::string& value) {
  set_has_bytes();
  bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qpb.L3Prefix.bytes)
}
inline void L3Prefix::set_bytes(const char* value) {
  set_has_bytes();
  bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qpb.L3Prefix.bytes)
}
inline void L3Prefix::set_bytes(const void* value, size_t size) {
  set_has_bytes();
  bytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qpb.L3Prefix.bytes)
}
inline ::std::string* L3Prefix::mutable_bytes() {
  set_has_bytes();
  // @@protoc_insertion_point(field_mutable:qpb.L3Prefix.bytes)
  return bytes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* L3Prefix::release_bytes() {
  // @@protoc_insertion_point(field_release:qpb.L3Prefix.bytes)
  clear_has_bytes();
  return bytes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void L3Prefix::set_allocated_bytes(::std::string* bytes) {
  if (bytes != NULL) {
    set_has_bytes();
  } else {
    clear_has_bytes();
  }
  bytes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), bytes);
  // @@protoc_insertion_point(field_set_allocated:qpb.L3Prefix.bytes)
}

// -------------------------------------------------------------------

// IfIdentifier

// optional uint32 index = 1;
inline bool IfIdentifier::has_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IfIdentifier::set_has_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IfIdentifier::clear_has_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IfIdentifier::clear_index() {
  index_ = 0u;
  clear_has_index();
}
inline ::google::protobuf::uint32 IfIdentifier::index() const {
  // @@protoc_insertion_point(field_get:qpb.IfIdentifier.index)
  return index_;
}
inline void IfIdentifier::set_index(::google::protobuf::uint32 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:qpb.IfIdentifier.index)
}

// optional string name = 2;
inline bool IfIdentifier::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IfIdentifier::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IfIdentifier::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IfIdentifier::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& IfIdentifier::name() const {
  // @@protoc_insertion_point(field_get:qpb.IfIdentifier.name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void IfIdentifier::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:qpb.IfIdentifier.name)
}
inline void IfIdentifier::set_name(const char* value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:qpb.IfIdentifier.name)
}
inline void IfIdentifier::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:qpb.IfIdentifier.name)
}
inline ::std::string* IfIdentifier::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:qpb.IfIdentifier.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* IfIdentifier::release_name() {
  // @@protoc_insertion_point(field_release:qpb.IfIdentifier.name)
  clear_has_name();
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void IfIdentifier::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:qpb.IfIdentifier.name)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace qpb

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::qpb::AddressFamily> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::qpb::AddressFamily>() {
  return ::qpb::AddressFamily_descriptor();
}
template <> struct is_proto_enum< ::qpb::SubAddressFamily> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::qpb::SubAddressFamily>() {
  return ::qpb::SubAddressFamily_descriptor();
}
template <> struct is_proto_enum< ::qpb::Protocol> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::qpb::Protocol>() {
  return ::qpb::Protocol_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_qpb_2fqpb_2eproto__INCLUDED
