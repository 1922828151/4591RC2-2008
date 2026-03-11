/*
 * func-name: ?Cast@ARepair@GameClient@@UAEXM@Z_0
 * func-address: 0x101d01c0
 * callers: 0x10019d62
 * callees: 0x10005c40
 */

void __thiscall GameClient::ARepair::Cast(GameClient::ARepair *this, float a2)
{
  int v3; // ecx
  int v4; // eax
  double v5; // st6
  double v6; // st7
  double v7; // st6
  int v8; // eax
  float v9; // [esp+Ch] [ebp-14h]
  float v10; // [esp+14h] [ebp-Ch]
  float v11; // [esp+18h] [ebp-8h]
  float v12; // [esp+1Ch] [ebp-4h]
  float v13; // [esp+1Ch] [ebp-4h]

  v3 = *((_DWORD *)this + 8);
  if ( v3 )
  {
    v4 = *((_DWORD *)this + 2);
    v12 = (float)*(int *)(v4 + 264);
    v5 = v12;
    v6 = a2;
    v13 = *(float *)(v4 + 268) * v12 * a2;
    v11 = *(float *)(v4 + 272) * v5 * a2;
    v7 = v5 * *(float *)(v4 + 276);
    v8 = *(_DWORD *)(v3 + 112);
    if ( v8 == 1 || v8 == 4 || v8 == 8 || v8 == 16 )
    {
      v10 = v7 * a2;
      (*(void (__thiscall **)(int, float, float, _DWORD))(*(_DWORD *)(v3 + 148) + 20))(
        v3 + 148,
        COERCE_FLOAT(LODWORD(v13)),
        COERCE_FLOAT(LODWORD(v11)),
        LODWORD(v10));
      v6 = a2;
    }
    v9 = v6;
    GameClient::Aura::Cast(this, v9);
  }
}
