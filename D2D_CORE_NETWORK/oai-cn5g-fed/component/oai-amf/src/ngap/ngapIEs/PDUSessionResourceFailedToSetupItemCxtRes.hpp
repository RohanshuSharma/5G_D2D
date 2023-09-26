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

#ifndef _PDU_SESSION_RESOURCE_FAILED_TO_SETUP_ITEM_CXT_RES_H_
#define _PDU_SESSION_RESOURCE_FAILED_TO_SETUP_ITEM_CXT_RES_H_

#include "PDUSessionID.hpp"

extern "C" {
#include "Ngap_PDUSessionResourceFailedToSetupItemCxtRes.h"
}

namespace ngap {

class PDUSessionResourceFailedToSetupItemCxtRes {
 public:
  PDUSessionResourceFailedToSetupItemCxtRes();
  virtual ~PDUSessionResourceFailedToSetupItemCxtRes();

  void set(
      const PDUSessionID& m_pDUSessionID,
      const OCTET_STRING_t& m_pDUSessionResourceSetupUnsuccessfulTransfer);
  void get(
      PDUSessionID& m_pDUSessionID,
      OCTET_STRING_t& m_pDUSessionResourceSetupUnsuccessfulTransfer);

  bool encode(Ngap_PDUSessionResourceFailedToSetupItemCxtRes_t*
                  pduSessionResourceFailedToSetupItemCxtRes);
  bool decode(Ngap_PDUSessionResourceFailedToSetupItemCxtRes_t*
                  pduSessionResourceFailedToSetupItemCxtRes);

 private:
  PDUSessionID pdu_session_id_;  // Mandatory
  OCTET_STRING_t
      pdu_session_resource_setup_unsuccessful_transfer_;  // Mandatory
};

}  // namespace ngap

#endif
