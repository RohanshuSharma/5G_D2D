/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * NfTypeCond.h
 *
 *
 */

#ifndef NfTypeCond_H_
#define NfTypeCond_H_

//#include "NFType.h"
#include <string>
#include <nlohmann/json.hpp>

namespace oai {
namespace nrf {
namespace model {

/// <summary>
///
/// </summary>
class NfTypeCond {
 public:
  NfTypeCond();
  virtual ~NfTypeCond();

  void validate();

  /////////////////////////////////////////////
  /// NfTypeCond members

  /// <summary>
  ///
  /// </summary>
  std::string getNfType() const;
  void setNfType(std::string const& value);

  friend void to_json(nlohmann::json& j, const NfTypeCond& o);
  friend void from_json(const nlohmann::json& j, NfTypeCond& o);

 protected:
  std::string m_NfType;
};

}  // namespace model
}  // namespace nrf
}  // namespace oai

#endif /* NfTypeCond_H_ */
