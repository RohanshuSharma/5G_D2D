/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2020, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.1.alpha-5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PduSessionRelCause.h
 *
 *
 */

#ifndef PduSessionRelCause_H_
#define PduSessionRelCause_H_

#include "PduSessionRelCause_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai {
namespace pcf {
namespace model {

/// <summary>
///
/// </summary>
class PduSessionRelCause {
 public:
  PduSessionRelCause();
  virtual ~PduSessionRelCause() = default;

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

  bool operator==(const PduSessionRelCause& rhs) const;
  bool operator!=(const PduSessionRelCause& rhs) const;

  /////////////////////////////////////////////
  /// PduSessionRelCause members

  PduSessionRelCause_anyOf getValue() const;
  void setValue(PduSessionRelCause_anyOf value);
  PduSessionRelCause_anyOf::ePduSessionRelCause_anyOf getEnumValue() const;
  void setEnumValue(PduSessionRelCause_anyOf::ePduSessionRelCause_anyOf value);
  friend void to_json(nlohmann::json& j, const PduSessionRelCause& o);
  friend void from_json(const nlohmann::json& j, PduSessionRelCause& o);
  friend void to_json(nlohmann::json& j, const PduSessionRelCause_anyOf& o);
  friend void from_json(const nlohmann::json& j, PduSessionRelCause_anyOf& o);

 protected:
  PduSessionRelCause_anyOf m_value;
};

}  // namespace model
}  // namespace pcf
}  // namespace oai
#endif /* PduSessionRelCause_H_ */
