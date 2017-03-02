/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/Raiser.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class RaiserWrapper : virtual public RaiserSvIf {
  protected:
    PyObject *if_object;
  public:
    explicit RaiserWrapper(PyObject *if_object);
    virtual ~RaiserWrapper();
    folly::Future<folly::Unit> future_doBland() override;
    folly::Future<folly::Unit> future_doRaise() override;
    folly::Future<std::unique_ptr<std::string>> future_get200() override;
    folly::Future<std::unique_ptr<std::string>> future_get500() override;
};

std::shared_ptr<apache::thrift::ServerInterface> RaiserInterface(PyObject *if_object);
} // namespace cpp2