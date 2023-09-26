/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */
/**
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "LimitIdToMonitoringKey.h"

namespace oai::udr::model {

LimitIdToMonitoringKey::LimitIdToMonitoringKey() {
  m_LimitId     = "";
  m_MonkeyIsSet = false;
}

LimitIdToMonitoringKey::~LimitIdToMonitoringKey() {}

void LimitIdToMonitoringKey::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const LimitIdToMonitoringKey& o) {
  j            = nlohmann::json();
  j["limitId"] = o.m_LimitId;
  if (o.monkeyIsSet() || !o.m_Monkey.empty()) j["monkey"] = o.m_Monkey;
}

void from_json(const nlohmann::json& j, LimitIdToMonitoringKey& o) {
  j.at("limitId").get_to(o.m_LimitId);
  if (j.find("monkey") != j.end()) {
    j.at("monkey").get_to(o.m_Monkey);
    o.m_MonkeyIsSet = true;
  }
}

std::string LimitIdToMonitoringKey::getLimitId() const {
  return m_LimitId;
}
void LimitIdToMonitoringKey::setLimitId(std::string const& value) {
  m_LimitId = value;
}
std::vector<std::string>& LimitIdToMonitoringKey::getMonkey() {
  return m_Monkey;
}
void LimitIdToMonitoringKey::setMonkey(std::vector<std::string> const& value) {
  m_Monkey      = value;
  m_MonkeyIsSet = true;
}
bool LimitIdToMonitoringKey::monkeyIsSet() const {
  return m_MonkeyIsSet;
}
void LimitIdToMonitoringKey::unsetMonkey() {
  m_MonkeyIsSet = false;
}

}  // namespace oai::udr::model
