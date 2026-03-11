/*
 * func-name: sub_100150A0
 * func-address: 0x100150a0
 * callers: 0x100140f0, 0x100152a0, 0x1002e520, 0x1002f3a0, 0x10030400, 0x10030940
 * callees: 0x10014910, 0x10014ef0, 0x10035300
 */

char *__thiscall sub_100150A0(int this, char *a2)
{
  char *v3; // edi
  int v4; // esi
  int (__stdcall ***v5)(size_t, int); // eax
  int v6; // eax
  int v7; // ecx
  int i; // edx
  int v9; // edi
  int (__stdcall ***v10)(size_t, int); // eax
  int v11; // eax
  char *v12; // ebp

  sub_10014EF0((_BYTE *)this);
  v3 = a2;
  v4 = *(_DWORD *)(this + 4);
  if ( !a2 )
  {
    if ( *(_DWORD *)(this + 8) )
    {
      v5 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v5)[3])(v5, *(_DWORD *)(this + 8));
      *(_DWORD *)(this + 8) = 0;
    }
    v6 = *(_DWORD *)(this + 4);
    v7 = *(_DWORD *)(v6 + 12);
    for ( i = 0; v7; v7 = *(_DWORD *)(v7 + 12) )
    {
      i += *(_DWORD *)(v6 + 4);
      v6 = v7;
    }
    v9 = i + *(_DWORD *)(v6 + 4);
    if ( v9 )
    {
      v10 = sub_10014910();
      v11 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v10)(v10, v9, 65);
    }
    else
    {
      v11 = 0;
    }
    *(_DWORD *)(this + 8) = v11;
    v3 = (char *)v11;
  }
  v12 = v3;
  if ( v3 )
  {
    for ( ; *(_DWORD *)(v4 + 12); v4 = *(_DWORD *)(v4 + 12) )
    {
      memcpy_0(v3, *(const void **)v4, *(_DWORD *)(v4 + 4));
      v3 += *(_DWORD *)(v4 + 4);
    }
    memcpy_0(v3, *(const void **)v4, *(_DWORD *)(v4 + 4));
    *(_WORD *)(this + 20) = 0;
  }
  return v12;
}
