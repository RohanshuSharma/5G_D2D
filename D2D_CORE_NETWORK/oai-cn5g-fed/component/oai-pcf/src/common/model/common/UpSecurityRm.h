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
 * UpSecurityRm.h
 *
 *
 */

#ifndef UpSecurityRm_H_
#define UpSecurityRm_H_

#include "UpConfidentiality.h"
#include "UpSecurity.h"
#include "NullValue.h"
#include "UpIntegrity.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class UpSecurityRm {
 public:
  UpSecurityRm();
  virtual ~UpSecurityRm() = default;

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

  bool operator==(const UpSecurityRm& rhs) const;
  bool operator!=(const UpSecurityRm& rhs) const;

  /////////////////////////////////////////////
  /// UpSecurityRm members

  /// <summary>
  ///
  /// </summary>
  oai::model::common::UpIntegrity getUpIntegr() const;
  void setUpIntegr(oai::model::common::UpIntegrity const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::common::UpConfidentiality getUpConfid() const;
  void setUpConfid(oai::model::common::UpConfidentiality const& value);

  friend void to_json(nlohmann::json& j, const UpSecurityRm& o);
  friend void from_json(const nlohmann::json& j, UpSecurityRm& o);

 protected:
  oai::model::common::UpIntegrity m_UpIntegr;

  oai::model::common::UpConfidentiality m_UpConfid;
};

}  // namespace oai::model::common

#endif /* UpSecurityRm_H_ */
