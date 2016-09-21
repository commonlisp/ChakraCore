//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft Corporation and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

#include "WasmReaderPch.h"

#ifdef ENABLE_WASM

namespace Wasm
{

    WasmElementSegment::WasmElementSegment(ArenaAllocator * alloc, uint32 index_, WasmNode* init_expr_, uint32 num_elem_, uint32* elems_)
        : m_alloc(alloc), index(index_), init_expr(init_expr_), num_elem(num_elem_), elems(elems_)
    {}

    uint32
    WasmElementSegment::getIndex() const
    {
        return index;
    }

    WasmNode*
    WasmElementSegment::getInitExpr() const
    {
        return init_expr;
    }

    uint32
    WasmElementSegment::getNumElems() const
    {
        return num_elem;
    }
} // namespace Wasm

#endif // ENABLE_WASM