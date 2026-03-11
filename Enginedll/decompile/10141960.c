/*
 * func-name: ?_generateCylinder@NxPhysics@@AAEPAVNxConvexMesh@@MMI@Z
 * func-address: 0x10141960
 * callers: 0x10142950
 * callees: 0x101490e0, 0x10149100, 0x10149230, 0x10149250, 0x101a24ac, 0x101a253a, 0x101a281a, 0x101a2820
 */

struct NxConvexMesh *__thiscall NxPhysics::_generateCylinder(NxPhysics *this, float a2, float a3, unsigned int a4)
{
  unsigned int v5; // ebx
  char *v6; // eax
  int v7; // esi
  unsigned int v8; // ebp
  float *v9; // esi
  double v10; // st7
  int v11; // eax
  int v12; // ecx
  int (__thiscall *v13)(int, int); // eax
  int v15; // [esp-4h] [ebp-64h]
  float v16; // [esp+10h] [ebp-50h]
  float v17; // [esp+10h] [ebp-50h]
  char *v18; // [esp+14h] [ebp-4Ch]
  float v19; // [esp+18h] [ebp-48h]
  float v20[2]; // [esp+1Ch] [ebp-44h] BYREF
  NxPhysics *v21; // [esp+24h] [ebp-3Ch]
  _BYTE v22[12]; // [esp+28h] [ebp-38h] BYREF
  unsigned int v23; // [esp+34h] [ebp-2Ch]
  _DWORD v24[7]; // [esp+38h] [ebp-28h] BYREF
  int v25; // [esp+5Ch] [ebp-4h]
  signed int v26; // [esp+6Ch] [ebp+Ch]
  float v27; // [esp+6Ch] [ebp+Ch]
  float v28; // [esp+6Ch] [ebp+Ch]
  float v29; // [esp+6Ch] [ebp+Ch]

  v21 = this;
  v5 = 2 * a4;
  v6 = (char *)operator new(24 * a4);
  v7 = 0;
  v8 = 0;
  v18 = v6;
  v26 = 0;
  if ( a4 )
  {
    v9 = (float *)(v6 + 8);
    v20[0] = -a3;
    do
    {
      v19 = (float)a4;
      v27 = (double)v26 * 6.283185482025146 / v19;
      v16 = cos(v27);
      v17 = v16 * a2;
      *(v9 - 2) = v17;
      *(v9 - 1) = a3;
      v28 = sin(v27);
      ++v8;
      v9 += 6;
      v29 = v28 * a2;
      v10 = v29;
      v26 = v8;
      *(v9 - 6) = v10;
      *(v9 - 5) = v17;
      *(v9 - 4) = v20[0];
      *(v9 - 3) = v10;
    }
    while ( v8 < a4 );
    v7 = 0;
  }
  v24[1] = 0;
  v24[3] = 0;
  v24[5] = 0;
  v24[0] = v5;
  v24[2] = 12;
  v24[4] = v6;
  v24[6] = 4;
  sub_101490E0(v22);
  v25 = 0;
  if ( (unsigned __int8)NxCookConvexMesh(v24, v22) )
  {
    v11 = std::locale::facet::facet((std::locale::facet *)v20, v23);
    v12 = *((_DWORD *)v21 + 2);
    v15 = v11;
    v13 = *(int (__thiscall **)(int, int))(*(_DWORD *)v12 + 72);
    LOBYTE(v25) = 1;
    v7 = v13(v12, v15);
    LOBYTE(v25) = 0;
    sub_10149250(v20);
  }
  if ( v18 )
    operator delete[](v18);
  v25 = -1;
  sub_10149100(v22);
  return (struct NxConvexMesh *)v7;
}
