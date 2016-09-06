/* register_types.cpp */

#include "register_types.h"
#include "object_type_db.h"
#include "byteswap.h"

void register_byteswapper_types() {

        ObjectTypeDB::register_type<Byteswap>();
}

void unregister_byteswapper_types() {
   //nothing to do here
}
