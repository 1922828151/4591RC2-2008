/*
 * func-name: ?setOriginPic@CPicCheckBox@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAUtagRECT@@@Z
 * func-address: 0x100b1d20
 * callers: 0x1014a750
 * callees: 0x1006c5d0, 0x100a5d90, 0x1017a280, 0x101a2534
 */

_BYTE *__thiscall CPicCheckBox::setOriginPic(int this, int a2, _DWORD *a3)
{
  _BYTE *result; // eax
  _BYTE *v5; // esi
  int v6; // eax
  bool v7; // cf
  int v8; // eax
  int v9; // edi
  const void **v10; // edi
  _BYTE v11[28]; // [esp+8h] [ebp-28h] BYREF
  int v12; // [esp+2Ch] [ebp-4h]

  result = operator new(0xC4u);
  v5 = result;
  if ( result )
  {
    result[28] = 0;
    *(_DWORD *)result = -1;
    v6 = sub_1017A280(v11, a2);
    v7 = *(_DWORD *)(v6 + 24) < 8u;
    v12 = 0;
    if ( v7 )
      v8 = v6 + 4;
    else
      v8 = *(_DWORD *)(v6 + 4);
    v9 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 112) + 20))(*(_DWORD *)(this + 112), v8);
    v12 = -1;
    std::wstring::~wstring(v11);
    *(_DWORD *)v5 = v9;
    if ( a3 )
    {
      *((_DWORD *)v5 + 3) = *a3;
      *((_DWORD *)v5 + 4) = a3[1];
      *((_DWORD *)v5 + 5) = a3[2];
      *((_DWORD *)v5 + 6) = a3[3];
    }
    else
    {
      SetRectEmpty((LPRECT)(v5 + 12));
    }
    REBlendColor::Init((REBlendColor *)(v5 + 36), 0xFFFFFFFF, 0xC8808080, 0);
    result = *(_BYTE **)(this + 856);
    v10 = (const void **)(this + 852);
    if ( (int)result >= 0 )
    {
      result = (_BYTE *)sub_1006C5D0(this + 852, (int)(result + 1));
      if ( (int)result >= 0 )
      {
        result = memmove((char *)*v10 + 4, *v10, 4 * *(_DWORD *)(this + 856));
        *(_DWORD *)*v10 = v5;
        ++*(_DWORD *)(this + 856);
      }
    }
  }
  return result;
}
