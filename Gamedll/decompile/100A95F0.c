/*
 * func-name: ?PostRender@Laser@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100a95f0
 * callers: 0x100077ca
 * callees: 0x100029cd, 0x102c09f0
 */

void __thiscall Laser::PostRender(Laser *this, struct Camera *a2)
{
  double v3; // st7
  double v4; // st7
  int v5; // eax
  float v6; // eax
  double v7; // st5
  double v8; // st2
  int v9; // eax
  int BatchForWriting; // eax
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // eax
  int v14; // ebp
  char *v15; // edi
  int v16; // eax
  double v17; // st7
  char *v18; // eax
  bool v19; // zf
  int v20; // eax
  float v21; // [esp+8h] [ebp-Ch] BYREF
  int v22; // [esp+Ch] [ebp-8h]
  int v23; // [esp+10h] [ebp-4h]
  float v24; // [esp+18h] [ebp+4h]
  float v25; // [esp+18h] [ebp+4h]
  struct Camera *v26; // [esp+18h] [ebp+4h]

  v21 = *((float *)a2 + 88) - *((float *)this + 55);
  *(float *)&v22 = *((float *)a2 + 89) - *((float *)this + 56);
  v3 = *((float *)a2 + 90) - *((float *)this + 57);
  Laser::CameraVector = LODWORD(v21);
  dword_103B54CC = v22;
  *(float *)&v23 = v3;
  dword_103B54D0 = v23;
  v21 = *((float *)this + 58) - *((float *)this + 55);
  *(float *)&v22 = *((float *)this + 59) - *((float *)this + 56);
  v4 = *((float *)this + 60) - *((float *)this + 57);
  Laser::LaserVector = LODWORD(v21);
  *(float *)&v23 = v4;
  dword_103B54D8 = v22;
  dword_103B54DC = v23;
  v5 = sub_102C09F0(&v21, &Laser::CameraVector, &Laser::LaserVector);
  Laser::StartRight = *(_DWORD *)v5;
  dword_103B54E4 = *(_DWORD *)(v5 + 4);
  v6 = *(float *)(v5 + 8);
  v21 = -Laser::StartRight;
  dword_103B54E8 = LODWORD(v6);
  *(float *)&v22 = -*(float *)&dword_103B54E4;
  Laser::StartLeft = LODWORD(v21);
  *(float *)&v23 = -v6;
  dword_103B54F0 = v22;
  dword_103B54F4 = v23;
  sub_100029CD();
  sub_100029CD();
  v24 = *((float *)this + 62);
  Laser::StartLeft = Laser::StartLeft * v24;
  *(float *)&dword_103B54F0 = *(float *)&dword_103B54F0 * v24;
  *(float *)&dword_103B54F4 = v24 * *(float *)&dword_103B54F4;
  v25 = *((float *)this + 62);
  Laser::StartRight = Laser::StartRight * v25;
  *(float *)&dword_103B54E4 = *(float *)&dword_103B54E4 * v25;
  *(float *)&dword_103B54E8 = v25 * *(float *)&dword_103B54E8;
  v21 = *((float *)this + 58) + Laser::StartLeft;
  *(float *)&v22 = *((float *)this + 59) + *(float *)&dword_103B54F0;
  v7 = *((float *)this + 60);
  Laser::EndLeft = LODWORD(v21);
  dword_103B5508 = v22;
  *(float *)&v23 = v7 + *(float *)&dword_103B54F4;
  dword_103B550C = v23;
  v21 = *((float *)this + 58) + Laser::StartRight;
  *(float *)&v22 = *((float *)this + 59) + *(float *)&dword_103B54E4;
  v8 = *((float *)this + 60);
  Laser::EndRight = LODWORD(v21);
  dword_103B54FC = v22;
  *(float *)&v23 = v8 + *(float *)&dword_103B54E8;
  dword_103B5500 = v23;
  Laser::StartLeft = Laser::StartLeft + *((float *)this + 55);
  *(float *)&dword_103B54F0 = *(float *)&dword_103B54F0 + *((float *)this + 56);
  *(float *)&dword_103B54F4 = *(float *)&dword_103B54F4 + *((float *)this + 57);
  Laser::StartRight = Laser::StartRight + *((float *)this + 55);
  *(float *)&dword_103B54E4 = *(float *)&dword_103B54E4 + *((float *)this + 56);
  *(float *)&dword_103B54E8 = *(float *)&dword_103B54E8 + *((float *)this + 57);
  v9 = *((_DWORD *)this + 63);
  if ( v9 )
  {
    BatchForWriting = FXManager::getBatchForWriting(this, v9, *((_DWORD *)this + 44));
  }
  else
  {
    if ( !*(_DWORD *)(*((_DWORD *)this + 64) + 152) )
      return;
    BatchForWriting = FXManager::getBatchForWriting(this, *((struct Material **)this + 64));
  }
  v11 = BatchForWriting;
  if ( BatchForWriting != -1 )
  {
    v12 = FXManager::batchedQuads[0];
    v13 = FXManager::batchedQuads[1];
    if ( !v13 || v11 >= (FXManager::batchedQuads[2] - v13) / 20 )
    {
      _invalid_parameter_noinfo();
      v12 = FXManager::batchedQuads[0];
    }
    v14 = 20 * v11;
    v15 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v11 + 12);
    v26 = (struct Camera *)(v12 + 4);
    v16 = *(_DWORD *)(v12 + 4);
    if ( !v16 || v11 >= (*(_DWORD *)(v12 + 8) - v16) / 20 )
      _invalid_parameter_noinfo();
    v17 = 0.0;
    v18 = &v15[96 * *(_DWORD *)(*(_DWORD *)v26 + v14 + 16)];
    *((_DWORD *)v18 + 3) = *((_DWORD *)this + 61);
    *(_DWORD *)v18 = Laser::StartLeft;
    *((_DWORD *)v18 + 1) = dword_103B54F0;
    *((_DWORD *)v18 + 2) = dword_103B54F4;
    *((_DWORD *)v18 + 9) = *((_DWORD *)this + 61);
    *((_DWORD *)v18 + 6) = Laser::StartRight;
    *((_DWORD *)v18 + 7) = dword_103B54E4;
    *((_DWORD *)v18 + 8) = dword_103B54E8;
    *((_DWORD *)v18 + 15) = *((_DWORD *)this + 61);
    *((_DWORD *)v18 + 12) = Laser::EndLeft;
    *((_DWORD *)v18 + 13) = dword_103B5508;
    *((_DWORD *)v18 + 14) = dword_103B550C;
    *((_DWORD *)v18 + 21) = *((_DWORD *)this + 61);
    *((_DWORD *)v18 + 18) = Laser::EndRight;
    *((_DWORD *)v18 + 19) = dword_103B54FC;
    *((_DWORD *)v18 + 20) = dword_103B5500;
    v19 = *((_DWORD *)this + 63) == 0;
    *((float *)v18 + 4) = 0.0;
    if ( v19 )
    {
      *((float *)v18 + 5) = 1.0;
      *((float *)v18 + 10) = 1.0;
      *((float *)v18 + 11) = 1.0;
      *((float *)v18 + 22) = 1.0;
      *((float *)v18 + 16) = 0.0;
      *((float *)v18 + 17) = 0.0;
    }
    else
    {
      *((float *)v18 + 5) = *(float *)(*((_DWORD *)this + 63) + 72) + *(float *)(*((_DWORD *)this + 63) + 64);
      *((float *)v18 + 10) = *(float *)(*((_DWORD *)this + 63) + 68);
      *((float *)v18 + 11) = *(float *)(*((_DWORD *)this + 63) + 72) + *(float *)(*((_DWORD *)this + 63) + 64);
      *((float *)v18 + 16) = 0.0;
      *((float *)v18 + 17) = *(float *)(*((_DWORD *)this + 63) + 64);
      *((float *)v18 + 22) = *(float *)(*((_DWORD *)this + 63) + 68);
      v17 = *(float *)(*((_DWORD *)this + 63) + 64);
    }
    *((float *)v18 + 23) = v17;
    v20 = FXManager::batchedQuads[1];
    if ( !v20 || v11 >= (FXManager::batchedQuads[2] - v20) / 20 )
      _invalid_parameter_noinfo();
    ++*(_DWORD *)(FXManager::batchedQuads[1] + v14 + 16);
  }
}
