/*
 * func-name: sub_101197C0
 * func-address: 0x101197c0
 * callers: 0x10118c10
 * callees: 0x100cddf0, 0x10119670, 0x1011a450
 */

unsigned int __thiscall sub_101197C0(_DWORD *this, int a2)
{
  unsigned int result; // eax
  unsigned int v4; // edi
  int v5; // eax
  _DWORD *v6; // esi
  void (__cdecl *v7)(); // ebp
  int v8; // ebx
  _DWORD **v9; // eax
  int v10; // ebp
  int v11; // eax
  int v12; // eax
  int v13; // edi
  unsigned int v14; // edi
  _BYTE v15[4]; // [esp+8h] [ebp-8h] BYREF
  int v16; // [esp+Ch] [ebp-4h]

  result = sub_10119670(this, a2);
  v4 = result;
  if ( result != -1 )
  {
    v5 = this[2];
    v6 = this + 1;
    if ( v5 && v4 < (v6[2] - v5) / 40 )
    {
      v7 = invalid_parameter_noinfo;
    }
    else
    {
      v7 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    v8 = 40 * v4;
    v9 = (_DWORD **)(v6[1] + 40 * v4 + 4);
    if ( !--**v9 )
    {
      v10 = *(_DWORD *)(*(_DWORD *)(std::vector<BBox>::operator[](v6, v4) + 4) + 4);
      v11 = std::vector<BBox>::operator[](v6, v4);
      (*(void (__cdecl **)(_DWORD))(v10 + 24))(*(_DWORD *)(v11 + 4));
      v7 = invalid_parameter_noinfo;
    }
    v12 = v6[1];
    if ( !v12 || v4 >= (v6[2] - v12) / 40 )
      v7();
    result = v6[1];
    if ( !*(_DWORD *)(result + v8 + 4) )
    {
      v13 = v6[1];
      if ( result > v6[2] )
        v7();
      v16 = v13;
      v14 = v8 + v13;
      if ( v14 > v6[2] || v14 < v6[1] )
        v7();
      return sub_1011A450(v15, v6, v14);
    }
  }
  return result;
}
