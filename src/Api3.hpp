#ifndef _API3_HPP_
#define _API3_HPP_

namespace router
{
/**
* @api {delete} /delete/:key Удалить ресурс
* @apiPrivate
* @apiName delete_source
* @apiGroup Test
*
* @apiVersion 1.0.0
*
* @apiHeader {String} Authorization Формат: Bearer access_token (в соответствии с RFC 6750 пункт 2.1)
*
* @apiParam {String} key значение ресурса
*
* @apiErrorExample {json} Response HTTP
* 200 - OK
* 400 - BAD REQUEST
* 401 - UNAUTHORIZED
* 403 - FORBIDDEN
* 404 - NOT FOUND
* 500 - INTERNAL SERVER ERROR
* 503 - SERVICE UNAVAILABLE
*
*/
};

#endif