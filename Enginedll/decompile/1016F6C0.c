/*
 * func-name: ?Shutdown@EventAttemper@@UAE_NXZ
 * func-address: 0x1016f6c0
 * callers: none
 * callees: 0x10031040, 0x10170260, 0x10170df0, 0x10170e60, 0x101a2500
 */

char __thiscall EventAttemper::Shutdown(EventAttemper *this)
{
  char *v2; // ebx
  _DWORD *i; // esi
  _DWORD **v4; // ecx
  _DWORD *v5; // eax
  bool v6; // zf
  _DWORD *v7; // edi
  _DWORD *j; // esi
  void (__thiscall ***v9)(_DWORD, int); // ecx
  _DWORD **v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD v14[2]; // [esp+10h] [ebp-8h] BYREF

  v2 = (char *)this + 124;
  for ( i = (_DWORD *)**((_DWORD **)this + 32); i != *((_DWORD **)v2 + 1); i = (_DWORD *)*i )
  {
    v4 = (_DWORD **)i[4];
    v5 = *v4;
    *v4 = v4;
    *(_DWORD *)(i[4] + 4) = i[4];
    v6 = v5 == (_DWORD *)i[4];
    i[5] = 0;
    if ( !v6 )
    {
      do
      {
        v7 = (_DWORD *)*v5;
        operator delete(v5);
        v5 = v7;
      }
      while ( v7 != (_DWORD *)i[4] );
    }
    if ( i == *((_DWORD **)v2 + 1) )
      invalid_parameter_noinfo();
  }
  sub_10031040((_DWORD *)this + 31);
  v14[1] = *((_DWORD *)this + 32);
  v14[0] = (char *)this + 124;
  sub_10170260(9, v14);
  *((_DWORD *)this + 38) = 1;
  *((_DWORD *)this + 39) = 1;
  sub_10170DF0((char *)this + 8);
  for ( j = (_DWORD *)**((_DWORD **)this + 18); j != *((_DWORD **)this + 18); j = (_DWORD *)*j )
  {
    if ( j[3] )
    {
      if ( j == *((_DWORD **)this + 18) )
        invalid_parameter_noinfo();
      v9 = (void (__thiscall ***)(_DWORD, int))j[3];
      if ( v9 )
        (**v9)(v9, 1);
      if ( j == *((_DWORD **)this + 18) )
        invalid_parameter_noinfo();
      j[3] = 0;
    }
    if ( j == *((_DWORD **)this + 18) )
      invalid_parameter_noinfo();
  }
  sub_10170E60((char *)this + 64);
  v10 = (_DWORD **)*((_DWORD *)this + 28);
  v11 = *v10;
  *v10 = v10;
  *(_DWORD *)(*((_DWORD *)this + 28) + 4) = *((_DWORD *)this + 28);
  v6 = v11 == *((_DWORD **)this + 28);
  *((_DWORD *)this + 29) = 0;
  if ( !v6 )
  {
    do
    {
      v12 = (_DWORD *)*v11;
      operator delete(v11);
      v11 = v12;
    }
    while ( v12 != *((_DWORD **)this + 28) );
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 12) = 0;
  return 1;
}
