/*
 * func-name: ?UnSelectActor@Editor@@QAEXPAVActor@@@Z
 * func-address: 0x10082740
 * callers: 0x1008c3e0
 * callees: none
 */

void __thiscall Editor::UnSelectActor(Editor *this, struct Actor *a2)
{
  unsigned int i; // edi
  int v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  int v7; // ebx
  unsigned int v8; // edi
  int v9; // eax

  *((_BYTE *)a2 + 441) = 0;
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 562);
    if ( !v4 || i >= (*((_DWORD *)this + 563) - v4) >> 2 )
      break;
    *((_BYTE *)this + 2060) = 1;
    v5 = *((_DWORD *)this + 562);
    if ( !v5 || i >= (*((_DWORD *)this + 563) - v5) >> 2 )
      invalid_parameter_noinfo();
    v6 = *((_DWORD *)this + 562);
    if ( *(struct Actor **)(v6 + 4 * i) == a2 )
    {
      v7 = *((_DWORD *)this + 562);
      if ( v6 > *((_DWORD *)this + 563) )
        invalid_parameter_noinfo();
      v8 = v7 + 4 * i;
      if ( v8 > *((_DWORD *)this + 563) || v8 < *((_DWORD *)this + 562) )
        invalid_parameter_noinfo();
      v9 = (int)(*((_DWORD *)this + 563) - (v8 + 4)) >> 2;
      if ( v9 > 0 )
        memmove_s((void *const)v8, 4 * v9, (const void *const)(v8 + 4), 4 * v9);
      *((_DWORD *)this + 563) -= 4;
      return;
    }
  }
}
