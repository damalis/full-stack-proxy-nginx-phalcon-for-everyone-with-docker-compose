
#ifdef HAVE_CONFIG_H
#include "../../../ext_config.h"
#endif

#include <php.h>
#include "../../../php_ext.h"
#include "../../../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


/**
 * This file is part of the Phalcon Framework.
 *
 * (c) Phalcon Team <team@phalcon.io>
 *
 * For the full copyright and license information, please view the LICENSE.txt
 * file that was distributed with this source code.
 */
/**
 * Serializer using the built-in Memcached 'php' serializer
 */
ZEPHIR_INIT_CLASS(Phalcon_Storage_Serializer_MemcachedPhp)
{
	ZEPHIR_REGISTER_CLASS_EX(Phalcon\\Storage\\Serializer, MemcachedPhp, phalcon, storage_serializer_memcachedphp, phalcon_storage_serializer_none_ce, NULL, 0);

	return SUCCESS;
}

