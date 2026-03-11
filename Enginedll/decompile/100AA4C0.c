/*
 * func-name: ?HandleKeyboard@CREComboBox@@UAE_NIIJ@Z
 * func-address: 0x100aa4c0
 * callers: none
 * callees: 0x100a3100
 */

bool __thiscall CREComboBox::HandleKeyboard(CREComboBox *this, unsigned int a2, unsigned int a3, int a4)
{
  int v5; // eax
  int v6; // eax
  void (__stdcall *v7)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx
  bool v8; // zf
  int v9; // eax
  void (__stdcall *v10)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx
  bool result; // al
  int v12; // eax
  int v13; // eax
  int v14; // eax
  void (__stdcall *v15)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD); // ecx

  if ( !*((_BYTE *)this + 156) || !*((_BYTE *)this + 90) || *((_BYTE *)this + 89) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(char *, unsigned int, unsigned int, int))(*((_DWORD *)this + 207) + 88))(
         (char *)this + 828,
         a2,
         a3,
         a4) )
  {
    return 1;
  }
  if ( a2 != 256 )
    return 0;
  switch ( a3 )
  {
    case 0xDu:
      if ( !*((_BYTE *)this + 1448) )
        return 0;
      v5 = *((_DWORD *)this + 205);
      if ( *((_DWORD *)this + 204) != v5 )
      {
        *((_DWORD *)this + 204) = v5;
        v6 = *((_DWORD *)this + 28);
        v7 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v6 + 736);
        if ( v7 )
          v7(v6, 513, *((_DWORD *)this + 34), this, 0, 0);
      }
      *((_BYTE *)this + 1448) = 0;
      goto LABEL_16;
    case 0x25u:
    case 0x26u:
      v12 = *((_DWORD *)this + 205);
      if ( v12 <= 0 )
        return 1;
      v13 = v12 - 1;
      goto LABEL_21;
    case 0x27u:
    case 0x28u:
      v13 = *((_DWORD *)this + 205) + 1;
      if ( v13 >= *((_DWORD *)this + 381) )
        return 1;
LABEL_21:
      v8 = *((_BYTE *)this + 1448) == 0;
      *((_DWORD *)this + 205) = v13;
      *((_DWORD *)this + 204) = v13;
      if ( v8 )
      {
        v14 = *((_DWORD *)this + 28);
        v15 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v14 + 736);
        if ( v15 )
          v15(v14, 513, *((_DWORD *)this + 34), this, 0, 0);
      }
      return 1;
    case 0x73u:
      if ( (a4 & 0x40000000) != 0 )
        return 1;
      v8 = *((_BYTE *)this + 1448) != 0;
      *((_BYTE *)this + 1448) = *((_BYTE *)this + 1448) == 0;
      if ( !v8 )
        return 1;
      v9 = *((_DWORD *)this + 28);
      v10 = *(void (__stdcall **)(int, int, _DWORD, CREComboBox *, _DWORD, _DWORD))(v9 + 736);
      if ( v10 )
        v10(v9, 513, *((_DWORD *)this + 34), this, 0, 0);
LABEL_16:
      if ( *(_BYTE *)(*((_DWORD *)this + 28) + 85) )
        return 1;
      CREDialog::ClearFocus();
      result = 1;
      break;
    default:
      return 0;
  }
  return result;
}
