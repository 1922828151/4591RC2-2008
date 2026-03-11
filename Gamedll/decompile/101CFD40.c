/*
 * func-name: ?Update@AMovement@GameClient@@UAEXM@Z_0
 * func-address: 0x101cfd40
 * callers: 0x1000c149
 * callees: 0x1000c329
 */

void __thiscall GameClient::AMovement::Update(GameClient::AMovement *this, float a2)
{
  int v2; // edx

  if ( !*((_DWORD *)this + 5) )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 )
    {
      if ( *(_DWORD *)(v2 + 112) == 1
        && !*(_BYTE *)(*((_DWORD *)this + 2) + 260)
        && *(float *)(v2 + 332) > 0.1000000014901161 )
      {
        *(float *)(v2 + 756) = *(float *)(v2 + 332);
      }
    }
  }
  GameClient::Aura::Update(this, a2);
}
