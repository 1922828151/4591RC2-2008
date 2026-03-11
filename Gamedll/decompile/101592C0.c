/*
 * func-name: ?PlayShake@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x101592c0
 * callers: 0x100175d5
 * callees: 0x100029cd
 */

void __thiscall GameClient::Equip::PlayShake(GameClient::Equip *this)
{
  int v2; // eax
  int v3; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st7
  float v7; // [esp+4h] [ebp-10h]
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+4h] [ebp-10h]
  float v10; // [esp+8h] [ebp-Ch]
  float v11; // [esp+8h] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-8h]
  float v13; // [esp+Ch] [ebp-8h]
  float v14; // [esp+10h] [ebp-4h]

  if ( *((_BYTE *)this + 244) )
  {
    v10 = (float)-(rand() % 100);
    v2 = rand();
    *((float *)this + 57) = v10;
    v12 = (float)(v2 % 200 - 100);
    *((float *)this + 58) = v12;
    *((float *)this + 59) = 0.0;
    sub_100029CD();
    v3 = *((_DWORD *)this + 2);
    v7 = *(float *)(v3 + 352) * GDeltaTime + *((float *)this + 60);
    v4 = v7;
    *((float *)this + 60) = v7;
    v8 = *(float *)(v3 + 356);
    if ( v8 <= v4 )
    {
      v5 = v8 + v8;
      if ( v5 <= v4 )
      {
        *((_BYTE *)this + 244) = 0;
        v4 = 0.0;
        *((float *)this + 60) = 0.0;
      }
      else
      {
        v4 = v5 - *((float *)this + 60);
      }
    }
    v9 = v4;
    v11 = *((float *)this + 57) * v9;
    v13 = *((float *)this + 58) * v9;
    v6 = v9 * *((float *)this + 59);
    *((float *)this + 54) = v11;
    *((float *)this + 55) = v13;
    v14 = v6;
    *((float *)this + 56) = v14;
  }
}
