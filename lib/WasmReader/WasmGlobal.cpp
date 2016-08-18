//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft Corporation and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

#include "WasmReaderPch.h"

#ifdef ENABLE_WASM

namespace Wasm
{

WasmGlobal::WasmGlobal(ArenaAllocator * alloc, uint32 _type, bool _mutability, WasmNode* _init) : 
    type(_type), 
    mutability(_mutability), 
    init(_init)
{
}

uint32 
WasmGlobal::getType() const
{
    return type;
}

bool
WasmGlobal::getMutability() const
{
    return mutability;
}

WasmNode*
WasmGlobal::getInit() const
{
    return init;
}

} // namespace Wasm
#endif // ENABLE_WASM