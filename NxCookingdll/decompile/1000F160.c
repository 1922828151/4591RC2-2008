/*
 * func-name: sub_1000F160
 * func-address: 0x1000f160
 * callers: 0x1000f360
 * callees: 0x1000f030, 0x10013710, 0x10014910, 0x10015980, 0x100159a0, 0x10015a80
 */

char __usercall sub_1000F160@<al>(unsigned int a1@<eax>, int a2, _DWORD *a3)
{
  int (__thiscall ***v4)(_DWORD, int, int); // eax
  int v5; // esi
  unsigned int v7; // eax
  _DWORD *v8; // ebp
  _DWORD *v9; // ecx
  unsigned int v10; // eax
  _DWORD *v11; // ecx
  int v12; // eax
  _DWORD *v13; // edi
  int v14; // ecx
  int v15; // edx
  char v16; // bl
  char v17; // al
  int v18; // esi
  int *v19; // eax
  int v20; // ebp
  int v21; // eax
  int v22; // [esp+Ch] [ebp-34h]
  int v23; // [esp+10h] [ebp-30h]
  int v24; // [esp+1Ch] [ebp-24h]
  int v25; // [esp+20h] [ebp-20h]
  char v26[4]; // [esp+28h] [ebp-18h] BYREF
  _DWORD *v27; // [esp+2Ch] [ebp-14h]

  sub_10015980(v26);
  v4 = (int (__thiscall ***)(_DWORD, int, int))sub_10014910();
  v5 = (**v4)(v4, 4 * a1, 1);
  if ( !v5 )
  {
    sub_100159A0(v26);
    return 0;
  }
  v7 = 0;
  v8 = a3;
  if ( a1 )
  {
    v9 = a3;
    do
    {
      *(_DWORD *)(v5 + 4 * v7++) = *v9;
      v9 += 3;
    }
    while ( v7 < a1 );
  }
  sub_10015A80(v5, a1, 0);
  v10 = 0;
  if ( a1 )
  {
    v11 = a3 + 1;
    do
    {
      *(_DWORD *)(v5 + 4 * v10++) = *v11;
      v11 += 3;
    }
    while ( v10 < a1 );
  }
  sub_10015A80(v5, a1, 0);
  v12 = sub_10014910();
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 12))(v12, v5);
  v13 = v27;
  v14 = a3[3 * *v27];
  v22 = a3[3 * *v27 + 1];
  v15 = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v18 = v8[3 * *v13 + 2];
      v19 = &v8[3 * *v13];
      v20 = *v19;
      v21 = v19[1];
      ++v13;
      --a1;
      v23 = v21;
      if ( v20 == v14 && v21 == v22 )
      {
        *(&v24 + v15++) = v18;
        if ( v15 == 3 )
        {
          v17 = sub_10013710(
                  "Adjacencies::CreateDatabase: can't work on non-manifold meshes.",
                  (int)"g:\\scm\\release\\PhysX_2.8.0\\novodex\\SDKs\\Core\\Common\\src\\IceAdjacencies.cpp",
                  786);
          goto LABEL_12;
        }
      }
      else
      {
        if ( v15 == 2 && !sub_1000F030(v24, v25, v14, v22, a2) )
        {
          sub_100159A0(v26);
          return 0;
        }
        v24 = v18;
        v15 = 1;
        v14 = v20;
        v22 = v23;
      }
      if ( !a1 )
        break;
      v8 = a3;
    }
  }
  v16 = 1;
  if ( v15 == 2 )
  {
    v17 = sub_1000F030(v24, v25, v14, v22, a2);
LABEL_12:
    v16 = v17;
  }
  sub_100159A0(v26);
  return v16;
}
