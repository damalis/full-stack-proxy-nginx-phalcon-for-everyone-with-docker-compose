
extern zend_class_entry *phalcon_support_helper_json_encode_ce;

ZEPHIR_INIT_CLASS(Phalcon_Support_Helper_Json_Encode);

PHP_METHOD(Phalcon_Support_Helper_Json_Encode, __invoke);

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_support_helper_json_encode___invoke, 0, 1, IS_STRING, 0)
	ZEND_ARG_INFO(0, data)
	ZEND_ARG_TYPE_INFO(0, options, IS_LONG, 0)
	ZEND_ARG_TYPE_INFO(0, depth, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_support_helper_json_encode_method_entry) {
	PHP_ME(Phalcon_Support_Helper_Json_Encode, __invoke, arginfo_phalcon_support_helper_json_encode___invoke, ZEND_ACC_PUBLIC)
	PHP_FE_END
};
