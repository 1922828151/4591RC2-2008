/*
 * func-name: sub_100168A0
 * func-address: 0x100168a0
 * callers: 0x100168a0, 0x10017170
 * callees: 0x10014910, 0x100168a0
 */

_DWORD *__thiscall sub_100168A0(_DWORD *this, char a2)
{
  int v3; // edi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // eax
  int (__stdcall ***v10)(size_t, int); // eax
  int v12; // eax
  int (__stdcall ***v13)(size_t, int); // eax

  if ( (a2 & 2) != 0 )
  {
    v3 = *(this - 1);
    v4 = this - 1;
    v5 = 5 * v3;
    v6 = v3 - 1;
    v7 = &this[2 * v5];
    if ( v6 >= 0 )
    {
      v8 = v7 + 6;
      do
      {
        v9 = *(v8 - 10);
        v8 -= 10;
        if ( (v9 & 1) == 0 && (v9 & 0xFFFFFFFE) != 0 )
          sub_100168A0(3);
        --v6;
        v8[2] = 0;
        v8[3] = 0;
      }
      while ( v6 >= 0 );
    }
    if ( (a2 & 1) != 0 )
    {
      v10 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v10)[3])(v10, v4);
    }
    return v4;
  }
  else
  {
    v12 = this[6];
    if ( (v12 & 1) == 0 && (v12 & 0xFFFFFFFE) != 0 )
      sub_100168A0(3);
    this[8] = 0;
    this[9] = 0;
    if ( (a2 & 1) != 0 )
    {
      v13 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v13)[3])(v13, this);
    }
    return this;
  }
}
