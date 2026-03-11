/*
 * func-name: ?ApplyForce@PhysicsParticles@@UAEXVVector@@M_N@Z_0
 * func-address: 0x100b9f10
 * callers: 0x1000a146
 * callees: none
 */

void __thiscall PhysicsParticles::ApplyForce(int this, float a2, float a3, float a4, float a5, char a6)
{
  BOOL v7; // ebp
  unsigned int v8; // edi
  bool v9; // cc
  int v10; // ebx
  int v11; // eax
  int v12; // eax
  float v13[3]; // [esp+Ch] [ebp-Ch] BYREF
  float v14; // [esp+2Ch] [ebp+14h]

  v7 = a6 != 0;
  v8 = 0;
  v9 = *(_DWORD *)(this + 204) <= 0;
  v14 = *(float *)(this + 372) * a5;
  v13[0] = a2 * v14;
  v13[1] = a3 * v14;
  v13[2] = v14 * a4;
  if ( !v9 )
  {
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)(this + 192);
      if ( !v11 || v8 >= (*(_DWORD *)(this + 196) - v11) / 96 )
        _invalid_parameter_noinfo();
      v12 = v10 + *(_DWORD *)(this + 192);
      if ( *(_DWORD *)(v12 + 92) )
        (*(void (__thiscall **)(_DWORD, float *, BOOL, int))(**(_DWORD **)(v12 + 92) + 288))(
          *(_DWORD *)(v12 + 92),
          v13,
          v7,
          1);
      ++v8;
      v10 += 96;
    }
    while ( (signed int)v8 < *(_DWORD *)(this + 204) );
  }
}
