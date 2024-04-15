#ifndef _API2_HPP_
#define _API2_HPP_

namespace router
{
/**
* @api {post} /post Добавить ресурс
* @apiPrivate
* @apiName post_source
* @apiGroup Test
*
* @apiVersion 1.0.0
*
* @apiHeader {String} Authorization Формат: Bearer access_token (в соответствии с RFC 6750 пункт 2.1)
*
* @apiBody {String} key значение
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
* @apiSuccessExample {json} Пример ответа
* {
*    "key" : "value"
* }
*
*/
};

#endif