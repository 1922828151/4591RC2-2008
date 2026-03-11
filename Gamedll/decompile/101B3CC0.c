/*
 * func-name: ?SetLocalRotation@Seat@GameClient@@QAEXAAVVector@@@Z_0
 * func-address: 0x101b3cc0
 * callers: 0x10011efa
 * callees: 0x100023ec, 0x100079c8, 0x10014669, 0x102c1270, 0x102c26d0, 0x102c9ea2
 */

void __thiscall GameClient::Seat::SetLocalRotation(GameClient::Seat *this, struct Vector *a2)
{
  bool v3; // zf
  float *v4; // ecx
  int v5; // ecx
  unsigned int v6; // eax
  unsigned int v7; // esi
  int v8; // edx
  unsigned int v9; // eax
  int v10; // edi
  unsigned int i; // ebx
  int v12; // ecx
  float *v13; // esi
  void (__cdecl *v14)(); // esi
  int v15; // eax
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // ecx
  _BYTE v20[64]; // [esp+1Ch] [ebp-40h] BYREF

  v3 = *((_BYTE *)this + 344) == 0;
  *((_DWORD *)this + 44) = *(_DWORD *)a2;
  *((_DWORD *)this + 45) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 46) = *((_DWORD *)a2 + 2);
  if ( v3 )
  {
    v4 = (float *)*((_DWORD *)this + 6);
    if ( v4[53] < (double)*(float *)a2 )
      *((float *)this + 44) = v4[53];
    if ( v4[56] > (double)*(float *)a2 )
      *((float *)this + 44) = v4[56];
    if ( v4[54] < (double)*((float *)a2 + 1) )
      *((float *)this + 45) = v4[54];
    if ( v4[57] > (double)*((float *)a2 + 1) )
      *((float *)this + 45) = v4[57];
    if ( v4[55] < (double)*((float *)a2 + 2) )
      *((float *)this + 46) = v4[55];
    if ( v4[58] > (double)*((float *)a2 + 2) )
      *((float *)this + 46) = v4[58];
    v5 = *((_DWORD *)this + 8);
    v6 = v5 ? (*((_DWORD *)this + 9) - v5) >> 2 : 0;
    v7 = *((_DWORD *)this + 5);
    if ( v7 < v6 )
    {
      v8 = *((_DWORD *)this + 16);
      v9 = v8 ? (*((_DWORD *)this + 17) - v8) >> 4 : 0;
      if ( v7 < v9 )
      {
        v10 = sub_100023EC(v7);
        for ( i = 0; ; ++i )
        {
          v12 = *(_DWORD *)(v10 + 4);
          if ( !v12 )
          {
            v14 = _invalid_parameter_noinfo;
            goto LABEL_33;
          }
          if ( i >= (*(_DWORD *)(v10 + 8) - v12) >> 2 )
            break;
          v13 = (float *)(*(_DWORD *)(v12 + 4 * i) + 292);
          memset(v13, 0, 0x40u);
          sub_102C1270(1.0);
          v13[15] = 1.0;
        }
        v14 = _invalid_parameter_noinfo;
        if ( (*(_DWORD *)(v10 + 8) - v12) >> 2 && **(_DWORD **)(v10 + 4) )
        {
          sub_10014669(v20);
          sub_102C26D0(*((float *)this + 44), 0.0, 0.0);
          v15 = *(_DWORD *)(v10 + 4);
          if ( !v15 || !((*(_DWORD *)(v10 + 8) - v15) >> 2) )
            _invalid_parameter_noinfo();
          sub_100079C8((int)v20);
        }
LABEL_33:
        v16 = *(_DWORD *)(v10 + 4);
        if ( v16 && (unsigned int)((*(_DWORD *)(v10 + 8) - v16) >> 2) >= 2 && *(_DWORD *)(*(_DWORD *)(v10 + 4) + 4) )
        {
          sub_10014669(v20);
          sub_102C26D0(0.0, *((float *)this + 45), 0.0);
          v17 = *(_DWORD *)(v10 + 4);
          if ( !v17 || (unsigned int)((*(_DWORD *)(v10 + 8) - v17) >> 2) <= 1 )
            v14();
          sub_100079C8((int)v20);
        }
        v18 = *(_DWORD *)(v10 + 4);
        if ( v18 && (unsigned int)((*(_DWORD *)(v10 + 8) - v18) >> 2) >= 3 && *(_DWORD *)(*(_DWORD *)(v10 + 4) + 8) )
        {
          sub_10014669(v20);
          sub_102C26D0(0.0, 0.0, *((float *)this + 46));
          v19 = *(_DWORD *)(v10 + 4);
          if ( !v19 || (unsigned int)((*(_DWORD *)(v10 + 8) - v19) >> 2) <= 2 )
            v14();
          sub_100079C8((int)v20);
        }
      }
    }
  }
}
