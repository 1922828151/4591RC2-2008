/*
 * func-name: sub_1000CAD0
 * func-address: 0x1000cad0
 * callers: 0x1000c820, 0x1000c8e0, 0x1000d6d0
 * callees: 0x10014910, 0x10014b50
 */

void __thiscall sub_1000CAD0(_DWORD *this)
{
  bool v2; // zf
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // ebx
  int v15; // eax

  v2 = this[18] == 0;
  *this = &ConvexHull::`vftable';
  if ( v2 )
  {
    if ( this[16] )
    {
      v4 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 12))(v4, this[16]);
      this[16] = 0;
    }
    if ( this[17] )
    {
      v5 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v5 + 12))(v5, this[17]);
      this[17] = 0;
    }
    if ( this[15] )
    {
      v6 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 12))(v6, this[15]);
      this[15] = 0;
    }
    if ( this[14] )
    {
      v7 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 12))(v7, this[14]);
      this[14] = 0;
    }
    if ( this[12] )
    {
      v8 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v8 + 12))(v8, this[12]);
      this[12] = 0;
    }
    if ( this[11] )
    {
      v9 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v9 + 12))(v9, this[11]);
      this[11] = 0;
    }
    if ( this[10] )
    {
      v10 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 12))(v10, this[10]);
      this[10] = 0;
    }
    if ( this[2] )
    {
      v11 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 12))(v11, this[2]);
      this[2] = 0;
    }
    if ( this[5] )
    {
      v12 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v12 + 12))(v12, this[5]);
      this[5] = 0;
    }
    if ( this[4] )
    {
      v13 = sub_10014910();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v13 + 12))(v13, this[4]);
      this[4] = 0;
    }
  }
  else
  {
    v3 = sub_10014910();
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 12))(v3, this[18]);
    this[18] = 0;
  }
  v14 = this[19];
  if ( v14 )
  {
    sub_10014B50(this[19]);
    v15 = sub_10014910();
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v15 + 12))(v15, v14);
    this[19] = 0;
  }
}
