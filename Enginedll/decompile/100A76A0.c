/*
 * func-name: ?setMouseOverPic@CREListCtrl@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100a76a0
 * callers: none
 * callees: 0x100a5d90, 0x1017a280, 0x101a2500, 0x101a2534
 */

void __thiscall CREListCtrl::setMouseOverPic(int this, int a2)
{
  _BYTE *v3; // eax
  int v4; // eax
  bool v5; // cf
  int v6; // eax
  int v7; // edi
  int v8; // esi
  _BYTE v9[28]; // [esp+4h] [ebp-28h] BYREF
  int v10; // [esp+28h] [ebp-4h]

  if ( *(_DWORD *)(this + 704) )
  {
    operator delete(*(void **)(this + 704));
    *(_DWORD *)(this + 704) = 0;
  }
  v3 = operator new(0xC4u);
  if ( v3 )
  {
    v3[28] = 0;
    *(_DWORD *)v3 = -1;
  }
  else
  {
    v3 = 0;
  }
  *(_DWORD *)(this + 704) = v3;
  if ( v3 )
  {
    v4 = sub_1017A280(v9, a2);
    v5 = *(_DWORD *)(v4 + 24) < 8u;
    v10 = 0;
    if ( v5 )
      v6 = v4 + 4;
    else
      v6 = *(_DWORD *)(v4 + 4);
    v7 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v6);
    v10 = -1;
    std::wstring::~wstring(v9);
    v8 = *(_DWORD *)(this + 704);
    *(_DWORD *)v8 = v7;
    SetRectEmpty((LPRECT)(v8 + 12));
    REBlendColor::Init((REBlendColor *)(v8 + 36), 0xFFFFFFFF, 0xC8808080, 0);
  }
}
