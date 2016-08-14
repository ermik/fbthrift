/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>




namespace cpp2 {

class MyUnion;
class MyField;
class MyStruct;
class StructWithUnion;
class RecursiveStruct;
class StructWithContainers;
class StructWithSharedConst;

enum class TypedEnum : short {
  VAL1 = 0,
  VAL2 = 1
};

extern const std::map<TypedEnum, const char*> _TypedEnum_VALUES_TO_NAMES;
extern const std::map<const char*, TypedEnum, apache::thrift::ltstr> _TypedEnum_NAMES_TO_VALUES;

} // cpp2
namespace std {

template<> struct hash<typename  ::cpp2::TypedEnum> : public apache::thrift::detail::enum_hash<typename  ::cpp2::TypedEnum> {};
template<> struct equal_to<typename  ::cpp2::TypedEnum> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::TypedEnum> {};

} // std
namespace apache { namespace thrift {

template <> const char* TEnumTraitsBase< ::cpp2::TypedEnum>::findName( ::cpp2::TypedEnum value);
template <> bool TEnumTraitsBase< ::cpp2::TypedEnum>::findValue(const char* name,  ::cpp2::TypedEnum* outValue);

template <> constexpr  ::cpp2::TypedEnum TEnumTraits< ::cpp2::TypedEnum>::min() {
  return  ::cpp2::TypedEnum::VAL1;
}

template <> constexpr  ::cpp2::TypedEnum TEnumTraits< ::cpp2::TypedEnum>::max() {
  return  ::cpp2::TypedEnum::VAL2;
}

}} // apache::thrift
namespace cpp2 {

class MyUnion : private apache::thrift::detail::st::ComparisonOperators<MyUnion> {
 public:
  enum Type {
    __EMPTY__ = 0,
    anInteger = 1,
    aString = 2,
  } ;

  MyUnion() :
      type_(Type::__EMPTY__) {}

  MyUnion(MyUnion&& rhs) :
      type_(Type::__EMPTY__) {
    if (this == &rhs) {return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch(rhs.type_) {
      case Type::anInteger:
      {
        set_anInteger(std::move(rhs.value_.anInteger));
        break;
      }
      case Type::aString:
      {
        set_aString(std::move(rhs.value_.aString));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
  }

  MyUnion(const MyUnion& rhs) :
      type_(Type::__EMPTY__) {
    if (this == &rhs) {return; }
    if (rhs.type_ == Type::__EMPTY__) { return; }
    switch(rhs.type_) {
      case Type::anInteger:
      {
        set_anInteger(rhs.value_.anInteger);
        break;
      }
      case Type::aString:
      {
        set_aString(rhs.value_.aString);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
  }

  MyUnion& operator=(MyUnion&& rhs) {
    if (this == &rhs) {return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch(rhs.type_) {
      case Type::anInteger:
      {
        set_anInteger(std::move(rhs.value_.anInteger));
        break;
      }
      case Type::aString:
      {
        set_aString(std::move(rhs.value_.aString));
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    rhs.__clear();
    return *this;
  }

  MyUnion& operator=(const MyUnion& rhs) {
    if (this == &rhs) {return *this; }
    __clear();
    if (rhs.type_ == Type::__EMPTY__) { return *this; }
    switch(rhs.type_) {
      case Type::anInteger:
      {
        set_anInteger(rhs.value_.anInteger);
        break;
      }
      case Type::aString:
      {
        set_aString(rhs.value_.aString);
        break;
      }
      default:
      {
        assert(false);
        break;
      }
    }
    return *this;
  }
  template <typename T__ThriftWrappedArgument__Ctor>
  MyUnion(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg):
    type_(Type::__EMPTY__)
  {
    set_anInteger(arg.move());
  }
  template <typename T__ThriftWrappedArgument__Ctor>
  MyUnion(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg):
    type_(Type::__EMPTY__)
  {
    set_aString(arg.move());
  }
  void __clear();

  virtual ~MyUnion() throw() {
    __clear();
  }

  union storage_type {
    int32_t anInteger;
    std::string aString;

    storage_type() {}
    ~storage_type() {}
  } ;
  bool operator==(const MyUnion& rhs) const;

  bool operator < (const MyUnion& rhs) const {
    if (type_ != rhs.type_) { return type_ < rhs.type_; }
    switch(type_) {
      case Type::anInteger:
      {
        return value_.anInteger < rhs.value_.anInteger;
        break;
      }
      case Type::aString:
      {
        return value_.aString < rhs.value_.aString;
        break;
      }
      default:
      {
        return false;
        break;
      }
    }
  }

  int32_t& set_anInteger(int32_t t = int32_t()) {
    __clear();
    type_ = Type::anInteger;
    ::new (std::addressof(value_.anInteger)) int32_t(t);
    return value_.anInteger;
  }

  std::string& set_aString(std::string const &t) {
    __clear();
    type_ = Type::aString;
    ::new (std::addressof(value_.aString)) std::string(t);
    return value_.aString;
  }

  std::string& set_aString(std::string&& t) {
    __clear();
    type_ = Type::aString;
    ::new (std::addressof(value_.aString)) std::string(std::move(t));
    return value_.aString;
  }

  template<typename... T, typename = ::apache::thrift::safe_overload_t<std::string, T...>> std::string& set_aString(T&&... t) {
    __clear();
    type_ = Type::aString;
    ::new (std::addressof(value_.aString)) std::string(std::forward<T>(t)...);
    return value_.aString;
  }

  int32_t const & get_anInteger() const {
    assert(type_ == Type::anInteger);
    return value_.anInteger;
  }

  std::string const & get_aString() const {
    assert(type_ == Type::aString);
    return value_.aString;
  }

  int32_t & mutable_anInteger() {
    assert(type_ == Type::anInteger);
    return value_.anInteger;
  }

  std::string & mutable_aString() {
    assert(type_ == Type::aString);
    return value_.aString;
  }

  int32_t move_anInteger() {
    assert(type_ == Type::anInteger);
    return std::move(value_.anInteger);
  }

  std::string move_aString() {
    assert(type_ == Type::aString);
    return std::move(value_.aString);
  }

  Type getType() const { return type_; }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
 protected:
  template <class T>
  void destruct(T &val) {
    (&val)->~T();
  }

  Type type_;
  storage_type value_;
};

void swap(MyUnion& a, MyUnion& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyUnion>::clear( ::cpp2::MyUnion* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyUnion>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyUnion>::write(Protocol* proto,  ::cpp2::MyUnion const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyUnion>::read(Protocol* proto,  ::cpp2::MyUnion* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyUnion>::serializedSize(Protocol const* proto,  ::cpp2::MyUnion const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyUnion>::serializedSizeZC(Protocol const* proto,  ::cpp2::MyUnion const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class MyField : private apache::thrift::detail::st::ComparisonOperators<MyField> {
 public:

  MyField() :
      opt_value(0),
      value(0),
      req_value(0) {}
  // FragileConstructor for use in initialization lists only

  MyField(apache::thrift::FragileConstructor, int64_t opt_value__arg, int64_t value__arg, int64_t req_value__arg) :
      opt_value(std::move(opt_value__arg)),
      value(std::move(value__arg)),
      req_value(std::move(req_value__arg)) {
    __isset.opt_value = true;
    __isset.value = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyField(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    opt_value = arg.move();
    __isset.opt_value = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyField(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    value = arg.move();
    __isset.value = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyField(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyField(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    req_value = arg.move();
  }

  MyField(MyField&&) = default;

  MyField(const MyField&) = default;

  MyField& operator=(MyField&&) = default;

  MyField& operator=(const MyField&) = default;
  void __clear();

  virtual ~MyField() throw() {}

  int64_t opt_value;
  int64_t value;
  int64_t req_value;

  struct __isset {
    void __clear() {
      opt_value = false;
      value = false;
    }

    bool opt_value = false;
    bool value = false;
  } __isset;
  bool operator==(const MyField& rhs) const;
  bool operator < (const MyField& rhs) const;

  const int64_t* get_opt_value() const& {
    return __isset.opt_value ? std::addressof(opt_value) : nullptr;
  }

  int64_t* get_opt_value() & {
    return __isset.opt_value ? std::addressof(opt_value) : nullptr;
  }
  int64_t* get_opt_value() && = delete;

  int64_t& set_opt_value(int64_t opt_value_) {
    opt_value = opt_value_;
    __isset.opt_value = true;
    return opt_value;
  }

  int64_t get_value() const {
    return value;
  }

  int64_t& set_value(int64_t value_) {
    value = value_;
    __isset.value = true;
    return value;
  }

  int64_t get_req_value() const {
    return req_value;
  }

  int64_t& set_req_value(int64_t req_value_) {
    req_value = req_value_;
    return req_value;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(MyField& a, MyField& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyField>::clear( ::cpp2::MyField* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyField>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyField>::write(Protocol* proto,  ::cpp2::MyField const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyField>::read(Protocol* proto,  ::cpp2::MyField* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyField>::serializedSize(Protocol const* proto,  ::cpp2::MyField const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyField>::serializedSizeZC(Protocol const* proto,  ::cpp2::MyField const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class MyStruct : private apache::thrift::detail::st::ComparisonOperators<MyStruct> {
 public:

  MyStruct() {}
  // FragileConstructor for use in initialization lists only

  MyStruct(apache::thrift::FragileConstructor, std::unique_ptr< ::cpp2::MyField> opt_ref__arg, std::unique_ptr< ::cpp2::MyField> ref__arg, std::unique_ptr< ::cpp2::MyField> req_ref__arg) :
      opt_ref(std::move(opt_ref__arg)),
      ref(std::move(ref__arg)),
      req_ref(std::move(req_ref__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    opt_ref = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStruct(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    ref = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  MyStruct(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    MyStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    req_ref = arg.move();
  }

  MyStruct(MyStruct&&) = default;
  MyStruct(const MyStruct& src0);

  MyStruct& operator=(MyStruct&&) = default;
  MyStruct& operator=(const MyStruct& src1);
  void __clear();

  virtual ~MyStruct() throw() {}

  std::unique_ptr< ::cpp2::MyField> opt_ref;
  std::unique_ptr< ::cpp2::MyField> ref;
  std::unique_ptr< ::cpp2::MyField> req_ref;

  struct __isset {
    void __clear() {}

  } __isset;
  bool operator==(const MyStruct& rhs) const;
  bool operator < (const MyStruct& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(MyStruct& a, MyStruct& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::MyStruct>::clear( ::cpp2::MyStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::MyStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::write(Protocol* proto,  ::cpp2::MyStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::read(Protocol* proto,  ::cpp2::MyStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSize(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::MyStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::MyStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class StructWithUnion : private apache::thrift::detail::st::ComparisonOperators<StructWithUnion> {
 public:

  StructWithUnion() :
      aDouble(0) {}
  // FragileConstructor for use in initialization lists only

  StructWithUnion(apache::thrift::FragileConstructor, std::unique_ptr< ::cpp2::MyUnion> u__arg, double aDouble__arg,  ::cpp2::MyField f__arg) :
      u(std::move(u__arg)),
      aDouble(std::move(aDouble__arg)),
      f(std::move(f__arg)) {
    __isset.aDouble = true;
    __isset.f = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithUnion(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithUnion(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    u = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithUnion(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithUnion(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    aDouble = arg.move();
    __isset.aDouble = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithUnion(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithUnion(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    f = arg.move();
    __isset.f = true;
  }

  StructWithUnion(StructWithUnion&&) = default;
  StructWithUnion(const StructWithUnion& src6);

  StructWithUnion& operator=(StructWithUnion&&) = default;
  StructWithUnion& operator=(const StructWithUnion& src7);
  void __clear();

  virtual ~StructWithUnion() throw() {}

  std::unique_ptr< ::cpp2::MyUnion> u;
  double aDouble;
   ::cpp2::MyField f;

  struct __isset {
    void __clear() {
      aDouble = false;
      f = false;
    }

    bool aDouble = false;
    bool f = false;
  } __isset;
  bool operator==(const StructWithUnion& rhs) const;
  bool operator < (const StructWithUnion& rhs) const;

  double get_aDouble() const {
    return aDouble;
  }

  double& set_aDouble(double aDouble_) {
    aDouble = aDouble_;
    __isset.aDouble = true;
    return aDouble;
  }
  const  ::cpp2::MyField& get_f() const&;
   ::cpp2::MyField get_f() &&;
  template <typename T_StructWithUnion_f_struct_setter>
   ::cpp2::MyField& set_f(T_StructWithUnion_f_struct_setter&& f_);

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(StructWithUnion& a, StructWithUnion& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::StructWithUnion>::clear( ::cpp2::StructWithUnion* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::StructWithUnion>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithUnion>::write(Protocol* proto,  ::cpp2::StructWithUnion const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithUnion>::read(Protocol* proto,  ::cpp2::StructWithUnion* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithUnion>::serializedSize(Protocol const* proto,  ::cpp2::StructWithUnion const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithUnion>::serializedSizeZC(Protocol const* proto,  ::cpp2::StructWithUnion const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class RecursiveStruct : private apache::thrift::detail::st::ComparisonOperators<RecursiveStruct> {
 public:

  RecursiveStruct() {}
  // FragileConstructor for use in initialization lists only

  RecursiveStruct(apache::thrift::FragileConstructor, std::vector< ::cpp2::RecursiveStruct> mes__arg) :
      mes(std::move(mes__arg)) {
    __isset.mes = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  RecursiveStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    RecursiveStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    mes = arg.move();
    __isset.mes = true;
  }

  RecursiveStruct(RecursiveStruct&&) = default;

  RecursiveStruct(const RecursiveStruct&) = default;

  RecursiveStruct& operator=(RecursiveStruct&&) = default;

  RecursiveStruct& operator=(const RecursiveStruct&) = default;
  void __clear();

  virtual ~RecursiveStruct() throw() {}

  std::vector< ::cpp2::RecursiveStruct> mes;

  struct __isset {
    void __clear() {
      mes = false;
    }

    bool mes = false;
  } __isset;
  bool operator==(const RecursiveStruct& rhs) const;
  bool operator < (const RecursiveStruct& rhs) const;
  const std::vector< ::cpp2::RecursiveStruct>* get_mes() const&;
  std::vector< ::cpp2::RecursiveStruct>* get_mes() &;
  std::vector< ::cpp2::RecursiveStruct>* get_mes() && = delete;
  template <typename T_RecursiveStruct_mes_struct_setter>
  std::vector< ::cpp2::RecursiveStruct>& set_mes(T_RecursiveStruct_mes_struct_setter&& mes_);

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(RecursiveStruct& a, RecursiveStruct& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::RecursiveStruct>::clear( ::cpp2::RecursiveStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::RecursiveStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::RecursiveStruct>::write(Protocol* proto,  ::cpp2::RecursiveStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::RecursiveStruct>::read(Protocol* proto,  ::cpp2::RecursiveStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::RecursiveStruct>::serializedSize(Protocol const* proto,  ::cpp2::RecursiveStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::RecursiveStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::RecursiveStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class StructWithContainers : private apache::thrift::detail::st::ComparisonOperators<StructWithContainers> {
 public:

  StructWithContainers() {}
  // FragileConstructor for use in initialization lists only

  StructWithContainers(apache::thrift::FragileConstructor, std::unique_ptr<std::vector<int32_t>> list_ref__arg, std::unique_ptr<std::set<int32_t>> set_ref__arg, std::unique_ptr<std::map<int32_t, int32_t>> map_ref__arg, std::unique_ptr<std::vector<int32_t>> list_ref_unique__arg, std::shared_ptr<std::set<int32_t>> set_ref_shared__arg, std::shared_ptr<const std::map<int32_t, int32_t>> map_ref_custom__arg, std::shared_ptr<const std::vector<int32_t>> list_ref_shared_const__arg, std::auto_ptr<std::set<int32_t>> set_custom_ref__arg) :
      list_ref(std::move(list_ref__arg)),
      set_ref(std::move(set_ref__arg)),
      map_ref(std::move(map_ref__arg)),
      list_ref_unique(std::move(list_ref_unique__arg)),
      set_ref_shared(std::move(set_ref_shared__arg)),
      map_ref_custom(std::move(map_ref_custom__arg)),
      list_ref_shared_const(std::move(list_ref_shared_const__arg)),
      set_custom_ref(std::move(set_custom_ref__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    list_ref = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    set_ref = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    map_ref = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    list_ref_unique = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    set_ref_shared = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<6, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    map_ref_custom = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<7, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    list_ref_shared_const = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithContainers(::apache::thrift::detail::argument_wrapper<8, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithContainers(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    set_custom_ref = arg.move();
  }

  StructWithContainers(StructWithContainers&&) = default;
  StructWithContainers(const StructWithContainers& src18);

  StructWithContainers& operator=(StructWithContainers&&) = default;
  StructWithContainers& operator=(const StructWithContainers& src19);
  void __clear();

  virtual ~StructWithContainers() throw() {}

  std::unique_ptr<std::vector<int32_t>> list_ref;
  std::unique_ptr<std::set<int32_t>> set_ref;
  std::unique_ptr<std::map<int32_t, int32_t>> map_ref;
  std::unique_ptr<std::vector<int32_t>> list_ref_unique;
  std::shared_ptr<std::set<int32_t>> set_ref_shared;
  std::shared_ptr<const std::map<int32_t, int32_t>> map_ref_custom;
  std::shared_ptr<const std::vector<int32_t>> list_ref_shared_const;
  std::auto_ptr<std::set<int32_t>> set_custom_ref;

  struct __isset {
    void __clear() {}

  } __isset;
  bool operator==(const StructWithContainers& rhs) const;

  bool operator < (const StructWithContainers& rhs) const {
    if (!(list_ref == rhs.list_ref)) {
      return list_ref < rhs.list_ref;
    }
    if (!(set_ref == rhs.set_ref)) {
      return set_ref < rhs.set_ref;
    }
    if (!(map_ref == rhs.map_ref)) {
      return map_ref < rhs.map_ref;
    }
    if (!(list_ref_unique == rhs.list_ref_unique)) {
      return list_ref_unique < rhs.list_ref_unique;
    }
    if (!(set_ref_shared == rhs.set_ref_shared)) {
      return set_ref_shared < rhs.set_ref_shared;
    }
    if (!(map_ref_custom == rhs.map_ref_custom)) {
      return map_ref_custom < rhs.map_ref_custom;
    }
    if (!(list_ref_shared_const == rhs.list_ref_shared_const)) {
      return list_ref_shared_const < rhs.list_ref_shared_const;
    }
    if (!(set_custom_ref == rhs.set_custom_ref)) {
      return set_custom_ref < rhs.set_custom_ref;
    }
    return false;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(StructWithContainers& a, StructWithContainers& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::StructWithContainers>::clear( ::cpp2::StructWithContainers* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::StructWithContainers>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithContainers>::write(Protocol* proto,  ::cpp2::StructWithContainers const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithContainers>::read(Protocol* proto,  ::cpp2::StructWithContainers* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithContainers>::serializedSize(Protocol const* proto,  ::cpp2::StructWithContainers const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithContainers>::serializedSizeZC(Protocol const* proto,  ::cpp2::StructWithContainers const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

class StructWithSharedConst : private apache::thrift::detail::st::ComparisonOperators<StructWithSharedConst> {
 public:

  StructWithSharedConst() {}
  // FragileConstructor for use in initialization lists only

  StructWithSharedConst(apache::thrift::FragileConstructor, std::shared_ptr<const  ::cpp2::MyField> opt_shared_const__arg, std::shared_ptr<const  ::cpp2::MyField> shared_const__arg, std::shared_ptr<const  ::cpp2::MyField> req_shared_const__arg) :
      opt_shared_const(std::move(opt_shared_const__arg)),
      shared_const(std::move(shared_const__arg)),
      req_shared_const(std::move(req_shared_const__arg)) {}
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithSharedConst(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithSharedConst(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    opt_shared_const = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithSharedConst(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithSharedConst(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    shared_const = arg.move();
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  StructWithSharedConst(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    StructWithSharedConst(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    req_shared_const = arg.move();
  }

  StructWithSharedConst(StructWithSharedConst&&) = default;

  StructWithSharedConst(const StructWithSharedConst&) = default;

  StructWithSharedConst& operator=(StructWithSharedConst&&) = default;

  StructWithSharedConst& operator=(const StructWithSharedConst&) = default;
  void __clear();

  virtual ~StructWithSharedConst() throw() {}

  std::shared_ptr<const  ::cpp2::MyField> opt_shared_const;
  std::shared_ptr<const  ::cpp2::MyField> shared_const;
  std::shared_ptr<const  ::cpp2::MyField> req_shared_const;

  struct __isset {
    void __clear() {}

  } __isset;
  bool operator==(const StructWithSharedConst& rhs) const;
  bool operator < (const StructWithSharedConst& rhs) const;

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(StructWithSharedConst& a, StructWithSharedConst& b);

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::StructWithSharedConst>::clear( ::cpp2::StructWithSharedConst* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::StructWithSharedConst>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithSharedConst>::write(Protocol* proto,  ::cpp2::StructWithSharedConst const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithSharedConst>::read(Protocol* proto,  ::cpp2::StructWithSharedConst* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithSharedConst>::serializedSize(Protocol const* proto,  ::cpp2::StructWithSharedConst const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> inline uint32_t Cpp2Ops< ::cpp2::StructWithSharedConst>::serializedSizeZC(Protocol const* proto,  ::cpp2::StructWithSharedConst const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2