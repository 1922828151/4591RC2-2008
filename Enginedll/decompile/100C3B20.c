/*
 * func-name: ?SetBackGround@CHotZonePic@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100c3b20
 * callers: none
 * callees: 0x100a5d90, 0x100b5280, 0x1017a280, 0x101a2500, 0x101a2534
 */

void __thiscall CHotZonePic::SetBackGround(int this, int a2, int *a3)
{
  int v4; // ebx
  _BYTE *v5; // eax
  int v6; // eax
  bool v7; // cf
  int v8; // eax
  int v9; // ebp
  int *v10; // eax
  int v11; // edi
  int v12; // edi
  int v13; // edi
  _BYTE v14[28]; // [esp+Ch] [ebp-28h] BYREF
  int v15; // [esp+30h] [ebp-4h]

  v4 = 0;
  if ( *(_DWORD *)(this + 536) )
  {
    operator delete(*(void **)(this + 536));
    *(_DWORD *)(this + 536) = 0;
  }
  v5 = operator new(0xC4u);
  if ( v5 )
  {
    v5[28] = 0;
    *(_DWORD *)v5 = -1;
  }
  else
  {
    v5 = 0;
  }
  *(_DWORD *)(this + 536) = v5;
  v6 = sub_1017A280(v14, a2);
  v7 = *(_DWORD *)(v6 + 24) < 8u;
  v15 = 0;
  if ( v7 )
    v8 = v6 + 4;
  else
    v8 = *(_DWORD *)(v6 + 4);
  v9 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v8);
  v15 = -1;
  std::wstring::~wstring(v14);
  if ( a3 )
  {
    v10 = *(int **)(this + 536);
    *v10 = v9;
    v10[3] = *a3;
    v10[4] = a3[1];
    v10[5] = a3[2];
    v10[6] = a3[3];
    REBlendColor::Init((REBlendColor *)(v10 + 9), 0xFFFFFFFF, 0xC8808080, 0);
  }
  else
  {
    v11 = *(_DWORD *)(this + 112);
    if ( REGetGlobalDialogResourceManager() )
    {
      v12 = *(_DWORD *)(*(_DWORD *)(v11 + 740) + 4 * v9);
      v4 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v12);
    }
    v13 = *(_DWORD *)(this + 536);
    *(_DWORD *)v13 = v9;
    SetRectEmpty((LPRECT)(v13 + 12));
    REBlendColor::Init((REBlendColor *)(v13 + 36), 0xFFFFFFFF, 0xC8808080, 0);
    SetRect((LPRECT)(*(_DWORD *)(this + 536) + 12), 0, 0, *(_DWORD *)(v4 + 524), *(_DWORD *)(v4 + 528));
  }
}
