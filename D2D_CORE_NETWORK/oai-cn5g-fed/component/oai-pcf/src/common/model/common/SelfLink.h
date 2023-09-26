/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * SelfLink.h
 *
 *
 */

#ifndef SelfLink_H_
#define SelfLink_H_

#include "Link.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class SelfLink {
 public:
  SelfLink();
  virtual ~SelfLink() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const SelfLink& rhs) const;
  bool operator!=(const SelfLink& rhs) const;

  /////////////////////////////////////////////
  /// SelfLink members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::Link getSelf() const;
  void setSelf(oai::model::common::Link const& value);

  friend void to_json(nlohmann::json& j, const SelfLink& o);
  friend void from_json(const nlohmann::json& j, SelfLink& o);

 protected:
  oai::model::common::Link m_Self;
};

}  // namespace oai::model::common

#endif /* SelfLink_H_ */
