/*
 * func-name: ?ApplyForceFrom@PhysicsParticles@@UAEXVVector@@M_N1@Z_0
 * func-address: 0x100ba1d0
 * callers: 0x10016aae
 * callees: 0x102c9dbc
 */

void __thiscall PhysicsParticles::ApplyForceFrom(int this, float a2, float a3, float a4, float a5, char a6, int a7)
{
  int v7; // ebx
  unsigned int v9; // ebp
  int v10; // eax
  int v11; // esi
  double v12; // st7
  float i; // [esp+10h] [ebp-10h]
  float v14; // [esp+14h] [ebp-Ch]
  float v15; // [esp+18h] [ebp-8h] BYREF
  float v16; // [esp+1Ch] [ebp-4h]
  float retaddr; // [esp+20h] [ebp+0h]
  float v18; // [esp+30h] [ebp+10h]
  float v19; // [esp+38h] [ebp+18h]
  float v20; // [esp+38h] [ebp+18h]
  float v21; // [esp+3Ch] [ebp+1Ch]
  float v22; // [esp+3Ch] [ebp+1Ch]

  v7 = 0;
  v9 = 0;
  for ( i = *(float *)(this + 372) * a5; (signed int)v9 < *(_DWORD *)(this + 204); v7 += 96 )
  {
    v10 = *(_DWORD *)(this + 192);
    if ( !v10 || v9 >= (*(_DWORD *)(this + 196) - v10) / 96 )
      _invalid_parameter_noinfo();
    v11 = v7 + *(_DWORD *)(this + 192);
    if ( *(_DWORD *)(v11 + 92) )
    {
      if ( a6 )
      {
        v19 = *(float *)(v11 + 4) - a3;
        v18 = *(float *)(v11 + 8) - a4;
        v12 = *(float *)v11 - a2;
      }
      else
      {
        v19 = a3 - *(float *)(v11 + 4);
        v18 = a4 - *(float *)(v11 + 8);
        v12 = a2 - *(float *)v11;
      }
      v14 = v12;
      v15 = v19;
      v16 = v18;
      v20 = v19 * v19 + v14 * v14 + v18 * v18;
      v21 = sqrt(v20);
      if ( v21 != 0.0 )
      {
        v22 = v14 / v21;
        v15 = v22 * v15;
        v16 = v22 * v16;
        retaddr = v22 * retaddr;
      }
      (*(void (__thiscall **)(_DWORD, float *, float))(**(_DWORD **)(v11 + 92) + 288))(
        *(_DWORD *)(v11 + 92),
        &v15,
        COERCE_FLOAT(LODWORD(i)));
    }
    ++v9;
  }
}
