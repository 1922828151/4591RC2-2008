/*
 * func-name: ?_Insert_n@?$vector@VEditorVar@@V?$allocator@VEditorVar@@@std@@@std@@IAEXV?$_Vector_iterator@VEditorVar@@V?$allocator@VEditorVar@@@std@@@2@IABVEditorVar@@@Z
 * func-address: 0x1000f8d0
 * callers: 0x10011a10, 0x10011b30, 0x1002be00, 0x1002be20
 * callees: 0x10009550, 0x100095b0, 0x10009ec0, 0x1000a280, 0x1000a2a0, 0x1000a7e0, 0x1000c0c0, 0x1000c590, 0x1000cc00, 0x1000d720, 0x1000d740, 0x1000dfb0, 0x101a2500, 0x101a2522
 */

void __thiscall std::vector<EditorVar>::_Insert_n(
        int this,
        int a2,
        struct EditorVar *a3,
        unsigned int a4,
        struct EditorVar *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  EditorVar *v12; // eax
  struct EditorVar *v13; // ecx
  CREControl *v14; // eax
  EditorVar *v15; // eax
  struct EditorVar *v16; // ecx
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  struct EditorVar *v20; // ecx
  int v21; // ebx
  EditorVar *v22; // [esp-Ch] [ebp-90h]
  int v23; // [esp-8h] [ebp-8Ch]
  int v24; // [esp-8h] [ebp-8Ch]
  int v25; // [esp+0h] [ebp-84h] BYREF
  _BYTE v26[96]; // [esp+Ch] [ebp-78h] BYREF
  int v27; // [esp+6Ch] [ebp-18h]
  int v28; // [esp+70h] [ebp-14h]
  int *v29; // [esp+74h] [ebp-10h]
  int v30; // [esp+80h] [ebp-4h]
  int v31; // [esp+94h] [ebp+10h]
  struct EditorVar *v32; // [esp+98h] [ebp+14h]
  struct EditorVar *v33; // [esp+98h] [ebp+14h]

  v29 = &v25;
  v28 = this;
  EditorVar::EditorVar((EditorVar *)v26, a5);
  v6 = *(_DWORD *)(this + 4);
  v7 = 0;
  v30 = 0;
  if ( v6 )
    v7 = (*(_DWORD *)(this + 12) - v6) / 96;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(_DWORD *)(this + 8) - v6) / 96;
    else
      v8 = 0;
    if ( 44739242 - v8 < a4 )
      std::vector<EditorVar>::_Xlen();
    if ( v6 )
      v9 = (*(_DWORD *)(this + 8) - v6) / 96;
    else
      v9 = 0;
    if ( v7 >= a4 + v9 )
    {
      v20 = *(struct EditorVar **)(this + 8);
      v33 = v20;
      if ( (v20 - a3) / 96 >= a4 )
      {
        v21 = 96 * a4;
        v31 = (int)v20 - 96 * a4;
        *(_DWORD *)(this + 8) = sub_1000DFB0((struct EditorVar *)((char *)v20 - v21), v20, v20);
        sub_1000C590((int)a3, v31, (int)v33);
        sub_10009EC0((int)a3, (int)a3 + v21, (int)v26);
      }
      else
      {
        sub_1000DFB0(a3, v20, (struct EditorVar *)((char *)a3 + 96 * a4));
        v23 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 96;
        v22 = *(EditorVar **)(this + 8);
        LOBYTE(v30) = 3;
        std::vector<EditorVar>::_Ufill(v22, v23, (struct EditorVar *)v26);
        *(_DWORD *)(this + 8) += 96 * a4;
        v24 = *(_DWORD *)(this + 8) - 96 * a4;
        v30 = 0;
        sub_10009EC0((int)a3, v24, (int)v26);
      }
    }
    else
    {
      if ( 44739242 - (v7 >> 1) >= v7 )
        v10 = (v7 >> 1) + v7;
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(_DWORD *)(this + 8) - v6) / 96;
      else
        v11 = 0;
      if ( v10 < a4 + v11 )
        v10 = a4 + std::vector<EditorVar>::size((_DWORD *)this);
      v12 = (EditorVar *)sub_1000A7E0(v10);
      v13 = *(struct EditorVar **)(this + 4);
      LOBYTE(v27) = 0;
      v32 = v12;
      LOBYTE(v30) = 1;
      v14 = sub_1000C0C0(v13, a3, v12);
      v15 = (EditorVar *)std::vector<EditorVar>::_Ufill(v14, a4, (struct EditorVar *)v26);
      v16 = *(struct EditorVar **)(this + 8);
      LOBYTE(v27) = 0;
      sub_1000C0C0(a3, v16, v15);
      v17 = *(_DWORD *)(this + 4);
      v18 = 0;
      v30 = 0;
      if ( v17 )
        v18 = (*(_DWORD *)(this + 8) - v17) / 96;
      v19 = v18 + a4;
      if ( v17 )
      {
        sub_1000CC00(v17, *(_DWORD *)(this + 8));
        operator delete(*(void **)(this + 4));
      }
      *(_DWORD *)(this + 12) = (char *)v32 + 96 * v10;
      *(_DWORD *)(this + 8) = (char *)v32 + 96 * v19;
      *(_DWORD *)(this + 4) = v32;
    }
  }
  v30 = -1;
  EditorVar::~EditorVar((EditorVar *)v26);
}
