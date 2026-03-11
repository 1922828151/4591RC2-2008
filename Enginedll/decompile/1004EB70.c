/*
 * func-name: ?DontSetNULLOnDeath@Actor@@QAEXPAV1@PAPAV1@@Z
 * func-address: 0x1004eb70
 * callers: 0x1004eb70, 0x10051160, 0x10109be0
 * callees: 0x1004eb70, 0x101a2500
 */

void __thiscall Actor::DontSetNULLOnDeath(Actor *this, struct Actor *a2, struct Actor **a3)
{
  unsigned int i; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int v10; // eax

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 22);
    if ( !v5 || i >= (*((_DWORD *)this + 23) - v5) >> 2 )
      break;
    v6 = *((_DWORD *)this + 22);
    if ( **(struct Actor ****)(v6 + 4 * i) == a3 )
    {
      if ( a2 )
      {
        if ( !v6 || i >= (*((_DWORD *)this + 23) - v6) >> 2 )
          invalid_parameter_noinfo();
        Actor::DontSetNULLOnDeath(a2, 0, *(struct Actor ***)(*((_DWORD *)this + 22) + 4 * i));
      }
      v7 = *((_DWORD *)this + 22);
      if ( !v7 || i >= (*((_DWORD *)this + 23) - v7) >> 2 )
        invalid_parameter_noinfo();
      operator delete(*(void **)(*((_DWORD *)this + 22) + 4 * i));
      v8 = *((_DWORD *)this + 22);
      if ( v8 > *((_DWORD *)this + 23) )
        invalid_parameter_noinfo();
      v9 = v8 + 4 * i;
      if ( v9 > *((_DWORD *)this + 23) || v9 < *((_DWORD *)this + 22) )
        invalid_parameter_noinfo();
      v10 = (int)(*((_DWORD *)this + 23) - (v9 + 4)) >> 2;
      if ( v10 > 0 )
        memmove_s((void *const)v9, 4 * v10, (const void *const)(v9 + 4), 4 * v10);
      *((_DWORD *)this + 23) -= 4;
      return;
    }
  }
}
