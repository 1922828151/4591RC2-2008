/*
 * func-name: sub_10011E80
 * func-address: 0x10011e80
 * callers: none
 * callees: 0x10013010, 0x10013080, 0x10013100, 0x10013be0
 */

int __thiscall sub_10011E80(_DWORD **this, int a2)
{
  unsigned int i; // edi
  int v4; // esi
  int v5; // eax
  int v6; // eax
  char v8; // [esp+17h] [ebp-EDh] BYREF
  int v9; // [esp+18h] [ebp-ECh]
  _BYTE v10[40]; // [esp+1Ch] [ebp-E8h] BYREF
  _BYTE v11[28]; // [esp+44h] [ebp-C0h] BYREF
  _BYTE v12[28]; // [esp+60h] [ebp-A4h] BYREF
  _BYTE v13[28]; // [esp+7Ch] [ebp-88h] BYREF
  _BYTE v14[28]; // [esp+98h] [ebp-6Ch] BYREF
  _BYTE v15[28]; // [esp+B4h] [ebp-50h] BYREF
  _BYTE v16[28]; // [esp+D0h] [ebp-34h] BYREF
  _BYTE v17[12]; // [esp+ECh] [ebp-18h] BYREF
  int v18; // [esp+100h] [ebp-4h]

  v9 = 0;
  sub_10013BE0(v10, &v8);
  v18 = 2;
  if ( this[2] )
  {
    for ( i = 0; i < (*(int (__thiscall **)(_DWORD *))(*this[2] + 16))(this[2]); ++i )
    {
      v4 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*this[2] + 8))(this[2], i);
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
      std::wstring::wstring(v12, v5);
      LOBYTE(v18) = 5;
      v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
      std::wstring::wstring(v11, v6);
      LOBYTE(v18) = 6;
      std::wstring::wstring(v13, v11);
      LOBYTE(v18) = 7;
      std::wstring::wstring(v14, v12);
      LOBYTE(v18) = 9;
      std::wstring::wstring(v15, v13);
      LOBYTE(v18) = 10;
      std::wstring::wstring(v16, v14);
      LOBYTE(v18) = 12;
      sub_10013100(v10, v17, v15);
      LOBYTE(v18) = 13;
      std::wstring::~wstring(v16);
      LOBYTE(v18) = 9;
      std::wstring::~wstring(v15);
      LOBYTE(v18) = 15;
      std::wstring::~wstring(v14);
      LOBYTE(v18) = 6;
      std::wstring::~wstring(v13);
      LOBYTE(v18) = 5;
      std::wstring::~wstring(v11);
      LOBYTE(v18) = 2;
      std::wstring::~wstring(v12);
    }
  }
  sub_10013010(a2);
  v9 = 1;
  v18 = 0;
  sub_10013080(v10);
  return a2;
}
