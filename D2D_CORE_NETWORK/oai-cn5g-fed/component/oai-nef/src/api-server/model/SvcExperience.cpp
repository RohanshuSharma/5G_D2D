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

#include "SvcExperience.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

SvcExperience::SvcExperience() {
  m_Mos             = 0.0f;
  m_MosIsSet        = false;
  m_UpperRange      = 0.0f;
  m_UpperRangeIsSet = false;
  m_LowerRange      = 0.0f;
  m_LowerRangeIsSet = false;
}

void SvcExperience::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool SvcExperience::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SvcExperience::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SvcExperience" : pathPrefix;

  return success;
}

bool SvcExperience::operator==(const SvcExperience& rhs) const {
  return

      ((!mosIsSet() && !rhs.mosIsSet()) ||
       (mosIsSet() && rhs.mosIsSet() && getMos() == rhs.getMos())) &&

      ((!upperRangeIsSet() && !rhs.upperRangeIsSet()) ||
       (upperRangeIsSet() && rhs.upperRangeIsSet() &&
        getUpperRange() == rhs.getUpperRange())) &&

      ((!lowerRangeIsSet() && !rhs.lowerRangeIsSet()) ||
       (lowerRangeIsSet() && rhs.lowerRangeIsSet() &&
        getLowerRange() == rhs.getLowerRange()))

          ;
}

bool SvcExperience::operator!=(const SvcExperience& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SvcExperience& o) {
  j = nlohmann::json();
  if (o.mosIsSet()) j["mos"] = o.m_Mos;
  if (o.upperRangeIsSet()) j["upperRange"] = o.m_UpperRange;
  if (o.lowerRangeIsSet()) j["lowerRange"] = o.m_LowerRange;
}

void from_json(const nlohmann::json& j, SvcExperience& o) {
  if (j.find("mos") != j.end()) {
    j.at("mos").get_to(o.m_Mos);
    o.m_MosIsSet = true;
  }
  if (j.find("upperRange") != j.end()) {
    j.at("upperRange").get_to(o.m_UpperRange);
    o.m_UpperRangeIsSet = true;
  }
  if (j.find("lowerRange") != j.end()) {
    j.at("lowerRange").get_to(o.m_LowerRange);
    o.m_LowerRangeIsSet = true;
  }
}

float SvcExperience::getMos() const {
  return m_Mos;
}
void SvcExperience::setMos(float const value) {
  m_Mos      = value;
  m_MosIsSet = true;
}
bool SvcExperience::mosIsSet() const {
  return m_MosIsSet;
}
void SvcExperience::unsetMos() {
  m_MosIsSet = false;
}
float SvcExperience::getUpperRange() const {
  return m_UpperRange;
}
void SvcExperience::setUpperRange(float const value) {
  m_UpperRange      = value;
  m_UpperRangeIsSet = true;
}
bool SvcExperience::upperRangeIsSet() const {
  return m_UpperRangeIsSet;
}
void SvcExperience::unsetUpperRange() {
  m_UpperRangeIsSet = false;
}
float SvcExperience::getLowerRange() const {
  return m_LowerRange;
}
void SvcExperience::setLowerRange(float const value) {
  m_LowerRange      = value;
  m_LowerRangeIsSet = true;
}
bool SvcExperience::lowerRangeIsSet() const {
  return m_LowerRangeIsSet;
}
void SvcExperience::unsetLowerRange() {
  m_LowerRangeIsSet = false;
}

}  // namespace oai::nef::model