
extern zend_class_entry *phalcon_assets_collection_ce;

ZEPHIR_INIT_CLASS(Phalcon_Assets_Collection);

PHP_METHOD(Phalcon_Assets_Collection, getPrefix);
PHP_METHOD(Phalcon_Assets_Collection, getLocal);
PHP_METHOD(Phalcon_Assets_Collection, getAssets);
PHP_METHOD(Phalcon_Assets_Collection, getCodes);
PHP_METHOD(Phalcon_Assets_Collection, getPosition);
PHP_METHOD(Phalcon_Assets_Collection, getFilters);
PHP_METHOD(Phalcon_Assets_Collection, getAttributes);
PHP_METHOD(Phalcon_Assets_Collection, getJoin);
PHP_METHOD(Phalcon_Assets_Collection, getTargetUri);
PHP_METHOD(Phalcon_Assets_Collection, getTargetPath);
PHP_METHOD(Phalcon_Assets_Collection, getTargetLocal);
PHP_METHOD(Phalcon_Assets_Collection, getSourcePath);
PHP_METHOD(Phalcon_Assets_Collection, __construct);
PHP_METHOD(Phalcon_Assets_Collection, add);
PHP_METHOD(Phalcon_Assets_Collection, addInline);
PHP_METHOD(Phalcon_Assets_Collection, has);
PHP_METHOD(Phalcon_Assets_Collection, addCss);
PHP_METHOD(Phalcon_Assets_Collection, addInlineCss);
PHP_METHOD(Phalcon_Assets_Collection, addJs);
PHP_METHOD(Phalcon_Assets_Collection, addInlineJs);
PHP_METHOD(Phalcon_Assets_Collection, count);
PHP_METHOD(Phalcon_Assets_Collection, rewind);
PHP_METHOD(Phalcon_Assets_Collection, current);
PHP_METHOD(Phalcon_Assets_Collection, key);
PHP_METHOD(Phalcon_Assets_Collection, next);
PHP_METHOD(Phalcon_Assets_Collection, valid);
PHP_METHOD(Phalcon_Assets_Collection, setTargetPath);
PHP_METHOD(Phalcon_Assets_Collection, setSourcePath);
PHP_METHOD(Phalcon_Assets_Collection, setTargetUri);
PHP_METHOD(Phalcon_Assets_Collection, setPrefix);
PHP_METHOD(Phalcon_Assets_Collection, setLocal);
PHP_METHOD(Phalcon_Assets_Collection, setAttributes);
PHP_METHOD(Phalcon_Assets_Collection, setFilters);
PHP_METHOD(Phalcon_Assets_Collection, setTargetLocal);
PHP_METHOD(Phalcon_Assets_Collection, join);
PHP_METHOD(Phalcon_Assets_Collection, getRealTargetPath);
PHP_METHOD(Phalcon_Assets_Collection, addFilter);
PHP_METHOD(Phalcon_Assets_Collection, addAsset);
zend_object *zephir_init_properties_Phalcon_Assets_Collection(zend_class_entry *class_type TSRMLS_DC);

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getprefix, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getprefix, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getlocal, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getlocal, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getassets, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getassets, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getcodes, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getcodes, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getfilters, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getfilters, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getattributes, 0, 0, IS_ARRAY, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getattributes, 0, 0, IS_ARRAY, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getjoin, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getjoin, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_gettargeturi, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_gettargeturi, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_gettargetpath, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_gettargetpath, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_gettargetlocal, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_gettargetlocal, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getsourcepath, 0, 0, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getsourcepath, 0, 0, IS_STRING, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_add, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_add, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
	ZEND_ARG_OBJ_INFO(0, asset, Phalcon\\Assets\\AssetInterface, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_addinline, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addinline, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
	ZEND_ARG_OBJ_INFO(0, code, Phalcon\\Assets\\Inline, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_has, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_has, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, asset, Phalcon\\Assets\\AssetInterface, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_addcss, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addcss, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, path)
#endif
	ZEND_ARG_INFO(0, local)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, filter, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, filter)
#endif
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_addinlinecss, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addinlinecss, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, content, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, content)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, filter, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, filter)
#endif
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_addjs, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addjs, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, path, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, path)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, local, _IS_BOOL, 1)
#else
	ZEND_ARG_INFO(0, local)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, filter, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, filter)
#endif
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_addinlinejs, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addinlinejs, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, content, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, content)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, filter, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, filter)
#endif
	ZEND_ARG_INFO(0, attributes)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_count, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_count, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_current, 0, 0, Phalcon\\Assets\\Asset, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_current, 0, 0, IS_OBJECT, "Phalcon\\Assets\\Asset", 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_key, 0, 0, IS_LONG, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_key, 0, 0, IS_LONG, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_valid, 0, 0, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_valid, 0, 0, _IS_BOOL, NULL, 0)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_settargetpath, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_settargetpath, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, targetPath, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, targetPath)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_setsourcepath, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_setsourcepath, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, sourcePath, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, sourcePath)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_settargeturi, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_settargeturi, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, targetUri, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, targetUri)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_setprefix, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_setprefix, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, prefix, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, prefix)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_setlocal, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_setlocal, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, local, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, local)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_setattributes, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_setattributes, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, attributes, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_setfilters, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_setfilters, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
	ZEND_ARG_ARRAY_INFO(0, filters, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_settargetlocal, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_settargetlocal, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, targetLocal, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, targetLocal)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_join, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_join, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, join, _IS_BOOL, 0)
#else
	ZEND_ARG_INFO(0, join)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getrealtargetpath, 0, 1, IS_STRING, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_getrealtargetpath, 0, 1, IS_STRING, NULL, 0)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, basePath, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, basePath)
#endif
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_phalcon_assets_collection_addfilter, 0, 1, Phalcon\\Assets\\Collection, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addfilter, 0, 1, IS_OBJECT, "Phalcon\\Assets\\Collection", 0)
#endif
	ZEND_ARG_OBJ_INFO(0, filter, Phalcon\\Assets\\FilterInterface, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 70200
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addasset, 0, 1, _IS_BOOL, 0)
#else
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_phalcon_assets_collection_addasset, 0, 1, _IS_BOOL, NULL, 0)
#endif
	ZEND_ARG_OBJ_INFO(0, asset, Phalcon\\Assets\\AssetInterface, 0)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(phalcon_assets_collection_method_entry) {
	PHP_ME(Phalcon_Assets_Collection, getPrefix, arginfo_phalcon_assets_collection_getprefix, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getLocal, arginfo_phalcon_assets_collection_getlocal, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getAssets, arginfo_phalcon_assets_collection_getassets, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getCodes, arginfo_phalcon_assets_collection_getcodes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getPosition, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getFilters, arginfo_phalcon_assets_collection_getfilters, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getAttributes, arginfo_phalcon_assets_collection_getattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getJoin, arginfo_phalcon_assets_collection_getjoin, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getTargetUri, arginfo_phalcon_assets_collection_gettargeturi, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getTargetPath, arginfo_phalcon_assets_collection_gettargetpath, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getTargetLocal, arginfo_phalcon_assets_collection_gettargetlocal, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getSourcePath, arginfo_phalcon_assets_collection_getsourcepath, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, __construct, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_CTOR)
	PHP_ME(Phalcon_Assets_Collection, add, arginfo_phalcon_assets_collection_add, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, addInline, arginfo_phalcon_assets_collection_addinline, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, has, arginfo_phalcon_assets_collection_has, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, addCss, arginfo_phalcon_assets_collection_addcss, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, addInlineCss, arginfo_phalcon_assets_collection_addinlinecss, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, addJs, arginfo_phalcon_assets_collection_addjs, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, addInlineJs, arginfo_phalcon_assets_collection_addinlinejs, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, count, arginfo_phalcon_assets_collection_count, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, rewind, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, current, arginfo_phalcon_assets_collection_current, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, key, arginfo_phalcon_assets_collection_key, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, next, NULL, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, valid, arginfo_phalcon_assets_collection_valid, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setTargetPath, arginfo_phalcon_assets_collection_settargetpath, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setSourcePath, arginfo_phalcon_assets_collection_setsourcepath, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setTargetUri, arginfo_phalcon_assets_collection_settargeturi, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setPrefix, arginfo_phalcon_assets_collection_setprefix, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setLocal, arginfo_phalcon_assets_collection_setlocal, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setAttributes, arginfo_phalcon_assets_collection_setattributes, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setFilters, arginfo_phalcon_assets_collection_setfilters, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, setTargetLocal, arginfo_phalcon_assets_collection_settargetlocal, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, join, arginfo_phalcon_assets_collection_join, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, getRealTargetPath, arginfo_phalcon_assets_collection_getrealtargetpath, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, addFilter, arginfo_phalcon_assets_collection_addfilter, ZEND_ACC_PUBLIC)
	PHP_ME(Phalcon_Assets_Collection, addAsset, arginfo_phalcon_assets_collection_addasset, ZEND_ACC_PROTECTED|ZEND_ACC_FINAL)
	PHP_FE_END
};
