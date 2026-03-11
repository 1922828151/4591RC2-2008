/*
 * func-name: ?StartShake@Equip@GameClient@@UAEXXZ_0
 * func-address: 0x10159270
 * callers: 0x10017ce2
 * callees: none
 */

void __thiscall GameClient::Equip::StartShake(GameClient::Equip *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 2);
  if ( *(float *)(v1 + 356) > 0.0 && *(float *)(v1 + 352) > 0.0 )
  {
    if ( *((_BYTE *)this + 244) )
      *((float *)this + 60) = 0.0;
    *((_BYTE *)this + 244) = 1;
  }
}
