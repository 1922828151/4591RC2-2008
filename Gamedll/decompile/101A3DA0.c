/*
 * func-name: ?CheckSeatHideModelFrame@Establishment@GameClient@@QAEXJ_N@Z_0
 * func-address: 0x101a3da0
 * callers: 0x1000a06f
 * callees: none
 */

void __thiscall GameClient::Establishment::CheckSeatHideModelFrame(GameClient::Establishment *this, int a2, bool a3)
{
  int v3; // edx
  unsigned int v4; // edi
  int v6; // esi
  int v7; // ecx
  int v8; // esi
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  int v12; // edi
  int v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  void *v18; // esi
  int NodeHandle; // eax
  _DWORD v20[7]; // [esp-1Ch] [ebp-38h] BYREF
  int v21; // [esp+0h] [ebp-1Ch]
  int i; // [esp+14h] [ebp-8h]
  _DWORD *v23; // [esp+18h] [ebp-4h]
  int v24; // [esp+20h] [ebp+4h]

  v3 = 0;
  v4 = 0;
  for ( i = 0; (int)v4 < a2; i = v3 )
  {
    v6 = *((_DWORD *)this + 2);
    v7 = *(_DWORD *)(v6 + 480);
    v8 = v6 + 476;
    if ( !v7 || v4 >= (*(_DWORD *)(v8 + 8) - v7) >> 2 )
    {
      _invalid_parameter_noinfo();
      v3 = i;
    }
    v3 += *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v4++);
  }
  v9 = *((_DWORD *)this + 2);
  v10 = *(_DWORD *)(v9 + 480);
  v11 = v9 + 476;
  if ( !v10 || a2 >= (unsigned int)((*(_DWORD *)(v11 + 8) - v10) >> 2) )
  {
    _invalid_parameter_noinfo();
    v3 = i;
  }
  v12 = 0;
  v24 = *(_DWORD *)(*(_DWORD *)(v11 + 4) + 4 * a2);
  if ( v24 > 0 )
  {
    v13 = 28 * v3;
    do
    {
      v14 = *((_DWORD *)this + 2);
      v15 = *(_DWORD *)(v14 + 496);
      v16 = v14 + 492;
      if ( !v15 || v12 + i >= (unsigned int)((*(_DWORD *)(v16 + 8) - v15) / 28) )
        _invalid_parameter_noinfo();
      v17 = *((_DWORD *)this + 75);
      v18 = (void *)(v13 + *(_DWORD *)(v16 + 4));
      if ( v17 && *(_DWORD *)(v17 + 716) )
      {
        v21 = 0;
        v23 = v20;
        std::string::string(v20, v18);
        NodeHandle = StaticModel::GetNodeHandle(
                       *(_DWORD *)(*((_DWORD *)this + 75) + 716),
                       v20[0],
                       v20[1],
                       v20[2],
                       v20[3],
                       v20[4],
                       v20[5],
                       v20[6],
                       v21);
        if ( NodeHandle )
          *(_BYTE *)(NodeHandle + 376) = a3;
      }
      ++v12;
      v13 += 28;
    }
    while ( v12 < v24 );
  }
}
