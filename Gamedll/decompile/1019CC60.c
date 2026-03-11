/*
 * func-name: ?OnCreate@ControlledEstab@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x1019cc60
 * callers: 0x10004ea8
 * callees: 0x10004af7, 0x10007ab8, 0x100183ae, 0x10019e57, 0x102c9d98
 */

char __thiscall GameClient::ControlledEstab::OnCreate(
        GameClient::ControlledEstab *this,
        struct GameClient::Flyweight *a2)
{
  int v3; // eax
  int v4; // edx
  int v5; // eax

  GameClient::Establishment::OnCreate(this, a2);
  (*(void (__thiscall **)(GameClient::ControlledEstab *, struct GameClient::Flyweight *))(*(_DWORD *)this + 20))(
    this,
    a2);
  if ( operator new(0x80u) )
    v3 = sub_10007AB8((int)this, *(float *)(*((_DWORD *)this + 115) + 708));
  else
    v3 = 0;
  v4 = *((_DWORD *)this + 115);
  *((_DWORD *)this + 117) = v3;
  if ( *(_BYTE *)(v4 + 744) )
  {
    if ( operator new(0x80u) )
      v5 = sub_100183AE((int)this, *(float *)(*((_DWORD *)this + 115) + 748));
    else
      v5 = 0;
    *((_DWORD *)this + 118) = v5;
  }
  GameClient::ControlledEstab::SetCurrentTransState(0);
  return 1;
}
