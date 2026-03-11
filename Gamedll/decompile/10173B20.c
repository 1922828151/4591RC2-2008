/*
 * func-name: ?WriteSnapshotToAvatar@Robot@GameClient@@UAE_NAAVBinStream@@@Z_0
 * func-address: 0x10173b20
 * callers: 0x10008355
 * callees: 0x1000c450
 */

char __thiscall GameClient::Robot::WriteSnapshotToAvatar(GameClient::Robot *this, float a2)
{
  int v4; // eax
  float *v5; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int i; // ebx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  unsigned int j; // ebx
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  double v20; // st7
  int v21; // esi

  if ( !GameClient::WorldObject::WriteSnapshotToAvatar(this, (struct BinStream *)LODWORD(a2)) )
    return 0;
  v4 = *((_DWORD *)this + 50);
  if ( !v4 )
    return 0;
  v5 = *(float **)(v4 + 8);
  v6 = *(_DWORD *)(LODWORD(a2) + 12);
  if ( (unsigned int)(v6 + 4) <= *(_DWORD *)(LODWORD(a2) + 8) )
  {
    *((_DWORD *)this + 164) = *(_DWORD *)(v6 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) += 4;
  }
  v7 = *(_DWORD *)(LODWORD(a2) + 12);
  if ( (unsigned int)(v7 + 4) <= *(_DWORD *)(LODWORD(a2) + 8) )
  {
    *((_DWORD *)this + 182) = *(_DWORD *)(v7 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) += 4;
  }
  v8 = *(_DWORD *)(LODWORD(a2) + 12);
  if ( (unsigned int)(v8 + 4) <= *(_DWORD *)(LODWORD(a2) + 8) )
  {
    v5[85] = *(float *)(v8 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) += 4;
  }
  v9 = *(_DWORD *)(LODWORD(a2) + 12);
  if ( (unsigned int)(v9 + 4) <= *(_DWORD *)(LODWORD(a2) + 8) )
  {
    v5[89] = *(float *)(v9 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) += 4;
  }
  v10 = *(_DWORD *)(LODWORD(a2) + 12);
  if ( (unsigned int)(v10 + 4) <= *(_DWORD *)(LODWORD(a2) + 8) )
  {
    v5[88] = *(float *)(v10 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) += 4;
  }
  (*(void (__thiscall **)(_DWORD, float))(**((_DWORD **)this + 50) + 16))(
    *((_DWORD *)this + 50),
    COERCE_FLOAT(LODWORD(a2)));
  (*(void (__thiscall **)(_DWORD, float))(**((_DWORD **)this + 51) + 16))(
    *((_DWORD *)this + 51),
    COERCE_FLOAT(LODWORD(a2)));
  (*(void (__thiscall **)(_DWORD, float))(**((_DWORD **)this + 52) + 16))(
    *((_DWORD *)this + 52),
    COERCE_FLOAT(LODWORD(a2)));
  for ( i = 0; ; ++i )
  {
    v12 = *((_DWORD *)this + 63);
    if ( !v12 || i >= (*((_DWORD *)this + 64) - v12) >> 2 )
      break;
    v13 = *((_DWORD *)this + 63);
    if ( *(_DWORD *)(v13 + 4 * i) )
    {
      if ( !v13 || i >= (*((_DWORD *)this + 64) - v13) >> 2 )
        _invalid_parameter_noinfo();
      v14 = *(_DWORD *)(*((_DWORD *)this + 63) + 4 * i);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v14 + 16))(v14, COERCE_FLOAT(LODWORD(a2)));
    }
  }
  for ( j = 0; ; ++j )
  {
    v16 = *((_DWORD *)this + 67);
    if ( !v16 || j >= (*((_DWORD *)this + 68) - v16) >> 2 )
      break;
    v17 = *((_DWORD *)this + 67);
    if ( *(_DWORD *)(v17 + 4 * j) )
    {
      if ( !v17 || j >= (*((_DWORD *)this + 68) - v17) >> 2 )
        _invalid_parameter_noinfo();
      v18 = *(_DWORD *)(*((_DWORD *)this + 67) + 4 * j);
      (*(void (__thiscall **)(int, float))(*(_DWORD *)v18 + 16))(v18, COERCE_FLOAT(LODWORD(a2)));
    }
  }
  v19 = *(_DWORD *)(LODWORD(a2) + 12);
  if ( (unsigned int)(v19 + 4) <= *(_DWORD *)(LODWORD(a2) + 8) )
  {
    v20 = *(float *)(v19 + *(_DWORD *)(LODWORD(a2) + 4));
    *(_DWORD *)(LODWORD(a2) + 12) = v19 + 4;
    a2 = v20;
  }
  v21 = *((_DWORD *)this + 5);
  if ( v21 )
    *(float *)(v21 + 300) = a2;
  return 1;
}
