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
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SubscribedDefaultQos.h"

namespace oai {
namespace udm {
namespace model {

SubscribedDefaultQos::SubscribedDefaultQos() {
  m__5qi               = 0;
  m_PriorityLevel      = 0;
  m_PriorityLevelIsSet = false;
}

SubscribedDefaultQos::~SubscribedDefaultQos() {}

void SubscribedDefaultQos::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SubscribedDefaultQos& o) {
  j        = nlohmann::json();
  j["5qi"] = o.m__5qi;
  j["arp"] = o.m_Arp;
  if (o.priorityLevelIsSet()) j["priorityLevel"] = o.m_PriorityLevel;
}

void from_json(const nlohmann::json& j, SubscribedDefaultQos& o) {
  j.at("5qi").get_to(o.m__5qi);
  j.at("arp").get_to(o.m_Arp);
  if (j.find("priorityLevel") != j.end()) {
    j.at("priorityLevel").get_to(o.m_PriorityLevel);
    o.m_PriorityLevelIsSet = true;
  }
}

int32_t SubscribedDefaultQos::get5qi() const {
  return m__5qi;
}
void SubscribedDefaultQos::set5qi(int32_t const value) {
  m__5qi = value;
}
Arp SubscribedDefaultQos::getArp() const {
  return m_Arp;
}
void SubscribedDefaultQos::setArp(Arp const& value) {
  m_Arp = value;
}
int32_t SubscribedDefaultQos::getPriorityLevel() const {
  return m_PriorityLevel;
}
void SubscribedDefaultQos::setPriorityLevel(int32_t const value) {
  m_PriorityLevel      = value;
  m_PriorityLevelIsSet = true;
}
bool SubscribedDefaultQos::priorityLevelIsSet() const {
  return m_PriorityLevelIsSet;
}
void SubscribedDefaultQos::unsetPriorityLevel() {
  m_PriorityLevelIsSet = false;
}

}  // namespace model
}  // namespace udm
}  // namespace oai