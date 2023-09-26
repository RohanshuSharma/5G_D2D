/**
 * 3gpp-mo-lcs-notify
 * API for UE updated location information notification. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * LocationInfo.h
 *
 * Represents the user location information.
 */

#ifndef LocationInfo_H_
#define LocationInfo_H_

#include <nlohmann/json.hpp>
#include <string>

#include "AccuracyFulfilmentIndicator.h"
#include "CivicAddress.h"
#include "GeographicArea.h"
#include "LdrType.h"
#include "PositioningMethod.h"
#include "VelocityEstimate.h"

namespace oai::nef::model {

/// <summary>
/// Represents the user location information.
/// </summary>
class LocationInfo {
 public:
  LocationInfo();
  virtual ~LocationInfo() = default;

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

  bool operator==(const LocationInfo& rhs) const;
  bool operator!=(const LocationInfo& rhs) const;

  /////////////////////////////////////////////
  /// LocationInfo members

  /// <summary>
  /// Unsigned integer identifying a period of time in units of minutes.
  /// </summary>
  int32_t getAgeOfLocationInfo() const;
  void setAgeOfLocationInfo(int32_t const value);
  bool ageOfLocationInfoIsSet() const;
  void unsetAgeOfLocationInfo();
  /// <summary>
  /// Indicates the Cell Global Identification of the user which identifies the
  /// cell the UE is registered.
  /// </summary>
  std::string getCellId() const;
  void setCellId(std::string const& value);
  bool cellIdIsSet() const;
  void unsetCellId();
  /// <summary>
  /// Indicates the eNodeB in which the UE is currently located.
  /// </summary>
  std::string getEnodeBId() const;
  void setEnodeBId(std::string const& value);
  bool enodeBIdIsSet() const;
  void unsetEnodeBId();
  /// <summary>
  /// Identifies the Routing Area Identity of the user where the UE is located.
  /// </summary>
  std::string getRoutingAreaId() const;
  void setRoutingAreaId(std::string const& value);
  bool routingAreaIdIsSet() const;
  void unsetRoutingAreaId();
  /// <summary>
  /// Identifies the Tracking Area Identity of the user where the UE is located.
  /// </summary>
  std::string getTrackingAreaId() const;
  void setTrackingAreaId(std::string const& value);
  bool trackingAreaIdIsSet() const;
  void unsetTrackingAreaId();
  /// <summary>
  /// Identifies the PLMN Identity of the user where the UE is located.
  /// </summary>
  std::string getPlmnId() const;
  void setPlmnId(std::string const& value);
  bool plmnIdIsSet() const;
  void unsetPlmnId();
  /// <summary>
  /// Identifies the TWAN Identity of the user where the UE is located.
  /// </summary>
  std::string getTwanId() const;
  void setTwanId(std::string const& value);
  bool twanIdIsSet() const;
  void unsetTwanId();
  /// <summary>
  ///
  /// </summary>
  GeographicArea getGeographicArea() const;
  void setGeographicArea(GeographicArea const& value);
  bool geographicAreaIsSet() const;
  void unsetGeographicArea();
  /// <summary>
  ///
  /// </summary>
  CivicAddress getCivicAddress() const;
  void setCivicAddress(CivicAddress const& value);
  bool civicAddressIsSet() const;
  void unsetCivicAddress();
  /// <summary>
  ///
  /// </summary>
  PositioningMethod getPositionMethod() const;
  void setPositionMethod(PositioningMethod const& value);
  bool positionMethodIsSet() const;
  void unsetPositionMethod();
  /// <summary>
  ///
  /// </summary>
  AccuracyFulfilmentIndicator getQosFulfilInd() const;
  void setQosFulfilInd(AccuracyFulfilmentIndicator const& value);
  bool qosFulfilIndIsSet() const;
  void unsetQosFulfilInd();
  /// <summary>
  ///
  /// </summary>
  VelocityEstimate getUeVelocity() const;
  void setUeVelocity(VelocityEstimate const& value);
  bool ueVelocityIsSet() const;
  void unsetUeVelocity();
  /// <summary>
  ///
  /// </summary>
  LdrType getLdrType() const;
  void setLdrType(LdrType const& value);
  bool ldrTypeIsSet() const;
  void unsetLdrType();

  friend void to_json(nlohmann::json& j, const LocationInfo& o);
  friend void from_json(const nlohmann::json& j, LocationInfo& o);

 protected:
  int32_t m_AgeOfLocationInfo;
  bool m_AgeOfLocationInfoIsSet;
  std::string m_CellId;
  bool m_CellIdIsSet;
  std::string m_EnodeBId;
  bool m_EnodeBIdIsSet;
  std::string m_RoutingAreaId;
  bool m_RoutingAreaIdIsSet;
  std::string m_TrackingAreaId;
  bool m_TrackingAreaIdIsSet;
  std::string m_PlmnId;
  bool m_PlmnIdIsSet;
  std::string m_TwanId;
  bool m_TwanIdIsSet;
  GeographicArea m_GeographicArea;
  bool m_GeographicAreaIsSet;
  CivicAddress m_CivicAddress;
  bool m_CivicAddressIsSet;
  PositioningMethod m_PositionMethod;
  bool m_PositionMethodIsSet;
  AccuracyFulfilmentIndicator m_QosFulfilInd;
  bool m_QosFulfilIndIsSet;
  VelocityEstimate m_UeVelocity;
  bool m_UeVelocityIsSet;
  LdrType m_LdrType;
  bool m_LdrTypeIsSet;
};

}  // namespace oai::nef::model

#endif /* LocationInfo_H_ */
