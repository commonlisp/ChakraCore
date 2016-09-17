//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft Corporation and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

#pragma once

namespace Wasm
{

class WasmElementSegment
{
public:
    WasmElementSegment(ArenaAllocator * alloc, uint32 index, WasmNode* init_expr_, uint32 num_elem_, uint32* elems);
    uint32 getIndex() const;
    WasmNode* getInitExpr() const;
    uint32 getNumElems() const;
    uint32* getElem() const;

private:
    ArenaAllocator * m_alloc;

    uint32 index;
    WasmNode* init_expr;
    uint32 num_elem;
    uint32* elems;
};

} // namespace Wasm
