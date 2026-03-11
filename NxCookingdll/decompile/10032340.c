/*
 * func-name: sub_10032340
 * func-address: 0x10032340
 * callers: 0x10032460, 0x10032620, 0x100328e0
 * callees: 0x10031b70, 0x10031c00, 0x100371b6, 0x100483cb, 0x1004840a
 */

int __thiscall sub_10032340(int this, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // edi
  unsigned int v7; // eax
  bool v8; // zf
  _DWORD *v9; // edx
  rsize_t v10; // ecx
  void **v11; // ebx
  void *v12; // eax
  bool v13; // cf

  if ( a2[5] < a3 )
    std::_String_base::_Xran();
  v5 = a2[5] - a3;
  if ( a4 < v5 )
    v5 = a4;
  if ( (_DWORD *)this == a2 )
  {
    sub_10031B70((_DWORD *)this, a3 + v5, 0xFFFFFFFF);
    sub_10031B70((_DWORD *)this, 0, a3);
    return this;
  }
  if ( v5 == -1 )
    std::_String_base::_Xlen();
  v7 = *(_DWORD *)(this + 24);
  if ( v7 >= v5 )
  {
    v8 = v5 == 0;
    if ( !v5 )
    {
      *(_DWORD *)(this + 20) = 0;
      if ( v7 < 0x10 )
        *(_BYTE *)(this + 4) = 0;
      else
        **(_BYTE **)(this + 4) = 0;
      return this;
    }
  }
  else
  {
    sub_10031C00((_DWORD *)this, v5, *(_DWORD *)(this + 20));
    v8 = v5 == 0;
  }
  if ( !v8 )
  {
    if ( a2[6] < 0x10u )
      v9 = a2 + 1;
    else
      v9 = (_DWORD *)a2[1];
    v10 = *(_DWORD *)(this + 24);
    v11 = (void **)(this + 4);
    if ( v10 < 0x10 )
      v12 = (void *)(this + 4);
    else
      v12 = *v11;
    memcpy_s(v12, v10, (char *)v9 + a3, v5);
    v13 = *(_DWORD *)(this + 24) < 0x10u;
    *(_DWORD *)(this + 20) = v5;
    if ( !v13 )
      v11 = (void **)*v11;
    *((_BYTE *)v11 + v5) = 0;
  }
  return this;
}
