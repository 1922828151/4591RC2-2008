/*
 * func-name: ?RemoveActor@World@@QAE_NPAVActor@@@Z
 * func-address: 0x101381e0
 * callers: 0x100511a0, 0x1008e080, 0x1008e470, 0x1015c210, 0x10168040
 * callees: 0x100956d0, 0x10101f00
 */

char __thiscall World::RemoveActor(World *this, struct Actor *a2)
{
  char v3; // bl
  unsigned int i; // edi
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ebx
  unsigned int v8; // edi
  int v9; // eax
  unsigned int j; // edi
  int v11; // ecx
  unsigned int v12; // ecx
  int v13; // ebx
  unsigned int v14; // edi
  int v15; // eax

  if ( !this )
    Error("World::RemoveActor() You tried to add an actor using a NULL world pointer. It is likely that the calling actor"
          " was never added to the world itself");
  (*(void (__thiscall **)(struct Actor *, _DWORD))(*(_DWORD *)a2 + 28))(a2, 0);
  sub_10101F00(*((_DWORD **)this + 4), (int)a2);
  v3 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(struct Actor *))(*(_DWORD *)a2 + 40))(a2) )
  {
    for ( i = 0; ; ++i )
    {
      v5 = *((_DWORD *)this + 810);
      if ( !v5 || i >= (*((_DWORD *)this + 811) - v5) >> 2 )
        break;
      v6 = *((_DWORD *)this + 810);
      if ( *(struct Actor **)(v6 + 4 * i) == a2 )
      {
        v7 = *((_DWORD *)this + 810);
        if ( v6 > *((_DWORD *)this + 811) )
          invalid_parameter_noinfo();
        v8 = v7 + 4 * i;
        if ( v8 > *((_DWORD *)this + 811) || v8 < *((_DWORD *)this + 810) )
          invalid_parameter_noinfo();
        v9 = (int)(*((_DWORD *)this + 811) - (v8 + 4)) >> 2;
        if ( v9 > 0 )
          memmove_s((void *const)v8, 4 * v9, (const void *const)(v8 + 4), 4 * v9);
        *((_DWORD *)this + 811) -= 4;
        v3 = 1;
        break;
      }
    }
  }
  for ( j = 0; ; ++j )
  {
    v11 = *((_DWORD *)this + 806);
    if ( !v11 || j >= (*((_DWORD *)this + 807) - v11) >> 2 )
      return v3;
    v12 = *((_DWORD *)this + 806);
    if ( *(struct Actor **)(v12 + 4 * j) == a2 )
      break;
  }
  v13 = *((_DWORD *)this + 806);
  if ( v12 > *((_DWORD *)this + 807) )
    invalid_parameter_noinfo();
  v14 = v13 + 4 * j;
  if ( v14 > *((_DWORD *)this + 807) || v14 < *((_DWORD *)this + 806) )
    invalid_parameter_noinfo();
  v15 = (int)(*((_DWORD *)this + 807) - (v14 + 4)) >> 2;
  if ( v15 > 0 )
    memmove_s((void *const)v14, 4 * v15, (const void *const)(v14 + 4), 4 * v15);
  *((_DWORD *)this + 807) -= 4;
  return 1;
}
