/*
 * func-name: ?UpdateWeaponInput@Seat@GameClient@@QAEXXZ_0
 * func-address: 0x101b1010
 * callers: 0x10012954
 * callees: none
 */

void __thiscall GameClient::Seat::UpdateWeaponInput(GameClient::Seat *this)
{
  unsigned int i; // edi
  int v3; // ecx
  int v4; // ecx

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 8);
    if ( !v3 || i >= (*((_DWORD *)this + 9) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(*((_DWORD *)this + 8) + 4 * i);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 108))(v4);
  }
}
