/*
 * func-name: sub_1000EAF0
 * func-address: 0x1000eaf0
 * callers: 0x10010a60
 * callees: 0x10009690, 0x1000b770, 0x1000c930, 0x1000d200, 0x100ce270, 0x10131a50
 */

_DWORD *__thiscall sub_1000EAF0(int this, _DWORD *a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v7; // edi
  int v8; // ebp
  _DWORD *v9; // ebx
  int v10; // edi
  _DWORD *v11; // edi
  bool v12; // zf
  int v13; // eax
  char v14; // al
  _DWORD *v15; // ebp
  _DWORD *v16; // eax
  _DWORD v17[3]; // [esp+8h] [ebp-Ch] BYREF

  if ( !*(_DWORD *)(this + 8) )
  {
    sub_1000C930((_DWORD *)this, a2, 1, *(_DWORD **)(this + 4), a5);
    return a2;
  }
  v7 = **(_DWORD ***)(this + 4);
  v8 = a3;
  if ( !a3 || a3 != this )
    invalid_parameter_noinfo();
  v9 = a4;
  if ( a4 == v7 )
  {
    v10 = a5;
    if ( (unsigned __int8)std::operator<<char>(a5, a4 + 3) )
    {
      sub_1000C930((_DWORD *)this, a2, 1, v9, v10);
      return a2;
    }
    goto LABEL_28;
  }
  v11 = *(_DWORD **)(this + 4);
  if ( !v8 || v8 != this )
    invalid_parameter_noinfo();
  v12 = v9 == v11;
  v10 = a5;
  if ( v12 )
  {
    if ( (unsigned __int8)std::operator<<char>(*(_DWORD *)(*(_DWORD *)(this + 4) + 8) + 12, a5) )
    {
      sub_1000C930((_DWORD *)this, a2, 0, *(_DWORD **)(*(_DWORD *)(this + 4) + 8), v10);
      return a2;
    }
    goto LABEL_28;
  }
  if ( (unsigned __int8)std::operator<<char>(a5, v9 + 3)
    && (a3 = v8, a4 = v9, sub_10131A50(&a3), (unsigned __int8)sub_10009690((int)(a4 + 3), v10)) )
  {
    if ( *(_BYTE *)(a4[2] + 45) )
      sub_1000C930((_DWORD *)this, a2, 0, a4, v10);
    else
      sub_1000C930((_DWORD *)this, a2, 1, v9, v10);
    return a2;
  }
  else
  {
    if ( !(unsigned __int8)std::operator<<char>(v9 + 3, v10) )
      goto LABEL_28;
    v13 = *(_DWORD *)(this + 4);
    a3 = v8;
    a4 = v9;
    v17[1] = v13;
    v17[0] = this;
    sub_1000B770(&a3);
    v14 = sub_100CE270(v17);
    v15 = a4;
    if ( !v14 && !(unsigned __int8)sub_10009690(v10, (int)(a4 + 3)) )
    {
LABEL_28:
      v16 = (_DWORD *)sub_1000D200((_DWORD *)this, (int)v17, v10);
      *a2 = *v16;
      a2[1] = v16[1];
      return a2;
    }
    if ( *(_BYTE *)(v9[2] + 45) )
      sub_1000C930((_DWORD *)this, a2, 0, v9, v10);
    else
      sub_1000C930((_DWORD *)this, a2, 1, v15, v10);
    return a2;
  }
}
