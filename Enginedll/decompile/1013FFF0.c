/*
 * func-name: ?CollisionCheckRay@World@@QAE_NPAVActor@@ABVVector@@1W4CheckType@@AAUCollisionInfo@@_NPAV?$vector@PAVActor@@V?$allocator@PAVActor@@@std@@@std@@@Z
 * func-address: 0x1013fff0
 * callers: 0x10084530, 0x1008de00, 0x10166120, 0x10169d00
 * callees: 0x10029a50, 0x10052ef0, 0x10143fd0, 0x10144670, 0x101a2500
 */

char __stdcall World::CollisionCheckRay(int a1, int a2, int a3, int a4, double *a5, int a6, int a7)
{
  int v8; // eax
  int v9; // ecx
  char *v10; // ecx
  unsigned int v11; // ebp
  int v12; // esi
  void (__cdecl *v13)(); // ebx
  _DWORD *v14; // esi
  char *v15; // ebx
  _DWORD *v16; // edi
  _DWORD *i; // eax
  int v18; // [esp-1Ch] [ebp-3Ch]
  unsigned int v19; // [esp-14h] [ebp-34h]
  _DWORD *v20; // [esp+0h] [ebp-20h]
  char v21[4]; // [esp+4h] [ebp-1Ch] BYREF
  void *v22; // [esp+8h] [ebp-18h]
  int v23; // [esp+Ch] [ebp-14h]
  int v24; // [esp+10h] [ebp-10h]
  int v25; // [esp+1Ch] [ebp-4h]
  float v26; // [esp+28h] [ebp+8h]
  int v27; // [esp+2Ch] [ebp+Ch]
  char v28; // [esp+30h] [ebp+10h]

  if ( !NxPhysics::Instance() )
    return 0;
  v8 = -1;
  if ( a4 )
  {
    if ( a4 == 11 )
    {
      v9 = 1;
      v8 = -33;
    }
    else
    {
      v9 = 3;
    }
  }
  else
  {
    v9 = 2;
  }
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19 = v8 & 0xFFFFFFEF;
  v18 = v9;
  v25 = 0;
  NxPhysics::Instance();
  NxPhysics::RayCastAll(a2, a3, v18, v21, v19);
  v10 = (char *)v22;
  v26 = 3.4028235e38;
  v28 = 0;
  v11 = 0;
  v27 = 0;
  while ( v10 )
  {
    v12 = v23;
    if ( v11 >= (v23 - (int)v10) / 104 )
    {
      sub_10052EF0((int)v10, v23);
      operator delete(v22);
      return v28;
    }
    v13 = invalid_parameter_noinfo;
    if ( !*(_BYTE *)(*(_DWORD *)&v10[v27 + 64] + 724) )
    {
      if ( !a7 )
        goto LABEL_27;
      v20 = *(_DWORD **)(a7 + 8);
      if ( *(_DWORD *)(a7 + 4) > (unsigned int)v20 )
      {
        invalid_parameter_noinfo();
        v10 = (char *)v22;
        v12 = v23;
      }
      if ( !v10 || v11 >= (v12 - (int)v10) / 104 )
      {
        invalid_parameter_noinfo();
        v10 = (char *)v22;
      }
      v14 = *(_DWORD **)(a7 + 8);
      v15 = &v10[v27];
      if ( *(_DWORD *)(a7 + 4) > (unsigned int)v14 )
      {
        invalid_parameter_noinfo();
        v10 = (char *)v22;
      }
      v16 = *(_DWORD **)(a7 + 4);
      if ( (unsigned int)v16 > *(_DWORD *)(a7 + 8) )
      {
        invalid_parameter_noinfo();
        v10 = (char *)v22;
      }
      for ( i = v16; i != v14; ++i )
      {
        if ( *i == *((_DWORD *)v15 + 16) )
          break;
      }
      if ( i == v20 )
      {
        v12 = v23;
        v13 = invalid_parameter_noinfo;
LABEL_27:
        if ( !v10 || v11 >= (v12 - (int)v10) / 104 )
        {
          v13();
          v10 = (char *)v22;
          v12 = v23;
        }
        if ( v26 > *(double *)&v10[v27 + 8] )
        {
          if ( !v10 || v11 >= (v12 - (int)v10) / 104 )
          {
            v13();
            v10 = (char *)v22;
          }
          CollisionInfo::operator=(a5, (int)&v10[v27]);
          v10 = (char *)v22;
          v26 = a5[1];
          v28 = 1;
        }
      }
    }
    v27 += 104;
    ++v11;
  }
  return v28;
}
