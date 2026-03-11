/*
 * func-name: ?UpdateFades@SkyController@@AAEXM@Z
 * func-address: 0x1012d370
 * callers: 0x1012de10, 0x1012e1d0
 * callees: 0x1000b770, 0x1012d070, 0x101372b0
 */

void __thiscall SkyController::UpdateFades(SkyController *this, float a2)
{
  double v2; // st7
  float *v4; // edx
  float *v5; // ecx
  int v6; // edi
  double v7; // st4
  double v8; // st6
  double v9; // st5
  double v10; // st6
  double v11; // rt1
  double v12; // st5
  double v13; // st7
  double v14; // st7
  float *v15; // ecx
  float v16; // ebx
  double v17; // st7
  float *v18; // edx
  float v19; // ebx
  float v20; // [esp+1Ch] [ebp-2Ch]
  float v21; // [esp+1Ch] [ebp-2Ch]
  float v22; // [esp+1Ch] [ebp-2Ch]
  float v23; // [esp+1Ch] [ebp-2Ch]
  float v24; // [esp+20h] [ebp-28h]
  float v25; // [esp+20h] [ebp-28h]
  float v26; // [esp+24h] [ebp-24h]
  float v27; // [esp+28h] [ebp-20h] BYREF
  float v28; // [esp+2Ch] [ebp-1Ch]
  float v29; // [esp+30h] [ebp-18h]
  float v30; // [esp+34h] [ebp-14h]
  float v31; // [esp+38h] [ebp-10h]
  float v32; // [esp+3Ch] [ebp-Ch]
  float v33; // [esp+40h] [ebp-8h]
  float v34; // [esp+4Ch] [ebp+4h]
  float v35; // [esp+4Ch] [ebp+4h]
  float v36; // [esp+4Ch] [ebp+4h]
  float v37; // [esp+4Ch] [ebp+4h]

  v2 = a2;
  v4 = (float *)((char *)this + 1064);
  v5 = (float *)((char *)this + 3832);
  v6 = 36;
  do
  {
    if ( *(_BYTE *)v5 )
    {
      v34 = v2;
      v20 = v5[2] + v2;
      v5[2] = v20;
      v7 = v5[3];
      if ( v7 > v20 )
      {
        v8 = v5[3];
      }
      else
      {
        *(_BYTE *)v5 = 0;
        v8 = v7;
        v34 = v2 - (v20 - v7);
      }
      *v4 = v34 / v8 * v5[1] + *v4;
    }
    ++v4;
    v5 += 4;
    --v6;
  }
  while ( v6 );
  if ( *((_BYTE *)this + 3724) )
  {
    v35 = v2;
    v21 = *((float *)this + 939) + v2;
    *((float *)this + 939) = v21;
    v9 = *((float *)this + 938);
    if ( v9 > v21 )
    {
      v13 = *((float *)this + 938);
    }
    else
    {
      v10 = v21 - v9;
      *((_BYTE *)this + 3724) = 0;
      v11 = v9;
      v12 = v2;
      v13 = v11;
      v35 = v12 - v10;
    }
    v14 = v35 / v13;
    *((float *)this + 943) = *((float *)this + 932) * v14 + *((float *)this + 943);
    *((float *)this + 944) = *((float *)this + 933) * v14 + *((float *)this + 944);
    *((float *)this + 945) = *((float *)this + 934) * v14 + *((float *)this + 945);
    *((float *)this + 941) = *((float *)this + 935) * v14 + *((float *)this + 941);
    *((float *)this + 940) = *((float *)this + 936) * v14 + *((float *)this + 940);
    *((float *)this + 942) = v14 * *((float *)this + 937) + *((float *)this + 942);
  }
  if ( *((float *)this + 947) > 0.0000000099999999 )
  {
    v31 = *((float *)this + 943);
    v32 = *((float *)this + 944);
    v33 = *((float *)this + 945);
    v36 = *((float *)this + 941);
    v24 = *((float *)this + 940);
    v26 = *((float *)this + 942);
    v27 = 0.0;
    v28 = 0.0;
    v29 = 0.0;
    SkyController::GetBiasFogColor(this, (struct Vector *)&v27);
    v15 = (float *)*((_DWORD *)this + 318);
    v16 = *v15;
    v31 = v27 * v31;
    LODWORD(v27) = (char *)this + 1268;
    v17 = v28;
    v28 = v16;
    v32 = v17 * v32;
    v33 = v29 * v33;
    v22 = 1.0;
    if ( (float *)LODWORD(v16) != v15 )
    {
      if ( LODWORD(v16) == *((_DWORD *)this + 318) )
        invalid_parameter_noinfo();
      v22 = *(float *)(LODWORD(v16) + 40);
      sub_1000B770(&v27);
    }
    v18 = (float *)*((_DWORD *)this + 321);
    v37 = v22 * v36;
    v28 = *v18;
    v19 = v28;
    LODWORD(v27) = (char *)this + 1280;
    v23 = 1.0;
    if ( (float *)LODWORD(v28) != v18 )
    {
      if ( LODWORD(v28) == *((_DWORD *)this + 321) )
        invalid_parameter_noinfo();
      v23 = *(float *)(LODWORD(v19) + 40);
      sub_1000B770(&v27);
    }
    v27 = v31;
    v28 = v32;
    v29 = v33;
    v30 = 1.0;
    v25 = v23 * v24;
    World::SetFog(
      *((_DWORD *)this + 178),
      LODWORD(v31),
      LODWORD(v32),
      LODWORD(v33),
      1.0,
      LODWORD(v37),
      LODWORD(v26),
      LODWORD(v25));
  }
}
