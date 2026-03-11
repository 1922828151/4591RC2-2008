/*
 * func-name: ?Shutdown@HUDSystem@@QAEXXZ_0
 * func-address: 0x100f0b20
 * callers: 0x10001de8
 * callees: 0x102c9d50
 */

void __thiscall HUDSystem::Shutdown(HUDSystem *this)
{
  _DWORD *v1; // esi
  void **v2; // edi
  void **v3; // ebx
  _DWORD *v4; // ebp
  _DWORD *v5; // ebp
  _DWORD **v6; // ecx
  _DWORD *v7; // eax
  bool v8; // zf
  _DWORD *v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // [esp+10h] [ebp-Ch]

  v1 = (_DWORD *)**((_DWORD **)this + 2);
  v2 = (void **)((char *)this + 4);
  v3 = (void **)((char *)this + 4);
  while ( 1 )
  {
    v4 = v2[1];
    if ( !v3 || v3 != v2 )
      _invalid_parameter_noinfo();
    if ( v1 == v4 )
      break;
    if ( !v3 )
      _invalid_parameter_noinfo();
    if ( v1 == v3[1] )
      _invalid_parameter_noinfo();
    v10 = (void (__thiscall ***)(_DWORD, int))v1[2];
    if ( v1 == v3[1] )
      _invalid_parameter_noinfo();
    v5 = (_DWORD *)*v1;
    if ( v1 != v2[1] )
    {
      *(_DWORD *)v1[1] = v5;
      *(_DWORD *)(*v1 + 4) = v1[1];
      operator delete(v1);
      v2[2] = (char *)v2[2] - 1;
    }
    v1 = v5;
    if ( v10 )
      (**v10)(v10, 1);
  }
  v6 = (_DWORD **)v2[1];
  v7 = *v6;
  *v6 = v6;
  *((_DWORD *)v2[1] + 1) = v2[1];
  v8 = v7 == v2[1];
  v2[2] = 0;
  if ( !v8 )
  {
    do
    {
      v9 = (_DWORD *)*v7;
      operator delete(v7);
      v7 = v9;
    }
    while ( v9 != v2[1] );
  }
}
