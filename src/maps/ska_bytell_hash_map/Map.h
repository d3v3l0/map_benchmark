#pragma once

#include "Hash.h"
#include "ska/bytell_hash_map.hpp"

static const char* MapName = "ska::bytell_hash_map";

template <class Key, class Val>
using Map = ska::bytell_hash_map<Key, Val, Hash<Key>>;
