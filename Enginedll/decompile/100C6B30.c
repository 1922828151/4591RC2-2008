/*
 * func-name: ?InsertHoverPic@CHotZonePic@@QAEHHABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAUtagRECT@@_NPAU4@KKM@Z
 * func-address: 0x100c6b30
 * callers: 0x1014a750
 * callees: 0x100a5d90, 0x100b5280, 0x100d2f70, 0x1017a280, 0x101a2534
 */

int __thiscall CHotZonePic::InsertHoverPic(
        int this,
        int a2,
        int a3,
        int *a4,
        char a5,
        _DWORD *a6,
        int a7,
        float a8,
        float a9)
{
  _DWORD *v10; // eax
  int v11; // esi
  _BYTE *v12; // eax
  int v13; // eax
  bool v14; // cf
  int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // edi
  int v20; // ebp
  int v21; // edi
  int v22; // eax
  _DWORD *v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // eax
  int v29; // [esp+14h] [ebp-2Ch] BYREF
  _BYTE v30[28]; // [esp+18h] [ebp-28h] BYREF
  int v31; // [esp+3Ch] [ebp-4h]
  float v32; // [esp+44h] [ebp+4h]

  v10 = operator new(0x48u);
  if ( v10 )
  {
    v10[1] = 0;
    v11 = (int)v10;
  }
  else
  {
    v11 = 0;
  }
  v29 = v11;
  *(_DWORD *)v11 = a2;
  v12 = operator new(0xC4u);
  if ( v12 )
  {
    v12[28] = 0;
    *(_DWORD *)v12 = -1;
  }
  else
  {
    v12 = 0;
  }
  *(_DWORD *)(v11 + 4) = v12;
  v13 = sub_1017A280(v30, a3);
  v14 = *(_DWORD *)(v13 + 24) < 8u;
  v31 = 0;
  if ( v14 )
    v15 = v13 + 4;
  else
    v15 = *(_DWORD *)(v13 + 4);
  v16 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v15);
  v17 = *(_DWORD *)(v11 + 4);
  *(_DWORD *)v17 = v16;
  if ( a6 )
  {
    *(_DWORD *)(v17 + 12) = *a6;
    *(_DWORD *)(v17 + 16) = a6[1];
    *(_DWORD *)(v17 + 20) = a6[2];
    *(_DWORD *)(v17 + 24) = a6[3];
  }
  else
  {
    SetRectEmpty((LPRECT)(v17 + 12));
  }
  REBlendColor::Init((REBlendColor *)(v17 + 36), 0xFFFFFFFF, 0xC8808080, 0);
  v31 = -1;
  std::wstring::~wstring(v30);
  v32 = fabs(a9);
  if ( v32 > 0.0000099999997 )
  {
    v18 = *(_DWORD *)(v11 + 4);
    *(float *)(v18 + 32) = a9;
    *(_BYTE *)(v18 + 28) = 1;
  }
  *(_DWORD *)(v11 + 40) = a7;
  *(float *)(v11 + 48) = a8;
  *(_BYTE *)(v11 + 44) = 1;
  *(_BYTE *)(v11 + 45) = a5;
  *(_BYTE *)(v11 + 52) = 0;
  SetRect((LPRECT)(v11 + 8), *a4, a4[1], a4[2], a4[3]);
  if ( a6 )
  {
    *(_DWORD *)(v11 + 24) = *a6;
    *(_DWORD *)(v11 + 28) = a6[1];
    *(_DWORD *)(v11 + 32) = a6[2];
    *(_DWORD *)(v11 + 36) = a6[3];
  }
  else
  {
    v19 = **(_DWORD **)(v11 + 4);
    v20 = *(_DWORD *)(this + 112);
    if ( REGetGlobalDialogResourceManager() )
    {
      v21 = *(_DWORD *)(*(_DWORD *)(v20 + 740) + 4 * v19);
      v22 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v21);
      if ( v22 )
      {
        SetRect((LPRECT)(*(_DWORD *)(v11 + 4) + 12), 0, 0, *(_DWORD *)(v22 + 524), *(_DWORD *)(v22 + 528));
        v23 = *(_DWORD **)(v11 + 4);
        v24 = v23[3];
        v23 += 3;
        *(_DWORD *)(v11 + 24) = v24;
        *(_DWORD *)(v11 + 28) = v23[1];
        *(_DWORD *)(v11 + 32) = v23[2];
        *(_DWORD *)(v11 + 36) = v23[3];
      }
    }
  }
  sub_100D2F70(this + 560, (int)&v29);
  v25 = *(_DWORD *)(this + 564);
  if ( v25 )
    v26 = (*(_DWORD *)(this + 568) - v25) >> 2;
  else
    v26 = 0;
  return v26 - 1;
}
