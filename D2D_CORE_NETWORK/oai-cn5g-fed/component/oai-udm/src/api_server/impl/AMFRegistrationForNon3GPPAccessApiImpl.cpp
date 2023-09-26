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
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "AMFRegistrationForNon3GPPAccessApiImpl.h"

namespace oai {
namespace udm {
namespace api {

using namespace oai::udm::model;
using namespace oai::udm::app;

AMFRegistrationForNon3GPPAccessApiImpl::AMFRegistrationForNon3GPPAccessApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr, udm_app* udm_app_inst,
    std::string address)
    : AMFRegistrationForNon3GPPAccessApi(rtr) {}

void AMFRegistrationForNon3GPPAccessApiImpl::non3_gpp_registration(
    const std::string& ueId,
    const AmfNon3GppAccessRegistration& amfNon3GppAccessRegistration,
    Pistache::Http::ResponseWriter& response) {
  response.send(
      Pistache::Http::Code::Ok,
      "AMFRegistrationForNon3GPPAccessApiImpl::non3_gpp_registration API has "
      "not been implemented yet!\n");
}

}  // namespace api
}  // namespace udm
}  // namespace oai
