/*
 * func-name: ?UpdateParticle@ParticleTrail@@IAE_NPAVParticleTrailNode@@M@Z_0
 * func-address: 0x100b6610
 * callers: 0x1001abf9
 * callees: none
 */

char __thiscall ParticleTrail::UpdateParticle(ParticleTrail *this, struct ParticleTrailNode *a2, float a3)
{
  char result; // al
  int v5; // esi
  float v6; // [esp+4h] [ebp-Ch]
  float v7; // [esp+4h] [ebp-Ch]
  float v8; // [esp+8h] [ebp-8h]
  float v9; // [esp+8h] [ebp-8h]
  float v10; // [esp+Ch] [ebp-4h]
  float v11; // [esp+Ch] [ebp-4h]
  float v12; // [esp+14h] [ebp+4h]

  if ( *((float *)a2 + 10) <= 0.0 )
    return 1;
  if ( *((float *)this + 77) > (double)*((float *)a2 + 10) )
  {
    v5 = *((_DWORD *)a2 + 8) & 0xFFFFFF;
    v12 = *((float *)a2 + 10) / *((float *)this + 77);
    *((float *)a2 + 9) = v12;
    *((_DWORD *)a2 + 8) = v5 | ((unsigned __int8)(int)(v12 * 255.0) << 24);
  }
  result = 0;
  v6 = *((float *)a2 + 5) * a3;
  v8 = *((float *)a2 + 6) * a3;
  v10 = *((float *)a2 + 7) * a3;
  *((float *)a2 + 2) = *((float *)a2 + 2) + v6;
  *((float *)a2 + 3) = *((float *)a2 + 3) + v8;
  *((float *)a2 + 4) = *((float *)a2 + 4) + v10;
  v7 = a3 * *((float *)this + 70);
  v9 = *((float *)this + 71) * a3;
  v11 = *((float *)this + 72) * a3;
  *((float *)a2 + 5) = *((float *)a2 + 5) + v7;
  *((float *)a2 + 6) = *((float *)a2 + 6) + v9;
  *((float *)a2 + 7) = v11 + *((float *)a2 + 7);
  *((float *)a2 + 10) = *((float *)a2 + 10) - a3;
  return result;
}
