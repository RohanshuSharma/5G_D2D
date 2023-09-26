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

#include "NetworkAreaInfo_2.h"

namespace oai::udr::model {

NetworkAreaInfo_2::NetworkAreaInfo_2() {
  m_EcgisIsSet       = false;
  m_NcgisIsSet       = false;
  m_GRanNodeIdsIsSet = false;
  m_TaisIsSet        = false;
}

NetworkAreaInfo_2::~NetworkAreaInfo_2() {}

void NetworkAreaInfo_2::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const NetworkAreaInfo_2& o) {
  j = nlohmann::json();
  if (o.ecgisIsSet() || !o.m_Ecgis.empty()) j["ecgis"] = o.m_Ecgis;
  if (o.ncgisIsSet() || !o.m_Ncgis.empty()) j["ncgis"] = o.m_Ncgis;
  if (o.gRanNodeIdsIsSet() || !o.m_GRanNodeIds.empty())
    j["gRanNodeIds"] = o.m_GRanNodeIds;
  if (o.taisIsSet() || !o.m_Tais.empty()) j["tais"] = o.m_Tais;
}

void from_json(const nlohmann::json& j, NetworkAreaInfo_2& o) {
  if (j.find("ecgis") != j.end()) {
    j.at("ecgis").get_to(o.m_Ecgis);
    o.m_EcgisIsSet = true;
  }
  if (j.find("ncgis") != j.end()) {
    j.at("ncgis").get_to(o.m_Ncgis);
    o.m_NcgisIsSet = true;
  }
  if (j.find("gRanNodeIds") != j.end()) {
    j.at("gRanNodeIds").get_to(o.m_GRanNodeIds);
    o.m_GRanNodeIdsIsSet = true;
  }
  if (j.find("tais") != j.end()) {
    j.at("tais").get_to(o.m_Tais);
    o.m_TaisIsSet = true;
  }
}

std::vector<Ecgi>& NetworkAreaInfo_2::getEcgis() {
  return m_Ecgis;
}
void NetworkAreaInfo_2::setEcgis(std::vector<Ecgi> const& value) {
  m_Ecgis      = value;
  m_EcgisIsSet = true;
}
bool NetworkAreaInfo_2::ecgisIsSet() const {
  return m_EcgisIsSet;
}
void NetworkAreaInfo_2::unsetEcgis() {
  m_EcgisIsSet = false;
}
std::vector<Ncgi>& NetworkAreaInfo_2::getNcgis() {
  return m_Ncgis;
}
void NetworkAreaInfo_2::setNcgis(std::vector<Ncgi> const& value) {
  m_Ncgis      = value;
  m_NcgisIsSet = true;
}
bool NetworkAreaInfo_2::ncgisIsSet() const {
  return m_NcgisIsSet;
}
void NetworkAreaInfo_2::unsetNcgis() {
  m_NcgisIsSet = false;
}
std::vector<GlobalRanNodeId>& NetworkAreaInfo_2::getGRanNodeIds() {
  return m_GRanNodeIds;
}
void NetworkAreaInfo_2::setGRanNodeIds(
    std::vector<GlobalRanNodeId> const& value) {
  m_GRanNodeIds      = value;
  m_GRanNodeIdsIsSet = true;
}
bool NetworkAreaInfo_2::gRanNodeIdsIsSet() const {
  return m_GRanNodeIdsIsSet;
}
void NetworkAreaInfo_2::unsetGRanNodeIds() {
  m_GRanNodeIdsIsSet = false;
}
std::vector<Tai>& NetworkAreaInfo_2::getTais() {
  return m_Tais;
}
void NetworkAreaInfo_2::setTais(std::vector<Tai> const& value) {
  m_Tais      = value;
  m_TaisIsSet = true;
}
bool NetworkAreaInfo_2::taisIsSet() const {
  return m_TaisIsSet;
}
void NetworkAreaInfo_2::unsetTais() {
  m_TaisIsSet = false;
}

}  // namespace oai::udr::model
