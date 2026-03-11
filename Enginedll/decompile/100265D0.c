/*
 * func-name: ?_Insert_n@?$vector@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@std@@IAEXV?$_Vector_iterator@UVFormat@VertexManager@@V?$allocator@UVFormat@VertexManager@@@std@@@2@IABUVFormat@VertexManager@@@Z
 * func-address: 0x100265d0
 * callers: 0x1002c1f0, 0x1002c310, 0x1002c3c0, 0x1002c3e0
 * callees: 0x1001a200, 0x1001b410, 0x1001e710, 0x1001eba0, 0x100229d0, 0x10022a50, 0x10023d90, 0x1006c470, 0x101190c0, 0x101a2500, 0x101a2522
 */

int __thiscall std::vector<VertexManager::VFormat>::_Insert_n(int this, int a2, char *a3, unsigned int a4, int *a5)
{
  int v5; // eax
  int v7; // ecx
  int v8; // ecx
  unsigned int v9; // edi
  int v10; // eax
  int v11; // eax
  unsigned int v12; // edi
  int v13; // eax
  CREControl *v14; // eax
  _DWORD *v15; // ecx
  CREControl *v16; // eax
  char *v17; // eax
  _DWORD *v18; // ecx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  _DWORD *v22; // ecx
  int v23; // ebx
  CREControl *v25; // [esp-Ch] [ebp-58h]
  int v26; // [esp-8h] [ebp-54h]
  _DWORD *v27; // [esp-8h] [ebp-54h]
  int v28; // [esp+0h] [ebp-4Ch] BYREF
  _DWORD v29[2]; // [esp+Ch] [ebp-40h] BYREF
  _BYTE v30[28]; // [esp+14h] [ebp-38h] BYREF
  int v31; // [esp+30h] [ebp-1Ch]
  int v32; // [esp+34h] [ebp-18h]
  int v33; // [esp+38h] [ebp-14h]
  int *v34; // [esp+3Ch] [ebp-10h]
  int v35; // [esp+48h] [ebp-4h]
  int v36; // [esp+5Ch] [ebp+10h]
  CREControl *v37; // [esp+60h] [ebp+14h]
  _DWORD *v38; // [esp+60h] [ebp+14h]

  v5 = *a5;
  v7 = a5[1];
  v34 = &v28;
  v29[1] = v7;
  v33 = this;
  v29[0] = v5;
  std::string::string(v30, a5 + 2);
  v31 = a5[9];
  v8 = *(_DWORD *)(this + 4);
  v9 = 0;
  v35 = 0;
  if ( v8 )
    v9 = (*(_DWORD *)(this + 12) - v8) / 40;
  if ( a4 )
  {
    if ( v8 )
      v10 = (*(_DWORD *)(this + 8) - v8) / 40;
    else
      v10 = 0;
    if ( 107374182 - v10 < a4 )
      std::vector<VertexManager::VFormat>::_Xlen();
    if ( v8 )
      v11 = (*(_DWORD *)(this + 8) - v8) / 40;
    else
      v11 = 0;
    if ( v9 >= a4 + v11 )
    {
      v22 = *(_DWORD **)(this + 8);
      v38 = v22;
      if ( ((char *)v22 - a3) / 40 >= a4 )
      {
        v23 = 40 * a4;
        v36 = (int)&v22[-10 * a4];
        *(_DWORD *)(this + 8) = sub_10023D90(&v22[v23 / 0xFFFFFFFC], v22, (CREControl *)v22);
        sub_1001EBA0((int)a3, v36, v38);
        sub_1001B410(a3, &a3[v23], v29);
      }
      else
      {
        sub_10023D90(a3, v22, (CREControl *)&a3[40 * a4]);
        v26 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 40;
        v25 = *(CREControl **)(this + 8);
        LOBYTE(v35) = 3;
        std::vector<VertexManager::VFormat>::_Ufill(v25, v26, v29);
        *(_DWORD *)(this + 8) += 40 * a4;
        v27 = (_DWORD *)(*(_DWORD *)(this + 8) - 40 * a4);
        v35 = 0;
        sub_1001B410(a3, v27, v29);
      }
    }
    else
    {
      if ( 107374182 - (v9 >> 1) >= v9 )
        v12 = (v9 >> 1) + v9;
      else
        v12 = 0;
      if ( v8 )
        v13 = (*(_DWORD *)(this + 8) - v8) / 40;
      else
        v13 = 0;
      if ( v12 < a4 + v13 )
        v12 = a4 + std::vector<BBox>::size(this);
      v14 = (CREControl *)sub_1006C470(v12);
      v15 = *(_DWORD **)(this + 4);
      LOBYTE(v32) = 0;
      v37 = v14;
      LOBYTE(v35) = 1;
      v16 = sub_1001E710(v15, a3, v14);
      v17 = std::vector<VertexManager::VFormat>::_Ufill(v16, a4, v29);
      v18 = *(_DWORD **)(this + 8);
      LOBYTE(v32) = 0;
      sub_1001E710(a3, v18, (CREControl *)v17);
      v19 = *(_DWORD *)(this + 4);
      v20 = 0;
      v35 = 0;
      if ( v19 )
        v20 = (*(_DWORD *)(this + 8) - v19) / 40;
      v21 = v20 + a4;
      if ( v19 )
      {
        std::vector<VertexManager::VFormat>::_Destroy(v19, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v37 + 40 * v12;
      *(_DWORD *)(this + 8) = (char *)v37 + 40 * v21;
      *(_DWORD *)(this + 4) = v37;
    }
  }
  v35 = -1;
  return std::string::~string(v30);
}
