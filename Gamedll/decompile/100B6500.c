/*
 * func-name: ?CalculateAverageDirections@ParticleTrail@@IAEXXZ_0
 * func-address: 0x100b6500
 * callers: 0x10016761
 * callees: 0x100029cd
 */

void __thiscall ParticleTrail::CalculateAverageDirections(ParticleTrail *this)
{
  int v1; // esi
  int v2; // edi
  float *v3; // ebx
  float v4; // eax
  float v5; // ecx
  float v6; // edx
  float v7; // [esp+Ch] [ebp-24h]
  float v8; // [esp+10h] [ebp-20h]
  float v9; // [esp+14h] [ebp-1Ch]
  float v10; // [esp+18h] [ebp-18h]
  float v11; // [esp+1Ch] [ebp-14h]
  float v12; // [esp+20h] [ebp-10h]
  float v13; // [esp+24h] [ebp-Ch]
  float v14; // [esp+28h] [ebp-8h]
  float v15; // [esp+2Ch] [ebp-4h]

  if ( *((int *)this + 62) > 1 )
  {
    v1 = *((_DWORD *)this + 60);
    v2 = *(_DWORD *)(v1 + 4);
    v3 = 0;
    do
    {
      v7 = *(float *)(v2 + 8) - *(float *)(v1 + 8);
      v8 = *(float *)(v2 + 12) - *(float *)(v1 + 12);
      v9 = *(float *)(v2 + 16) - *(float *)(v1 + 16);
      sub_100029CD();
      v4 = v7;
      v5 = v8;
      v6 = v9;
      *(float *)(v1 + 52) = v7;
      *(float *)(v1 + 56) = v8;
      *(float *)(v1 + 60) = v9;
      if ( v3 )
      {
        v10 = v3[13] + *(float *)(v1 + 52);
        v11 = v3[14] + *(float *)(v1 + 56);
        v12 = v3[15] + *(float *)(v1 + 60);
        v13 = v10 * 0.5;
        v4 = v13;
        v14 = v11 * 0.5;
        v5 = v14;
        v15 = 0.5 * v12;
        v6 = v15;
      }
      *(float *)(v1 + 64) = v4;
      *(float *)(v1 + 68) = v5;
      *(float *)(v1 + 72) = v6;
      v3 = (float *)v1;
      v1 = v2;
      if ( !v2 )
        break;
      v2 = *(_DWORD *)(v2 + 4);
    }
    while ( v2 );
    *(float *)(v1 + 52) = v3[13];
    *(float *)(v1 + 56) = v3[14];
    *(float *)(v1 + 60) = v3[15];
    *(float *)(v1 + 64) = v3[13];
    *(float *)(v1 + 68) = v3[14];
    *(float *)(v1 + 72) = v3[15];
  }
}
