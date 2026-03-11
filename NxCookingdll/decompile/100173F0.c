/*
 * func-name: sub_100173F0
 * func-address: 0x100173f0
 * callers: 0x100175f0, 0x10017e30, 0x10018590
 * callees: 0x10014910, 0x10018760, 0x100189c0, 0x10019010, 0x10019370
 */

bool __thiscall sub_100173F0(_DWORD *this, char a2, char a3)
{
  void (__thiscall ***v4)(_DWORD, int); // ecx
  int v5; // eax
  int (__stdcall ***v6)(size_t, int); // eax
  int v7; // eax
  int v8; // eax
  int (__stdcall ***v10)(size_t, int); // eax
  int v11; // eax
  int v12; // eax
  int (__stdcall ***v13)(size_t, int); // eax
  int v14; // eax
  int v15; // eax
  int (__stdcall ***v16)(size_t, int); // eax
  int v17; // eax
  int v18; // eax

  v4 = (void (__thiscall ***)(_DWORD, int))this[4];
  if ( v4 )
  {
    (**v4)(v4, 1);
    this[4] = 0;
  }
  if ( a2 )
    this[2] |= 2u;
  else
    this[2] &= ~2u;
  if ( a3 )
    this[2] |= 1u;
  else
    this[2] &= ~1u;
  v5 = this[2];
  if ( (v5 & 2) != 0 )
  {
    if ( (v5 & 1) != 0 )
    {
      v6 = sub_10014910();
      v7 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v6)(v6, 36, 0);
      if ( v7 )
      {
        v8 = sub_100189C0(v7);
        this[4] = v8;
        return v8 != 0;
      }
    }
    else
    {
      v10 = sub_10014910();
      v11 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v10)(v10, 12, 0);
      if ( v11 )
      {
        v12 = sub_10018760(v11);
        this[4] = v12;
        return v12 != 0;
      }
    }
  }
  else if ( (v5 & 1) != 0 )
  {
    v13 = sub_10014910();
    v14 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v13)(v13, 36, 0);
    if ( v14 )
    {
      v15 = sub_10019370(v14);
      this[4] = v15;
      return v15 != 0;
    }
  }
  else
  {
    v16 = sub_10014910();
    v17 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v16)(v16, 12, 0);
    if ( v17 )
    {
      v18 = sub_10019010(v17);
      this[4] = v18;
      return v18 != 0;
    }
  }
  this[4] = 0;
  return 0;
}
