#pragma once

#include "Hash.h"
#include "greg7mdp__parallel-hashmap/parallel_hashmap/phmap.h"

static const char* MapName = "phmap::parallel_node_hash_map";

template <class Key, class Val>
using Map = phmap::parallel_node_hash_map<Key, Val, Hash<Key>>;
