#ifndef _API1_HPP_
#define _API1_HPP_

namespace router
{

/**
* @api {get} /get Получить ресурс
* @apiPrivate
* @apiName get_source
* @apiGroup Test
*
* @apiVersion 1.0.0
*
* @apiHeader {String} Authorization Формат: Bearer access_token (в соответствии с RFC 6750 пункт 2.1)
*
* @apiParam {String} [offset]       Смещение по списку для бесконечного scroll
* @apiParam {String} [limit]        Предельное количество элементов для отображения
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