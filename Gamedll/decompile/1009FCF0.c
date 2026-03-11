/*
 * func-name: sub_1009FCF0
 * func-address: 0x1009fcf0
 * callers: 0x100141e1
 * callees: 0x10003dd7, 0x10008c47, 0x1000cdd3, 0x1000fd26, 0x100127d8, 0x10014c81, 0x1001a5d2, 0x102c9d98
 */

int __thiscall sub_1009FCF0(_DWORD *this, int a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  int v7; // ebx
  int v8; // esi
  _DWORD *v9; // edi
  int result; // eax
  int v11; // [esp+0h] [ebp-34h]
  int v12; // [esp+4h] [ebp-30h]
  _DWORD *v13; // [esp+14h] [ebp-20h] BYREF
  int v14; // [esp+18h] [ebp-1Ch]
  char v15[4]; // [esp+1Ch] [ebp-18h] BYREF
  int v16; // [esp+20h] [ebp-14h]
  int v17; // [esp+24h] [ebp-10h]
  int v18; // [esp+30h] [ebp-4h]

  if ( !a2 || !a3[5] )
    return -1;
  v5 = this + 5;
  sub_10003DD7((int)&v13, (int)a3);
  v6 = v13;
  v16 = this[6];
  if ( !v13 || v13 != v5 )
    _invalid_parameter_noinfo();
  v7 = v14;
  if ( v14 == v16 )
  {
    v13 = operator new(0xA0u);
    v8 = 0;
    v18 = 0;
    if ( v13 )
      v8 = sub_1000CDD3(v11, v12);
    v18 = -1;
    if ( (unsigned __int8)sub_100127D8(a2, a3, a4) )
      goto LABEL_12;
    if ( v8 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 4))(v8, 1);
    return -1;
  }
  if ( !v6 )
    _invalid_parameter_noinfo();
  if ( v7 == v6[1] )
    _invalid_parameter_noinfo();
  v8 = *(_DWORD *)(v7 + 40);
  sub_1000FD26(a2);
  sub_1001A5D2(1);
  sub_10014C81((int)v15, (int)v13, v7);
LABEL_12:
  v9 = (_DWORD *)++this[1];
  v13 = v9;
  v14 = v8;
  sub_10008C47((int)v15, (int)&v13);
  if ( (_BYTE)v17 )
    return (int)v9;
  if ( v8 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v8 + 4))(v8, 1);
  result = -1;
  --this[1];
  return result;
}
