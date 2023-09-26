/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "asn.1/Information Element Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#ifndef _Ngap_CauseNas_H_
#define _Ngap_CauseNas_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_CauseNas {
  Ngap_CauseNas_normal_release         = 0,
  Ngap_CauseNas_authentication_failure = 1,
  Ngap_CauseNas_deregister             = 2,
  Ngap_CauseNas_unspecified            = 3
  /*
   * Enumeration is extensible
   */
} e_Ngap_CauseNas;

/* Ngap_CauseNas */
typedef long Ngap_CauseNas_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_CauseNas_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_CauseNas;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_CauseNas_specs_1;
asn_struct_free_f Ngap_CauseNas_free;
asn_struct_print_f Ngap_CauseNas_print;
asn_constr_check_f Ngap_CauseNas_constraint;
ber_type_decoder_f Ngap_CauseNas_decode_ber;
der_type_encoder_f Ngap_CauseNas_encode_der;
xer_type_decoder_f Ngap_CauseNas_decode_xer;
xer_type_encoder_f Ngap_CauseNas_encode_xer;
oer_type_decoder_f Ngap_CauseNas_decode_oer;
oer_type_encoder_f Ngap_CauseNas_encode_oer;
per_type_decoder_f Ngap_CauseNas_decode_uper;
per_type_encoder_f Ngap_CauseNas_encode_uper;
per_type_decoder_f Ngap_CauseNas_decode_aper;
per_type_encoder_f Ngap_CauseNas_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_CauseNas_H_ */
#include <asn_internal.h>
