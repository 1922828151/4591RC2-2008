/*
 * func-name: ?AddHotZone@CHotZonePic@@QAEHABUtagRECT@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAU2@_NK@Z
 * func-address: 0x100c68a0
 * callers: 0x1014a750
 * callees: 0x100a5d90, 0x100b5280, 0x100d2f00, 0x1017a280, 0x101a2534
 */

int __thiscall CHotZonePic::AddHotZone(int this, _DWORD *a2, int a3, _DWORD *a4, char a5, int a6)
{
  _DWORD *v7; // eax
  int v8; // esi
  _BYTE *v9; // eax
  int v10; // eax
  bool v11; // cf
  int v12; // eax
  int v13; // ebx
  int v14; // edi
  int v15; // edi
  int v16; // ebx
  int v17; // eax
  _DWORD *v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  int v24; // [esp+14h] [ebp-2Ch] BYREF
  _BYTE v25[28]; // [esp+18h] [ebp-28h] BYREF
  int v26; // [esp+3Ch] [ebp-4h]

  v7 = operator new(0x2Cu);
  if ( v7 )
  {
    v7[8] = 0;
    *((_BYTE *)v7 + 36) = 0;
    v7[10] = 0;
    v8 = (int)v7;
  }
  else
  {
    v8 = 0;
  }
  v24 = v8;
  v9 = operator new(0xC4u);
  if ( v9 )
  {
    v9[28] = 0;
    *(_DWORD *)v9 = -1;
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(v8 + 32) = v9;
  v10 = sub_1017A280(v25, a3);
  v11 = *(_DWORD *)(v10 + 24) < 8u;
  v26 = 0;
  if ( v11 )
    v12 = v10 + 4;
  else
    v12 = *(_DWORD *)(v10 + 4);
  v13 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v12);
  v26 = -1;
  std::wstring::~wstring(v25);
  v14 = *(_DWORD *)(v8 + 32);
  *(_DWORD *)v14 = v13;
  if ( a4 )
  {
    *(_DWORD *)(v14 + 12) = *a4;
    *(_DWORD *)(v14 + 16) = a4[1];
    *(_DWORD *)(v14 + 20) = a4[2];
    *(_DWORD *)(v14 + 24) = a4[3];
  }
  else
  {
    SetRectEmpty((LPRECT)(v14 + 12));
  }
  REBlendColor::Init((REBlendColor *)(v14 + 36), 0xFFFFFFFF, 0xC8808080, 0);
  *(_DWORD *)v8 = *a2;
  *(_DWORD *)(v8 + 4) = a2[1];
  *(_DWORD *)(v8 + 8) = a2[2];
  *(_DWORD *)(v8 + 12) = a2[3];
  *(_BYTE *)(v8 + 36) = 0;
  *(_BYTE *)(v8 + 37) = a5;
  *(_DWORD *)(v8 + 40) = a6;
  if ( a4 )
  {
    *(_DWORD *)(v8 + 16) = *a4;
    *(_DWORD *)(v8 + 20) = a4[1];
    *(_DWORD *)(v8 + 24) = a4[2];
    *(_DWORD *)(v8 + 28) = a4[3];
  }
  else
  {
    v15 = *(_DWORD *)(this + 112);
    if ( REGetGlobalDialogResourceManager() )
    {
      v16 = *(_DWORD *)(*(_DWORD *)(v15 + 740) + 4 * v13);
      v17 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v16);
      if ( v17 )
      {
        SetRect((LPRECT)(*(_DWORD *)(v8 + 32) + 12), 0, 0, *(_DWORD *)(v17 + 524), *(_DWORD *)(v17 + 528));
        v18 = *(_DWORD **)(v8 + 32);
        v19 = v18[3];
        v18 += 3;
        *(_DWORD *)(v8 + 16) = v19;
        *(_DWORD *)(v8 + 20) = v18[1];
        *(_DWORD *)(v8 + 24) = v18[2];
        *(_DWORD *)(v8 + 28) = v18[3];
      }
    }
  }
  sub_100D2F00(this + 544, (int)&v24);
  v20 = *(_DWORD *)(this + 548);
  if ( v20 )
    v21 = (*(_DWORD *)(this + 552) - v20) >> 2;
  else
    v21 = 0;
  return v21 - 1;
}
