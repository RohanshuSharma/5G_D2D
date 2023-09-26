/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#ifndef _Ngap_AssistanceDataForRecommendedCells_H_
#define _Ngap_AssistanceDataForRecommendedCells_H_

#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_RecommendedCellsForPaging.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_AssistanceDataForRecommendedCells */
typedef struct Ngap_AssistanceDataForRecommendedCells {
  Ngap_RecommendedCellsForPaging_t recommendedCellsForPaging;
  struct Ngap_ProtocolExtensionContainer* iE_Extensions; /* OPTIONAL */
  /*
   * This type is extensible,
   * possible extensions are below.
   */

  /* Context for parsing across buffer boundaries */
  asn_struct_ctx_t _asn_ctx;
} Ngap_AssistanceDataForRecommendedCells_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_AssistanceDataForRecommendedCells;
extern asn_SEQUENCE_specifics_t
    asn_SPC_Ngap_AssistanceDataForRecommendedCells_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_AssistanceDataForRecommendedCells_1[2];

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_AssistanceDataForRecommendedCells_H_ */
#include <asn_internal.h>
