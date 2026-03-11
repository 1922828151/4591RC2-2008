/*
 * func-name: sub_100D8E50
 * func-address: 0x100d8e50
 * callers: 0x10013caf
 * callees: none
 */

void __thiscall sub_100D8E50(int *this)
{
  Light *Light; // eax
  struct LightState *v3; // eax
  int v4; // esi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edx
  Light *v13; // ecx
  struct LightState *CurrentState; // eax
  int v15; // esi
  _DWORD *v16; // eax
  int v17; // ecx
  int v18; // eax
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // eax
  _DWORD v23[7]; // [esp-20h] [ebp-4Ch] BYREF
  int v24; // [esp-4h] [ebp-30h] BYREF
  float v25; // [esp+0h] [ebp-2Ch]
  float v26; // [esp+4h] [ebp-28h]
  float v27; // [esp+8h] [ebp-24h]
  float v28; // [esp+Ch] [ebp-20h]
  float v29; // [esp+10h] [ebp-1Ch]
  int v30; // [esp+14h] [ebp-18h]
  int *v31; // [esp+28h] [ebp-4h]

  if ( *((_BYTE *)this + 1272) )
  {
    if ( byte_103B80F1 )
      goto LABEL_27;
  }
  else
  {
    if ( byte_103B80F1 )
      goto LABEL_5;
    if ( !*((_BYTE *)this + 1052) )
    {
LABEL_14:
      if ( !*((_BYTE *)this + 441) )
        goto LABEL_27;
      v13 = (Light *)this[271];
      *((_BYTE *)this + 724) = 1;
      this[183] = 2;
      if ( v13 )
      {
        CurrentState = Light::GetCurrentState(v13);
        v15 = this[271];
        this[309] = *((int *)CurrentState + 4);
        qmemcpy(this + 319, (const void *)(v15 + 868), 0x40u);
        v16 = (_DWORD *)this[271];
        v17 = v16[214];
        v16 += 214;
        this[331] = v17;
        this[332] = v16[1];
        this[333] = v16[2];
      }
      v18 = this[279];
      if ( v18 )
      {
        qmemcpy(this + 335, (const void *)(v18 + 868), 0x40u);
        v19 = (_DWORD *)this[279];
        v20 = v19[214];
        v19 += 214;
        this[347] = v20;
        this[348] = v19[1];
        this[349] = v19[2];
      }
      qmemcpy(this + 351, this + 217, 0x40u);
      v21 = this[215];
      v22 = this[216];
      this[363] = this[214];
      this[364] = v21;
      this[365] = v22;
      goto LABEL_20;
    }
    if ( !*((_BYTE *)this + 441) )
    {
LABEL_5:
      *((_BYTE *)this + 1272) = 1;
      this[182] = 2;
      *((_BYTE *)this + 724) = 0;
      if ( std::string::length(this + 264) )
      {
        v31 = &v24;
        std::string::string(&v24, this + 264);
        Light = (Light *)World::FindLight(
                           this[178],
                           v24,
                           LODWORD(v25),
                           LODWORD(v26),
                           LODWORD(v27),
                           LODWORD(v28),
                           LODWORD(v29),
                           v30);
        this[271] = (int)Light;
        if ( Light )
        {
          v3 = Light::GetCurrentState(Light);
          v4 = this[271];
          this[309] = *((int *)v3 + 4);
          qmemcpy(this + 319, (const void *)(v4 + 868), 0x40u);
          v5 = (_DWORD *)this[271];
          v6 = v5[214];
          v5 += 214;
          this[331] = v6;
          this[332] = v5[1];
          this[333] = v5[2];
        }
      }
      if ( std::string::length(this + 272) )
      {
        v31 = &v24;
        std::string::string(&v24, this + 272);
        v7 = World::FindLight(this[178], v24, LODWORD(v25), LODWORD(v26), LODWORD(v27), LODWORD(v28), LODWORD(v29), v30);
        this[279] = v7;
        if ( v7 )
        {
          qmemcpy(this + 335, (const void *)(v7 + 868), 0x40u);
          v8 = (_DWORD *)this[279];
          v9 = v8[214];
          v8 += 214;
          this[347] = v9;
          this[348] = v8[1];
          this[349] = v8[2];
        }
      }
      qmemcpy(this + 351, this + 217, 0x40u);
      v10 = this[215];
      v11 = this[216];
      this[363] = this[214];
      this[364] = v10;
      v12 = *this;
      this[365] = v11;
      (*(void (__thiscall **)(int *))(v12 + 108))(this);
LABEL_20:
      if ( byte_103B80F1 )
        goto LABEL_27;
      goto LABEL_21;
    }
  }
  if ( !*((_BYTE *)this + 1052) )
    goto LABEL_14;
LABEL_21:
  if ( *((_BYTE *)this + 441) )
  {
    if ( (unsigned __int8)std::operator!=<char>(this + 283, this + 290) )
    {
      if ( this[367] )
      {
        v30 = 0;
        v29 = 0.0;
        v28 = 1.0;
        v27 = 1.0;
        v26 = 0.0;
        v25 = 0.0;
        v24 = 0;
        v31 = v23;
        std::string::string(v23, this + 283);
        Texture::Load(
          this[367] + 356,
          v23[0],
          v23[1],
          v23[2],
          v23[3],
          v23[4],
          v23[5],
          v23[6],
          v24,
          LODWORD(v25),
          LODWORD(v26),
          LODWORD(v27),
          LODWORD(v28),
          LODWORD(v29),
          v30);
      }
      std::string::operator=(this + 290, this + 283);
    }
    this[304] = World::FindActor(this[178], this + 297);
  }
LABEL_27:
  Actor::Tick((Actor *)this);
}
