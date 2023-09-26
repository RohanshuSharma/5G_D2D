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

#include "ChangeItem.h"

namespace oai {
namespace udm {
namespace model {

ChangeItem::ChangeItem() {
  m_Path           = "";
  m_From           = "";
  m_FromIsSet      = false;
  m_OrigValueIsSet = false;
  m_NewValueIsSet  = false;
}

ChangeItem::~ChangeItem() {}

void ChangeItem::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const ChangeItem& o) {
  j         = nlohmann::json();
  j["op"]   = o.m_Op;
  j["path"] = o.m_Path;
  if (o.fromIsSet()) j["from"] = o.m_From;
  // if(o.origValueIsSet())
  //     j["origValue"] = o.m_OrigValue;
  //  if(o.newValueIsSet())
  //      j["newValue"] = o.m_NewValue;
}

void from_json(const nlohmann::json& j, ChangeItem& o) {
  j.at("op").get_to(o.m_Op);
  j.at("path").get_to(o.m_Path);
  if (j.find("from") != j.end()) {
    j.at("from").get_to(o.m_From);
    o.m_FromIsSet = true;
  }
  /*   if(j.find("origValue") != j.end())
     {
         j.at("origValue").get_to(o.m_OrigValue);
         o.m_OrigValueIsSet = true;
     }
     if(j.find("newValue") != j.end())
     {
         j.at("newValue").get_to(o.m_NewValue);
         o.m_NewValueIsSet = true;
     }
 */
}

ChangeType ChangeItem::getOp() const {
  return m_Op;
}
void ChangeItem::setOp(ChangeType const& value) {
  m_Op = value;
}
std::string ChangeItem::getPath() const {
  return m_Path;
}
void ChangeItem::setPath(std::string const& value) {
  m_Path = value;
}
std::string ChangeItem::getFrom() const {
  return m_From;
}
void ChangeItem::setFrom(std::string const& value) {
  m_From      = value;
  m_FromIsSet = true;
}
bool ChangeItem::fromIsSet() const {
  return m_FromIsSet;
}
void ChangeItem::unsetFrom() {
  m_FromIsSet = false;
}
/* Object ChangeItem::getOrigValue() const
{
    return m_OrigValue;
}

void ChangeItem::setOrigValue(Object const& value)
{
    m_OrigValue = value;
    m_OrigValueIsSet = true;
}
*/
bool ChangeItem::origValueIsSet() const {
  return m_OrigValueIsSet;
}
void ChangeItem::unsetOrigValue() {
  m_OrigValueIsSet = false;
}
/* Object ChangeItem::getNewValue() const
{
    return m_NewValue;
}

void ChangeItem::setNewValue(Object const& value)
{
    m_NewValue = value;
    m_NewValueIsSet = true;
}
*/
bool ChangeItem::newValueIsSet() const {
  return m_NewValueIsSet;
}
void ChangeItem::unsetNewValue() {
  m_NewValueIsSet = false;
}

}  // namespace model
}  // namespace udm
}  // namespace oai
