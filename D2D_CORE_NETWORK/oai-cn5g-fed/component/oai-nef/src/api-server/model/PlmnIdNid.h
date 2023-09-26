/**
 * Nnef_EventExposure
 * NEF Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.5
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * PlmnIdNid.h
 *
 * Contains the serving core network operator PLMN ID and, for an SNPN, the NID
 * that together with the PLMN ID identifies the SNPN.
 */

#ifndef PlmnIdNid_H_
#define PlmnIdNid_H_

#include <nlohmann/json.hpp>
#include <string>

namespace oai::nef::model {

/// <summary>
/// Contains the serving core network operator PLMN ID and, for an SNPN, the NID
/// that together with the PLMN ID identifies the SNPN.
/// </summary>
class PlmnIdNid {
 public:
  PlmnIdNid();
  virtual ~PlmnIdNid() = default;

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

  bool operator==(const PlmnIdNid& rhs) const;
  bool operator!=(const PlmnIdNid& rhs) const;

  /////////////////////////////////////////////
  /// PlmnIdNid members

  /// <summary>
  /// Mobile Country Code part of the PLMN, comprising 3 digits, as defined in
  /// clause 9.3.3.5 of 3GPP TS 38.413.
  /// </summary>
  std::string getMcc() const;
  void setMcc(std::string const& value);
  /// <summary>
  /// Mobile Network Code part of the PLMN, comprising 2 or 3 digits, as defined
  /// in clause 9.3.3.5 of 3GPP TS 38.413.
  /// </summary>
  std::string getMnc() const;
  void setMnc(std::string const& value);
  /// <summary>
  /// This represents the Network Identifier, which together with a PLMN ID is
  /// used to identify an SNPN (see 3GPP TS 23.003 and 3GPP TS 23.501
  /// clause 5.30.2.1).
  /// </summary>
  std::string getNid() const;
  void setNid(std::string const& value);
  bool nidIsSet() const;
  void unsetNid();

  friend void to_json(nlohmann::json& j, const PlmnIdNid& o);
  friend void from_json(const nlohmann::json& j, PlmnIdNid& o);

 protected:
  std::string m_Mcc;

  std::string m_Mnc;

  std::string m_Nid;
  bool m_NidIsSet;
};

}  // namespace oai::nef::model

#endif /* PlmnIdNid_H_ */
