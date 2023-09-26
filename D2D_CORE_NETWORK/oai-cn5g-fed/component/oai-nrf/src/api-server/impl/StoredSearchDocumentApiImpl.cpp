/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "StoredSearchDocumentApiImpl.h"
#include "3gpp_29.500.h"

namespace oai {
namespace nrf {
namespace api {

using namespace oai::nrf::model;
using namespace oai::nrf::app;

StoredSearchDocumentApiImpl::StoredSearchDocumentApiImpl(
    std::shared_ptr<Pistache::Rest::Router> rtr, nrf_app* nrf_app_inst,
    std::string address)
    : StoredSearchDocumentApi(rtr),
      m_nrf_app(nrf_app_inst),
      m_address(address) {}

void StoredSearchDocumentApiImpl::retrieve_stored_search(
    const std::string& searchId, Pistache::Http::ResponseWriter& response) {
  Logger::nrf_sbi().info(
      "Got a request to retrieve a stored search with ID %s", searchId.c_str());

  nlohmann::json sr_json   = {};
  nlohmann::json json_data = {};
  json_data["nfInstances"] = nlohmann::json::array();

  std::string content_type = "application/json";

  std::shared_ptr<nrf_search_result> search_result = {};
  m_nrf_app->find_search_result(searchId, search_result);

  // convert the profile to Json
  if (search_result != nullptr) {
    search_result.get()->to_json(
        sr_json, search_result.get()->get_limit_nf_instances());
    json_data["nfInstances"] = sr_json["nfInstances"];
  }

  Logger::nrf_sbi().debug("Json data: %s", json_data.dump().c_str());

  // content type
  response.headers().add<Pistache::Http::Header::ContentType>(
      Pistache::Http::Mime::MediaType(content_type));
  // TODO: add headers:  Cache-Control, ETag

  response.send(
      Pistache::Http::Code(HTTP_STATUS_CODE_200_OK), json_data.dump().c_str());
}

}  // namespace api
}  // namespace nrf
}  // namespace oai
