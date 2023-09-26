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

#include "GeographicArea.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

GeographicArea::GeographicArea() {
  m_Uncertainty         = 0.0f;
  m_Confidence          = 0;
  m_Altitude            = 0.0;
  m_UncertaintyAltitude = 0.0f;
  m_InnerRadius         = 0;
  m_UncertaintyRadius   = 0.0f;
  m_OffsetAngle         = 0;
  m_IncludedAngle       = 0;
}

void GeographicArea::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool GeographicArea::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool GeographicArea::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "GeographicArea" : pathPrefix;

  /* Uncertainty */ {
    const float& value                 = m_Uncertainty;
    const std::string currentValuePath = _pathPrefix + ".uncertainty";

    if (value < static_cast<float>(0)) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  /* Confidence */ {
    const int32_t& value               = m_Confidence;
    const std::string currentValuePath = _pathPrefix + ".confidence";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 100) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 100;";
    }
  }

  /* PointList */ {
    const std::vector<GeographicalCoordinates>& value = m_PointList;
    const std::string currentValuePath = _pathPrefix + ".pointList";

    if (value.size() < 3) {
      success = false;
      msg << currentValuePath << ": must have at least 3 elements;";
    }
    if (value.size() > 15) {
      success = false;
      msg << currentValuePath << ": must have at most 15 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const GeographicalCoordinates& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success =
            value.validate(msg, currentValuePath + ".pointList") && success;

        i++;
      }
    }
  }

  /* Altitude */ {
    const double& value                = m_Altitude;
    const std::string currentValuePath = _pathPrefix + ".altitude";

    if (value < -32767) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to -32767;";
    }
    if (value > 32767) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 32767;";
    }
  }

  /* UncertaintyAltitude */ {
    const float& value                 = m_UncertaintyAltitude;
    const std::string currentValuePath = _pathPrefix + ".uncertaintyAltitude";

    if (value < static_cast<float>(0)) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  /* InnerRadius */ {
    const int32_t& value               = m_InnerRadius;
    const std::string currentValuePath = _pathPrefix + ".innerRadius";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 327675) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 327675;";
    }
  }

  /* UncertaintyRadius */ {
    const float& value                 = m_UncertaintyRadius;
    const std::string currentValuePath = _pathPrefix + ".uncertaintyRadius";

    if (value < static_cast<float>(0)) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  /* OffsetAngle */ {
    const int32_t& value               = m_OffsetAngle;
    const std::string currentValuePath = _pathPrefix + ".offsetAngle";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 360) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 360;";
    }
  }

  /* IncludedAngle */ {
    const int32_t& value               = m_IncludedAngle;
    const std::string currentValuePath = _pathPrefix + ".includedAngle";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
    if (value > 360) {
      success = false;
      msg << currentValuePath << ": must be less than or equal to 360;";
    }
  }

  return success;
}

bool GeographicArea::operator==(const GeographicArea& rhs) const {
  return

      (getShape() == rhs.getShape()) &&

      (getPoint() == rhs.getPoint()) &&

      (getUncertainty() == rhs.getUncertainty()) &&

      (getUncertaintyEllipse() == rhs.getUncertaintyEllipse()) &&

      (getConfidence() == rhs.getConfidence()) &&

      (getPointList() == rhs.getPointList()) &&

      (getAltitude() == rhs.getAltitude()) &&

      (getUncertaintyAltitude() == rhs.getUncertaintyAltitude()) &&

      (getInnerRadius() == rhs.getInnerRadius()) &&

      (getUncertaintyRadius() == rhs.getUncertaintyRadius()) &&

      (getOffsetAngle() == rhs.getOffsetAngle()) &&

      (getIncludedAngle() == rhs.getIncludedAngle())

          ;
}

bool GeographicArea::operator!=(const GeographicArea& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const GeographicArea& o) {
  j                        = nlohmann::json();
  j["shape"]               = o.m_Shape;
  j["point"]               = o.m_Point;
  j["uncertainty"]         = o.m_Uncertainty;
  j["uncertaintyEllipse"]  = o.m_UncertaintyEllipse;
  j["confidence"]          = o.m_Confidence;
  j["pointList"]           = o.m_PointList;
  j["altitude"]            = o.m_Altitude;
  j["uncertaintyAltitude"] = o.m_UncertaintyAltitude;
  j["innerRadius"]         = o.m_InnerRadius;
  j["uncertaintyRadius"]   = o.m_UncertaintyRadius;
  j["offsetAngle"]         = o.m_OffsetAngle;
  j["includedAngle"]       = o.m_IncludedAngle;
}

void from_json(const nlohmann::json& j, GeographicArea& o) {
  j.at("shape").get_to(o.m_Shape);
  j.at("point").get_to(o.m_Point);
  j.at("uncertainty").get_to(o.m_Uncertainty);
  j.at("uncertaintyEllipse").get_to(o.m_UncertaintyEllipse);
  j.at("confidence").get_to(o.m_Confidence);
  j.at("pointList").get_to(o.m_PointList);
  j.at("altitude").get_to(o.m_Altitude);
  j.at("uncertaintyAltitude").get_to(o.m_UncertaintyAltitude);
  j.at("innerRadius").get_to(o.m_InnerRadius);
  j.at("uncertaintyRadius").get_to(o.m_UncertaintyRadius);
  j.at("offsetAngle").get_to(o.m_OffsetAngle);
  j.at("includedAngle").get_to(o.m_IncludedAngle);
}

SupportedGADShapes GeographicArea::getShape() const {
  return m_Shape;
}
void GeographicArea::setShape(SupportedGADShapes const& value) {
  m_Shape = value;
}
GeographicalCoordinates GeographicArea::getPoint() const {
  return m_Point;
}
void GeographicArea::setPoint(GeographicalCoordinates const& value) {
  m_Point = value;
}
float GeographicArea::getUncertainty() const {
  return m_Uncertainty;
}
void GeographicArea::setUncertainty(float const value) {
  m_Uncertainty = value;
}
UncertaintyEllipse GeographicArea::getUncertaintyEllipse() const {
  return m_UncertaintyEllipse;
}
void GeographicArea::setUncertaintyEllipse(UncertaintyEllipse const& value) {
  m_UncertaintyEllipse = value;
}
int32_t GeographicArea::getConfidence() const {
  return m_Confidence;
}
void GeographicArea::setConfidence(int32_t const value) {
  m_Confidence = value;
}
std::vector<GeographicalCoordinates> GeographicArea::getPointList() const {
  return m_PointList;
}
void GeographicArea::setPointList(
    std::vector<GeographicalCoordinates> const& value) {
  m_PointList = value;
}
double GeographicArea::getAltitude() const {
  return m_Altitude;
}
void GeographicArea::setAltitude(double const value) {
  m_Altitude = value;
}
float GeographicArea::getUncertaintyAltitude() const {
  return m_UncertaintyAltitude;
}
void GeographicArea::setUncertaintyAltitude(float const value) {
  m_UncertaintyAltitude = value;
}
int32_t GeographicArea::getInnerRadius() const {
  return m_InnerRadius;
}
void GeographicArea::setInnerRadius(int32_t const value) {
  m_InnerRadius = value;
}
float GeographicArea::getUncertaintyRadius() const {
  return m_UncertaintyRadius;
}
void GeographicArea::setUncertaintyRadius(float const value) {
  m_UncertaintyRadius = value;
}
int32_t GeographicArea::getOffsetAngle() const {
  return m_OffsetAngle;
}
void GeographicArea::setOffsetAngle(int32_t const value) {
  m_OffsetAngle = value;
}
int32_t GeographicArea::getIncludedAngle() const {
  return m_IncludedAngle;
}
void GeographicArea::setIncludedAngle(int32_t const value) {
  m_IncludedAngle = value;
}

}  // namespace oai::nef::model
